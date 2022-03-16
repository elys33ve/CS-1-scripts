#include <iostream>
#include <string>
#include <vector>
using namespace std;

// print all the songs from the album whose duration is longer than 
// the value of the parameter dur.

///////////////////////////////  Song class
class Song {
   public:
      void set_song(int dur, string nam) {               //set song
         duration = dur;
         name = nam;
      }
      void print_song() const {                          //print song
         cout << duration << " - " << name << endl;
      }
      int get_dur() const { return duration; }              //get song duration
      string get_nam() const { return name; }               //get song name

   private:
      int duration;
      string name;
};

///////////////////////////////  Album class
class Album {
   public:
      void set_name(string album_name) { name = album_name; }     //set album name
      void in_songs();                                            //song inputs
      void print_name() const { cout << name << endl; }           //print album name
      void print_longer(int dur) const;                           //print longer than

   private:
      string name;
      vector<Song> album_songs;
};

///////////////   in_songs ---> get song inputs and stor in album_songs
void Album::in_songs() {
   Song song1;
   int dur1;
   string nam1;

   cout << "Songs (duration name):\n";

   cin >> dur1;
   while (dur1 >=  0) {
      getline(cin, nam1);
      song1.set_song(dur1, nam1);
      album_songs.push_back(song1);
      cin >> dur1;
   }
}

///////////////   print_longer ---> print songs with duration longer than parameter
void Album::print_longer(int dur) const {
   unsigned int i;
   Song song1;

   cout << "Songs longer than " << dur << " seconds:" << endl;

   for (i=0; i < album_songs.size(); i++){      //for each song
      song1 = album_songs.at(i);    //song in vector
      if (song1.get_dur() > dur){   //duration of song greater than dur
         song1.print_song();        //print song name and duration
         cout << endl;
      }
   }

}

///////////////   main
int main() {
   Album album1;
   string album_name;

   cout << "Album name:  ";
   getline(cin, album_name);        //get album name
   album1.set_name(album_name);     //set name
   album1.in_songs();               //get songs
   album1.print_name();             //print album name
   album1.print_longer(150);        //print songs longer than

   return 0;
}
