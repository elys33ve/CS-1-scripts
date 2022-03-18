#include <iostream>
#include <string>
using namespace std;

// define the Team class for class member function GetWinPercentage(), the formula is:
      //teamWins / (teamWins + teamLosses)

////////// CLASS Team
class Team {

   private:
      string name;
      int wins;
      int losses;

   public:
      void set_name(string t_name);
      void set_wins(int t_wins);
      void set_losses(int t_losses);
      string get_name();
      int get_wins();
      int get_losses();
      double get_win_percent();

};


////////// Team FUNCTION DEFINITIONS
void Team::set_name(string t_name){
   name = t_name;
}
void Team::set_wins(int t_wins){
   wins = t_wins;
}
void Team::set_losses(int t_losses){
   losses = t_losses;
}

string Team::get_name(){
   return name;
}
int Team::get_wins(){
   return wins;
}
int Team::get_losses(){
   return losses;
}

double Team::get_win_percent(){
   double win_percent = wins / (wins + losses);
   return win_percent;
}


////////// main
int main(int argc, const char* argv[]) {
   string name;
   int wins;
   int losses;
   Team team;

   cin >> name;
   cin >> wins;
   cin >> losses;

   team.set_name(name);
   team.set_wins(wins);
   team.set_losses(losses);

   if (team.get_win_percent() >= 0.5) {
      cout << "Congratulations, Team " << team.get_name() <<
              " has a winning average!" << endl;
   }
   else {
      cout << "Team " << team.get_name() << " has a losing average." << endl;
   }
}
