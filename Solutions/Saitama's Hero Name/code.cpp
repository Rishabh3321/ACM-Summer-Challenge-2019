 #include <bits/stdc++.h>
using namespace std;
 
const char MAX_CHAR = 26;
long int k;
char check;
 

void countFreq(string str, long int freq[], long int len) {
	for (long int i = 0; i < len; i++)
		freq[str.at(i) - 'a']++;
}
 

string findOddAndRemoveItsFreq(long int freq[]) {
	string odd_str = "";
	for (long int i = 0; i < MAX_CHAR; i++) {
		if (freq[i] % 2 != 0) {
			freq[i]--;
			odd_str = odd_str + (char) (i + 'a');
			return odd_str;
		}
	}
	return odd_str;
}
 

string findPalindromicString(string str) {
 
	long int len = str.length();
 
	long int freq[MAX_CHAR] = { 0 };
	countFreq(str, freq, len);
 
	long int flag = 0;

 
	for (long int i = 0; i < MAX_CHAR; i++)
		if (freq[i] % 2 != 0) {
 
			if (flag) {
				str.erase(std::find(str.begin(), str.end(), (char) ('a' + i)));
				freq[i]--;
 
			} else {
				check = (char) ('a' + i);
				flag = 1;
			}
 
		}
 
 
	if (str.length() < k) {
 
		return "111";
	}
 
	//cout<<str;
	
 
	string odd_str = findOddAndRemoveItsFreq(freq);
 
	string even1 = "", even2 = " ";
 

	for (long int i = 0; i < MAX_CHAR; i++) {
		string temp = "";
		if (freq[i] != 0) {
			char ch = (char) (i + 'a');
 
		
			for (long int j = 1; j <= freq[i] / 2; j++)
				temp = temp + ch;
 
		
			even1 = even1 + temp;
 
		
			even2 = temp + even2;
		}
	}
 

	return (even1 + odd_str + even2);
 
}
 
int main() {
	check = '7';
 
	string s1, s2, s3;
	long int n;
	cin >> n >> k;
	char c, dd;
 
	for (long int i = 0; i < n; i++) {
		cin >> c;
		s1.push_back(c);
 
	}
	if (k > n) {
		cout << "NO";
		return 0;
	}
	
	//cout << s1.length() << endl;
 
	s2 = findPalindromicString(s1);
	if (s2 == "111") {
		cout << "NO";
		return 0;
	}
 
	s2.pop_back();
	//odd
 
	if (k % 2) {
		//cout << s2 << endl;
		if (k == 1 && check == '7') {
			cout << "YES" << endl << s2[0];
			return 0;
 
		}
		if (check == '7') {
			s3 = s2.substr(0, 1 + (k / 2));
			s3.append(s2.substr(s2.length() - (k / 2), k / 2));
			cout << "YES" << endl << s3;
 
			return 0;
		}
 
		s3 = s2.substr(0, k / 2);
		//cout << s3 << endl;
		dd = (check < s2[k / 2]) ? check : s2[k / 2];
		s3.push_back(dd);
		
		s3.append(s2.substr(s2.length() - (k / 2), k / 2));
		//cout << s3 << endl;
	}
 
	else {
		s3 = s2.substr(0, k / 2);
		s3.append(s2.substr(s2.length() - (k / 2), k / 2));
 
	}
	cout << "YES" << endl << s3;
 
	return 0;
}
