# Song-playlist
#include <iostream>
#include <string>

using namespace std;

// Define the structure for a song
struct Song {
    string title;
    string artist;
    Song* next;
};
