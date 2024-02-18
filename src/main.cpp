
#include "commons.h"

class String
{
public:
	String(const char *string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size];
		memcpy(m_Buffer, string, m_Size);
	}

	~String()
	{
		delete[] m_Buffer;
	}
	String(const String &other) : m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
		std::cout << "Copied" << std::endl;
	}
	friend std::ostream &operator<<(std::ostream &o, const String &str);
	char &operator[](const unsigned int index)
	{
		return m_Buffer[index];
	}

private:
	char *m_Buffer;
	unsigned int m_Size;
};

std::ostream &operator<<(std::ostream &o, const String &str)
{
	o << str.m_Buffer;
	return o;
}

void println(const String &string)
{
	std::cout << string << std::endl;
}

int main()
{
	String str = "Daniel";
	String ss = str;
	ss[4] = 'l';
	ss[5] = 'o';
	println(ss);
	println(str);
}
