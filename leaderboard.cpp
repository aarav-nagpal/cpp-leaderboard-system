#include<bits/stdc++.h>

class scoreboard
{
    std::vector<std::pair<int,std::string>> players;
    int p;
    public:
    scoreboard()
    {
        std::cout<<"Enter the Number of players: ";
        std::cin>>p;
        std::cout<<"Enter the scores of each player and thier name respectively:->\n";
        for (int i = 0; i < p; i++)
        {
            std::pair<int,std::string> a;
            std::cin>>a.second>>a.first;
            players.emplace_back(a);
        }
        std::sort(players.begin(), players.end(), [](const auto &a, const auto &b)
                  {
                      if (a.first != b.first)
                      {
                          return a.first > b.first;
                      }
                      return a.second < b.second;
                  });
        ;
    }
    void display_scoreboard(){
        std::cout << "🏆 Leaderboard\n-- -- -- -- -- -- -- -- -\n";
        int c=1;
        for(auto& i : players)
        {
            std::cout << c << ". " << std::setw(12) << std::left << i.second
                      << " -> " << i.first << " pts\n";
            c++;
        }
    }
};

int main()
{
    scoreboard india;
    india.display_scoreboard();
    return 0;
}
