#include <iostream>
#include <SFML/Graphics.hpp>

class Vec2
{
public:
	float x = 0;
	float y = 0;

	Vec2() {}

	Vec2(float xin, float yin)
		: x(xin)
		, y(yin)
	{
		
	}

	void operator += (const Vec2& rhs)
	{
		x += rhs.x;
		y += rhs.y;
	}

	Vec2 operator + (const Vec2& rhs)
	{
		return Vec2(x + rhs.x, y + rhs.y);
	}

	Vec2& add(const Vec2& v)
	{
		x += v.x;
		y += v.y;

		return *this;
	}

	Vec2& scale(float s)
	{
		x *= s;
		x *= s;

		return *this;
	}

	float dist(const Vec2& v) const
	{

		return sqrtf((v.x - x) * (v.x - x) + (v.y - y) * (v.y - y));
	}
};

int main()
{
	Vec2 v1(100, 200);
	Vec2 v2(50, 75);
	Vec2 v3(1000, 2000);

	float dist = v1.dist(v2);

	std::cout << v3.x << " " << dist;



	
	/*sf::RenderWindow window(sf::VideoMode(400, 400), "TEST");
	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
				window.close();
		}
	}*/
	

	return 0;
}
