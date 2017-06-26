// Name: Ali Bayati 
// Word Separator


#include<iostream>
#include<string>
#include<cctype>


using namespace std;


int main()
{
	char wq;
	int i, siz;
	
	cout << "            Word Separator" << endl << endl;
	cout << "Enter sentence:";
	string s;
	getline(cin,s);
	siz = s.size();

	
	
	for (i = 1; i < siz; i++)
	{
		if (isupper(s[i]))
		{
			wq = tolower(s[i]);
			s.insert(i, 1, ' ');
			s[i+1] = wq;
		
		}
		
	}
	cout << s<<endl;
	
	return 0;
}/*Output
             Word Separator

Enter sentence:StopAndTryOurCasino.
Stop and try our casino.
Press any key to continue . . .*/