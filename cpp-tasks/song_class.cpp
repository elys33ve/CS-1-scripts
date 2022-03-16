#include <iostream>
#include <string>
#include <vector>
using namespace std;

// read a list of song durations and names from input
// for each line of input, set duration and name of current song
// then add to playlist. input first receives duration, then name

class Song {
   public:
      void set_song(int dur, string nam) {    //set durration and name
         duration = dur;
         name = nam;
      }
      void print_song() const {            //print: duration - name
         cout << duration << " - " << name << endl;
      }
      int get_dur() const { return duration; }  //return duration
      string get_nam() const { return name; }   //return name

   private:
      int duration;
      string name;
};

int main() {
   vector<Song> playlist;  //playlist vector
   Song song1;             //current song - temp
   int dur1;       //current duration - temp
   string nam1;    //current name - temp
   unsigned int i;

   cin >> dur1;      //get initial duration input
   while (dur1 >= 0) {           //until duration input negative
      getline(cin, nam1);  //get name input
      song1.set_song(dur1, nam1);   //set song duration and name 
      playlist.push_back(song1);    //add to playlist vector
      cin >> dur1;         //get duration input
   }

   for (i = 0; i < playlist.size(); ++i) {      //for playlist vector size
      song1 = playlist.at(i);    
      song1.print_song();        //print songs
   }

   return 0;
}
