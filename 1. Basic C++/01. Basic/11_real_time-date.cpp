#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;
 
int main () {
  // Get the timestamp for the current date and time
  time_t timestamp;
  time(&timestamp);

  // Display the date and time represented by the timestamp
  cout << ctime(&timestamp);
  return 0;
}

// Note: This example displays the server's local 
//time, which may differ from your local time.