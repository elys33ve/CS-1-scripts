#pragma once

class tree {
private:
	int* tree_array;		//dynamic array

	int curr_array_size=0;	//current size of array

	int index=0;			//current position in tree --> tree_array[index] is tree element index

	void resize();			//resize array
	
	int get_left_index();		//return index in tree_array to left
	int get_right_index();		//return index in tree_array to right

	int left_child(int idx);		//return left child of index
	int right_child(int idx);		//return right child of index

	int idx_depth(int idx);				//return the depth of an index
	int depth_num_items(int depth);		//return number of items in depth

	int depth_high_bound(int depth);	//return highest index in depth range
	int depth_low_bound(int depth);		//return lowest index in depth range

	int get_parent(int idx);		//return index of partent of node current index (root = -1)

public:
	void print();			//print all values in array (seperate lines)	
	int get_size();			//return size of current array
	int depth();			//return depth of current array

	int get_value();		//return value of current index

	bool left_null();		//check if left child of curr node is null
	bool right_null();		//check if right child of curr node is null

	void go_left();			//change curr node to left child
	void go_right();		//change curr node to right child

	void reset_to_head();	//reset curr index value to point to head of tree

	void insert(int val);	//insert elements into binary search tree
	// (elements to left <= parent)
	// (elements to right > parent)

	void remove();			//remove the current index
	// (all children of curr index -- reinserted into tree)


};
