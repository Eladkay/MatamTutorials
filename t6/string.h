#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::ostream;
using std::istream;

class String {
	int m_length;
	char* m_data;

	static char* allocateAndCopy(const char* data, int size);

public:
	String(const char* str = ""); // String s1; or String s1 = "aa";
	String(const String& str); // String s2(s1);
	~String();
	int size() const;
	String& operator=(const String&); // s1 = s2;
	String& operator+=(const String& str); // s1 += s2;
	const char& operator[](int index) const; // s[5] for const s
	char& operator[](int index); // s[5] for non-const s
	const char* c_str() const; // No deallocation needed
	friend ostream& operator<<(ostream&, const String&); // cout << s1;
	friend istream& operator>>(istream& is, String& c);

	friend bool operator==(const String&, const String&); // s1==s2
	friend bool operator<(const String&, const String&); // s1<s2
};

bool operator!=(const String& str1, const String& str2);
bool operator<=(const String& str1, const String& str2);
bool operator>(const String& str1, const String& str2);
bool operator>=(const String& str1, const String& str2);
String operator+(const String& str1, const String& str2);

