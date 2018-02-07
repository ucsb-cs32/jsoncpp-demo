// Very simple jsoncpp test

#include <json/json.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " jsonfile" << endl;
    exit(1);
  }
  
  Json::Value root;
  Json::Reader reader;
  ifstream test(argv[1], ifstream::binary);
  string cur_line;
  bool success;
  
  do {
    getline(test, cur_line);
    cout << "Parse line: " << cur_line;
    success = reader.parse(cur_line, root, false);
    cout << root << endl;
  } while (success);
  
  cout << "Done" << endl;
}
