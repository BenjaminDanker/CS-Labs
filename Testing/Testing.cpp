#include <iostream>
#include <string>
#include <memory>

class Shape {
public:
	void setBackground(std::string background) {
		this->background = background;
	}
	std::string getBackground() {
		return background;
	}
protected:
	std::string background;
};

class Rectangle: public Shape{
public:
	Rectangle() {
		width = 0;
		height = 0;
	}
	Rectangle(int width, int height) {
		setBackground("Background is Rectangle");
		this->width = width;
		this->height = height;
	}
	int getArea() const {
		return width * height;
	}
	void draw() const {
		std::cout << width * height << std::endl;
	}
private:
	int width;
	int height;
};

class Circle: public Shape {
public:
	Circle() {
		radius = 0;
	}
	Circle(float radius) {
		background = "Background is Circle";
		this->radius = radius;
	}
	float getArea() const {
		return 3.14 * radius * radius;
	}
	float getPerimeter() const {
		return 2 * 3.14 * radius;
	}
private:
	float radius;
};

int main()
{
	Rectangle rectangle(5, 10);
	rectangle.draw();

	Circle circle(2);
	std::cout << circle.getArea() << std::endl;

}