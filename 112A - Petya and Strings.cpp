#include <iostream>
#include <cctype>

int main()
{
	using std::cout;
	using std::cin;
	using std::string;
	
	string n, m;
	cin >> n >> m;
	
	int length = sizeof(n)/sizeof(n[0]);
	
	for (char &c : n)
	{
		c = std::tolower(c);
	}
	
	for (char &s : m)
	{
		s = std::tolower(s);
	}
	
	if (n == m)
	{
		cout << 0;
	}
	
	if (n < m)
	{
		cout << -1;
		
	}
	
	if (n > m)
	{
		cout << 1;
		
	}
	
	return 0;	
		
}	