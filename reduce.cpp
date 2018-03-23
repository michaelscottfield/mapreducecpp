#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
using namespace std;
int main()
{
	map<string, int> wordcount = {};

	map<string, int>::iterator it;
	//string words[] = {'edfr', 'edfr', 'lioo', 'lioo', 'lioo'};
	string *words = new string[100];
	string word;
	int numofwords = 0;
	cin >> word;
	while(!word.empty()){
		//if(word[-1] == '~'){
			//break;
		//}
		/*if(word[-1] == '@'){
			cout << "damn it" << endl;
			break;
		}*/
		if(word == "eof"){
			break;
		}
		words[numofwords] = word;
		numofwords ++;
		//words.add(word);
		cin >> word;
	}
	//words = new string[numofwords];
	//for(int i = 0; i < numofwords; i++){
		//words[i] = 
	//for(word in words){
		
	//}
	for(int j = 0; j < numofwords; j++){
		it = wordcount.find(words[j]);
		if(it == wordcount.end()){
		//if(map.find(words[j]) == map.end()){
			wordcount.insert(make_pair(words[j], 1));		
		}
		else{
			wordcount[words[j]] += 1;
		}
	}
	for(it = wordcount.begin(); it != wordcount.end(); ++it)
	{
		cout << it-> first << " " << it -> second << endl;
	}
	return 0;
}
