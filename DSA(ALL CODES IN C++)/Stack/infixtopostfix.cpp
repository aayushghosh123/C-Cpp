// Here we use stack<char>st for Stack operations 
#include<bits/stdc++.h> 
using namespace std; 

int prec(char c)
{ 
	if(c == '^') 
	return 3; 
	else if(c == '*' || c == '/') 
	return 2; 
	else if(c == '+' || c == '-') 
	return 1; 
	else
	return -1; 
} 
void infixToPostfix(string s) 
{ 
	stack<char>st; 
	st.push('N'); //yeh hum check karne ke liye kiye hai ke hum array ke last mein  paunch gaye hai.
	int l = s.length(); 
	string ns; //yeh hamne naya string banaya hai 
	for(int i = 0; i < l; i++) 
	{
		if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')){
		ns+=s[i];
         }
		else if(s[i] == '(') {
		st.push('('); //agar scanned element yeh milta hai toh hum isse stack mein push kar dete hai
         }
		//agar ')' yeh mila toh hum log yeh consider karte hai ke infix expression khatam ho gya hai toh issme hum kya
        // karenge ke hum jo bhe input aaiyega usko tab tak stack mein push aur phir pop karenge jab tak humko
        // ')' nhi mil jata
		else if(s[i] == ')') 
		{ 
			while(st.top() != 'N' && st.top() != '(') 
			{ 
				char c = st.top(); 
				st.pop(); 
			ns += c; 
			} 
			if(st.top() == '(') 
			{ 
				char c = st.top(); 
				st.pop(); 
			} 
		}
		//If an operator is scanned 
		else{ 
			while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
			{ 
				char c = st.top(); 
				st.pop(); 
				ns += c; 
			}
			st.push(s[i]);
		} 

	} 
	//Pop all the remaining elements from the stack 
	while(st.top() != 'N') 
	{ 
		char c = st.top(); 
		st.pop(); 
		ns += c; 
	} 
	
	cout << ns << endl; 

}
int main() 
{ 
	string exp;
    cin>>exp; 
	infixToPostfix(exp); 
	return 0; 
}