#include "Header.h"

MyPhone::MyPhone() 
{
	color = "NoneColor"; id = weight = height = depth = width = 0;
}

void MyPhone::info()
{
	std::cout << "Id: " << getId() << ", color: " << getColor()
		<< ", weight: " << getWeight() << "mm, height: " << getHeight()
		<< "mm, depth: " << getDepth() << "mm, width: " << getWidth() << "mm" << std::endl;
}

int MyPhone::getId()
{
	return id;
}

double MyPhone::getHeight()
{
	return height;
}

double MyPhone::getDepth()
{
	return depth;
}
double MyPhone::getWeight()
{
	return weight;
}
double MyPhone::getWidth()
{
	return width;
}

std::string MyPhone::getColor()
{
	return color;
}

MyPhone& MyPhone::setId(int _id)
{
	id = _id; return *this;
}

MyPhone& MyPhone::setColor(std::string _color)
{
	color = _color; return *this;
}

MyPhone& MyPhone::setWidth(double _width)
{
	if (_width > 0) width = _width; return *this;
}

MyPhone& MyPhone::setHeight(double _height)
{
	if (_height > 0) height = _height; return *this;
}

MyPhone& MyPhone::setWeight(double _weight)
{
	if (_weight > 0) weight = _weight; return *this;
}

MyPhone& MyPhone::setDepth(double _depth)
{
	if (_depth > 0) depth = _depth; return *this;
}

MyPhone& MyPhone::redact(int _id, std::string _color, double _height, double _width, double _depth, double _weight)
{
	setId(_id);	setColor(_color); setHeight(_height);
	setWidth(_width); setDepth(_depth); setWeight(_weight);

	return *this;
}
