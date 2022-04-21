#include"tree.h"
#include<iostream>
#include<cmath>

using namespace std;



/////	private		/////


//RESIZE ARRAY
void tree::resize(){								//resize array --> add new row/layer to depth
	int new_size = 2 * curr_array_size + 1;	//add new layer depth

	if (curr_array_size == 0)	//if array empty, add 1 (first resize)
		new_size = 1;
	
	int* new_tree = new int[new_size];	//pointer to allocated memory for new array size
	for (int i = 0; i < new_size; i++)	//fill new tree unassigned values with -1
		new_tree[i] = -1;

	for (int i = 0; i < curr_array_size; i++)	//new_tree = values of tree_array
		new_tree[i] = tree_array[i];


	delete tree_array;			//delete old tree_array
	tree_array = new_tree;		//tree_array updated with new space (and null values)
	curr_array_size = new_size;	//update tree_array size
	
}

//GET PREVIOUS (LEFT) INDEX
int tree::get_left_index(){							//return index in tree_array to left
	index = index -1;
	return index;
}
//GET NEXT (RIGHT) INDEX
int tree::get_right_index(){						//return index in tree_array to right
	index = index +1;
	return index;
}

//GET LEFT CHILD
int tree::left_child(int idx){						//return index of left child of idx
	int l_idx = (idx)*2 +1;
	return l_idx;
}
//GET RIGHT CHILD
int tree::right_child(int idx){						//return index of right child of idx
	int r_idx = (idx)*2 +2;
	return r_idx;
}

//GET DEPTH OF INDEX
int tree::idx_depth(int idx){						//return the depth/layer of idx
	int depth = log2(idx + 1) + 1;
	return depth;
}
//GET NUM ITEMS IN DEPTH
int tree::depth_num_items(int depth){				//return number of items in depth/layer
	int items = pow(2, depth-1);
	return items;
}

//GET UPPER BOUND OF DEPTH
int tree::depth_high_bound(int depth){				//return highest index in depth/layer range
	int h_bound = 0;
	
	for (int i=0; i<depth; i++){
		h_bound = h_bound + pow(2, i);
	}

	h_bound = h_bound - 1;
	return h_bound;
}
//GET LOWER BOUND OF DEPTH
int tree::depth_low_bound(int depth){				//return lowest index in depth/layer range
	int l_bound = 0;
	
	for (int i=0; i<depth-1; i++){
		l_bound = l_bound + pow(2, i);
	}
	return l_bound;
}

//GET INDEX PARENT
int tree::get_parent(int idx){						//return index of partent of node current index (root = -1)
	int parent;

	if (idx == 0){			//if head of tree, return -1
		parent = -1;
	}
	else{
		int i_depth = idx_depth(idx);		//idx depth	
		int p_depth = i_depth - 1;			//parent idx depth
		int i_low = depth_low_bound(i_depth);	//idx depth low bound
		int p_low = depth_low_bound(p_depth);	//parent depth low bound

		parent = (idx - i_low) / 2;
		parent = p_low + parent;
	}

	return parent;
}



/////	public	/////

//PRINT ARRAY VALUES
void tree::print(){									//print all values in array (seperate lines)
	for (int n = 0; n < curr_array_size; n++)
		cout << tree_array[n] << endl;
}
//GET TREE DEPTH
int tree::depth(){									//return depth of current array
	return log2(curr_array_size) + 1;
}
//GET ARRAY SIZE
int tree::get_size(){								//return size of current array
	return curr_array_size;
}

//GET CURRENT INDEX VALUE
int tree::get_value(){								//return value of current index
	return tree_array[index];
}

//CHECK LEFT CHILD = NULL
bool tree::left_null(){								//check if left child of curr node is null
	int child = left_child(index);
	bool null = false;

	if (child >= curr_array_size){
		null = true;
	}
	return null;
}
//CHECK RIGHT CHILD = NULL
bool tree::right_null(){							//check if right child of curr node is null
	int child = right_child(index);
	bool null = false;

	if (child >= curr_array_size){
		null = true;
	}
	return null;
}

//CURRENT INDEX = INDEX PARAMETER
void tree::go_to(int idx){							//change curr node to index parameter
	index = idx;
}
//CURRENT INDEX = LEFT CHILD
void tree::go_left(){								//change curr node to left child
	index = left_child(index);
}	
//CURRENT INDEX = RIGHT CHILD									
void tree::go_right(){								//change curr node to right child
	index = right_child(index);
}

//CURRENT INDEX = PARENT
void tree::go_parent(){								//change curr node to parent
	index = get_parent(index);
}

//CURRENT INDEX = NEXT
void tree::go_next(){								//change curr node to next
	index = index +1;
}
//CURRENT INDEX = PREVIOUS
void tree::go_previous(){							//change curr node to previous
	index = index -1;
}

//RESET TO HEAD OF TREE		
void tree::reset_to_head(){							//reset curr index value to point to head of tree
	index = 0;		//current index reset to 0
}

//INSERT NEW ELEMENT
void tree::insert(int val){							//insert elements into binary search tree
	if (index >= curr_array_size){	//if curr idx larger than array size (> last idx in array)
		resize();						//resize (add new layer depth)
	}

	tree_array[index] = val;	//add new value to array at current idx
}

//REMOVE CURRENT INDEX
void tree::remove(){								//remove the current index
	int l_child = left_child(index);						//(replace idx & all children as null)
	int next_right = 2;		//next to the right are derivative/children of idx
	int i; int j;

	tree_array[index] = -1;		//current idx value becomes null

	for (i=index; i<curr_array_size; i++){	//for size of current index
		if (i == l_child){
			for (j=0; j<next_right; i++){		//change next children to null
				tree_array[i+j] = -1;
			}
			i = i + next_right;					//update i to skip next (already changed)
			next_right = next_right * 2;		//num children in next layer is doubled
		}
	}
}
