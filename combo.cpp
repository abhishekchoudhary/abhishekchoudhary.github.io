// The purpose of this program is to find all unique sets of three
// from 9 given elements in a 3x3 array.

# include <iostream>
# include <cstdlib>

using namespace std;

int main()
{
  std::cout<<"Hello world!\n";      // All systems okay!

  srand(time(NULL));                //
  int arr[3][3];                    //
                                    //
  for(int i = 0; i < 3; i++)        //    This is all for
  {                                 //    filling up arrays
    for(int j = 0; j< 3; j++)       //    with random numbers.
    {                               //    Non-critical code.
      arr[i][j] = (rand() % 10);    //
    }                               //
  }                                 //

  // Now, we have three logical 3-item arrays, essentially a single 3x3.
  // This is done because three separate arrays would create unnecessary
  // hassles that are not central to the algorithm.

  std::cout << "\n\nWe got the following 3 arrays:\n\n";

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cout << arr[i][j] << "\t";
    }
    std::cout << "\n";
  }
  
  //////////////////////////////////////////////////////////////////////
  std::cout << "The seventh element is:" << arr[6/3][6%3] << "\n";    // UNDERSTAND THIS NOTATION!
  //////////////////////////////////////////////////////////////////////

  int results[84][3];               // This will hold the results
  int placed_counter = 0;           // This will count the number of results we've computed

  for(int a = 0; a < 7; a++)
  {
    for(int b = a+1; b < 8; b++)
    {
      for(int c = b+1; c < 9; c++)
      {
        results[placed_counter][0] = arr[a/3][a%3];
        results[placed_counter][1] = arr[b/3][b%3];
        results[placed_counter][2] = arr[c/3][c%3];
        
        placed_counter++;
      }
    }
  }

  std::cout << "\n\n We have now computed the premutations as:\n";

  for(int p = 0; p < 84; p++)
  {
    for(int q = 0; q < 3; q++)
    {
      std::cout << results[p][q] << "\t";
    }
    std::cout << "\n";
  }

  return 0;
}
