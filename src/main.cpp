
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "commons.h"

struct Vector2
{
	float x, y;
	Vector2(float x, float y) : x(x), y(y) {}
	Vector2 Add(const Vector2 &other) const
	{
		return *this + other;
	}
	Vector2 Multiply(const Vector2 &other) const
	{
		return *this * other;
	}

	Vector2 operator+(const Vector2 &other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator*(const Vector2 &other) const
	{
		return Vector2(x * other.x, y * other.y);
	}
	bool operator==(const Vector2 &other) const
	{
		return x == other.x || y == other.y;
	}
	bool operator!=(const Vector2 &other) const
	{
		return !(*this == other);
	}
};

struct Integer
{
	long int data;

	Integer(int i) : data(i){};
	int get() const { return data; }

	Integer operator^(const int exponent)
	{
		return Integer(std::pow(data, exponent));
	}

	friend Integer operator^(const Integer &base, const int exponent)
	{
		return Integer(static_cast<int>(std::pow(base.data, exponent)));
	}

	friend Integer operator^(const Integer &base, const Integer exponent)
	{
		return Integer(static_cast<int>(std::pow(base.get(), exponent.get())));
	}
};

std::ostream &operator<<(std::ostream &stream, const Vector2 &other)
{
	stream << other.x << ", " << other.y;
	return stream;
}

std::ostream &operator<<(std::ostream &stream, const Integer &obj)
{

	stream << obj.get();
	return stream;
}

int main()
{
	Vector2 position(3.0f, 1.0f);
	Vector2 speed(7.0f, 9.0f);
	Vector2 powerup(2.0f, 5.f);

	Vector2 result1 = position + speed * powerup;
	Vector2 result2 = (position + speed);

	if (result1 != result2)
	{
		std::cout << "Not equals: \n\t" << result1 << "\n\t" << result2 << std::endl;
	}

	Integer res1 = Integer(2) ^ 3;
	std::cout << "Res: " << res1 << std::endl;

	Integer res2 = 2;
	res2 = res2 ^ 8;
	std::cout << "Res: " << res2 << std::endl;

	Integer res3(2);
	res3 = res3 ^ 10;
	std::cout << "Res: " << res3 << std::endl;
}
