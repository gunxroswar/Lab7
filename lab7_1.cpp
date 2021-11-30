#include<iostream>
#include<string>

using namespace std;

string reverse(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string upper(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string lower(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text;
    cout << "Input text: "; 
	cin >> text;
    cout << "Reversed text: " << reverse(text) << "\n" ;
	if(upper(text) == upper(reverse(text)))
		{
			cout << "Palindrome: Yes";
		}
	else
		{
			cout << "Palindrome: No";
		}
}
