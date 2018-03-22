//每输一个词，就输出一个1
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
using namespace std;
int main(int arg, char *argv[]){
	vector<string> ivec;
	string word;
	cin >> word;
	/*while(!word.empty()){
		cout << word << " 1" << endl;
		cin >> word;
		if(word.empty())
			break;
		ivec.push_back(word);
		//if(word[-1] == '\n'){
			//break;
		//}
	}*/
	while(cin >> word){
		if(word.empty())
			break;
		cout << word << " 1" << endl;
	}
	return 0;
}
