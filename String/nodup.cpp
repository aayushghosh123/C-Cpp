#include <bits/stdc++.h>
 using namespace std;
int main()
{
  	string s;
  	int i, j, k;
  	i = 0;
  	cout<<" Please Enter any String :  ";
  	cin>>s;
  	 	int n = s.length();
  	while(i < n)
  	{
  		j = i + 1;
  		while(s[j] != '\0')
  		{
  			if(s[j] == s[i])  
			{
				k = j;			
  				while(s[k] != '\0')
				{
					s[k] = s[k + 1];
					k++;
				}
 			}
 			j++;
		}
		i++;
	}
	cout<<"\n The Final String after Removing All Duplicates =" << s;
  	return 0;
}