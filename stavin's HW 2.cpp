//HW WEEK 2/3
//GROUP : SEFIRA KARINA,REGITA ISADA,NATHANIA KEZIA

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm> //because we're going to use sort
using namespace std ; 

int main()
{
  const int SIZE = 500; // extimated words from file
  string words[SIZE]; 
  string str; 
  
	vector <string> stringholder;

	ifstream file("lyrics.txt"); // to open the file
  
  
  for (int i = 0; (file >> str) ; ++i) 
  {      
                                     
	 	while (file>>str) 
		 {
			stringholder.push_back(str); //store the words in the vector
	 	}
	
		sort (stringholder.begin(),stringholder.end()); // sort from the beggining till the end of the vector
														// kinda sort to words to be alphabetically (ex : a i u e o -> a e i o u)
														// this is needed because it makes the word counting part to be easier
	 
	 	int vsize=stringholder.size(); // get the size of the vector
	 
	 	int wordcount=1; // because if the word exist in the file , it's gonna appeared at least once
	 	str=stringholder[0];
	 
	 
	 	for (int i=1 ; i< vsize ; i++)
		 {
	 	
	 		if(str != stringholder[i] )
			 {	 		
	 			int howmuchstars  = wordcount; // the amount of * printed is equal to the wordcount
	 			string stars = "";
	 	
				for (int j=0 ; j<howmuchstars ; j++)
				{
					stars += "*";
				}
	 		
	 			cout << str <<" = " << wordcount << " = "<< stars <<endl ;
	 			wordcount=0;
	 			str=stringholder[i] ;
	 		}
	 		wordcount++; // if the same word appeared after a word , the amount of wordcount will increase
	 	}
	 
}
  
  
  file.close();

  return 0;
}  
