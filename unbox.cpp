#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
  string set;
  string mini[4];
  std::ofstream out;
  string url = "https://www.minisgallery.com/forum/phpBB3/viewtopic.php?f=6&t=30";

  printf("Congratulations on your new case! Set name: ");
  getline(cin,set);
  //cin.ignore(101, '\n');

  for ( int brick=0; brick<2; ++brick )
  {
    for ( int box=0; box<2; ++box )
    {
      for ( int m=0; m<2; ++m )
      {
        printf("Brick %d, box %d, mini #%d: ", brick+1, box+1, m+1);
        cin >> mini[m];
        cin.ignore(101, '\n');

        // Ask for size

        // Ask for rarity
      }
      printf("\n");
    }
  }

  printf("All done! Enjoy %s!\n\n",set.c_str());

  return 0;
}