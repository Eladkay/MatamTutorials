#include "string.h"

void error(std::string error_message) {
	std::cout << "Error: " << error_message;
}
char* String::allocateAndCopy(const char* str, int size) {
	return strcpy(new char[size + 1], str);
}

String::String(const char* str) : m_length(strlen(str)), m_data(allocateAndCopy(str, strlen(str))) {
}
String::String(const String& str) : m_length(str.size()), m_data(allocateAndCopy(str.m_data, str.m_length)) {
}
String::~String() {
	delete[] m_data;
}
int String::size() const {
	return m_length;
}
const char* String::c_str() const {
	return m_data;
}
String& String::operator=(const String& str) {
	if (this == &str) {
		return *this;
	}
	delete[] m_data;
	m_data = allocateAndCopy(str.m_data, str.m_length);
	m_length = str.m_length;
	return *this;
}
String& String::operator+=(const String& str) {
	char* new_data = allocateAndCopy(m_data, this->m_length + 	str.m_length);
	strcat(new_data, str.m_data);
	delete[] m_data;
	m_length += str.m_length;
	m_data = new_data;
	return *this;
}
const char& String::operator[](int index) const {
	if (index >= size() || index < 0) {
		error("Bad index");
	}
	return m_data[index];
}
char& String::operator[](int index) {
	if (index >= size() || index < 0) {
		error("Bad index");
	}
	return m_data[index];
}
bool operator==(const String& str1, const String& str2) {
	return strcmp(str1.m_data, str2.m_data) == 0;
}
ostream& operator<<(ostream& os, const String& str) {
	return os << str.m_data;
}
istream& operator>>(istream& is, String& str) {
	return is >> str.m_data;
}
bool operator<(const String& str1, const String& str2) {
	return strcmp(str1.m_data, str2.m_data) < 0;
}
bool operator!=(const String& str1, const String& str2) {
	return !(str1 == str2);
}
bool operator<=(const String& str1, const String& str2) {
	return !(str2 < str1);
}
bool operator>(const String& str1, const String& str2) {
	return str2 < str1;
}
bool operator>=(const String& str1, const String& str2) {
	return str2 <= str1;
}
String operator+(const String& str1, const String& str2) {
	return String(str1) += str2;
}
