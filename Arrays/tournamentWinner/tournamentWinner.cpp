#include <vector>
#include <unordered_map>
using namespace std;

string tournamentWinner(
  vector<vector<string>> competitions, vector<int> results
) {
  unordered_map<string, int> scoreTable;
  int numComps = competitions.size();
  string leader = "";
  int maxPoints = 0;
  
  
  for (int i = 0; i < numComps; i++) {
    vector<string> competition = competitions[i];
    int result = results[i];
    string winner = competition[!result];
    scoreTable[winner] += 3;

    if (leader == "") {
      leader = winner;
      maxPoints = scoreTable[winner];
    } else if (scoreTable[winner] > maxPoints) {
      leader = winner;
      maxPoints = scoreTable[winner];
    }

  }
  return leader;
}

