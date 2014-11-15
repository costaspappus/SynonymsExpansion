#include <set>
#include <string>
#include "wnb/core/wordnet.hh"
#include "wnb/nltk_similarity.hh"

using namespace std;
using namespace wnb;

/**
* Produce all synset words using the WordNet library
*/
void produceWordNetWords(set<string> &wordSet){
	wordnet wn("/usr/local/WordNet-3.0/dict/", true);
	set<string> synWords;
	set<string>::iterator it;
	for(it=wordSet.begin(); it!=wordSet.end();++it){
		vector<synset> synsets = wn.get_synsets(*it);
		for (int i=0; i<synsets.size();i++){
			vector<string> words = synsets[i].words;
			for (int j=0; j<words.size();j++){
				synWords.insert(words[j]);
			}
		}
	}
	wordSet.insert(synWords.begin(), synWords.end());
}

int main(int argc, char *argv[])
{
	set<string> words;
	words.insert("cat");
	words.insert("dog");
	set<string>::iterator before;
	for(before=words.begin(); before!=words.end(); ++before){
		string word = *before;
		cout << word << endl;
	}
	produceWordNetWords(words);
	for(before=words.begin(); before!=words.end(); ++before){
		string word = *before;
		cout << word << endl;
	}
}
