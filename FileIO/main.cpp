#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main(){
  ifstream file("data.csv");
  string line, first, second, text;
  int num1, num2, total;

  if(!file){
    cout << "Could not open file" << endl;
    return 1;
  }
  while(getline(file, line)){
    if(line.empty()){
      continue;
    }
    stringstream row(line);
    getline(row, first, ',');
    getline(row, second, ',');
    row >> ws;
    getline(row, text);

    stringstream number1(first), number2(second);
    number1 >> num1;
    number2 >> num2;
    total = num1 + num2;

    for(int i = 0; i < total; i++){
      cout << text << " ";
    }
    cout << endl;
  }
  file.close();
  return 0;
}

