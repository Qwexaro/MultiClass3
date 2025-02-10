#pragma once
#include <iostream>
#include <vector>
#include <string>


class MyPhone 
{
	int id;
	std::string color;
	double weight, width, height, depth;
public:
	MyPhone();
	MyPhone& redact(int _id, std::string _color, double _height, double _width, double _depth, double _weight);
	MyPhone& setId(int _id);
	MyPhone& setColor(std::string _color);
	MyPhone& setWeight(double _weight);
	MyPhone& setHeight(double _height);
	MyPhone& setDepth(double _depth);
	MyPhone& setWidth(double _width);
	std::string getColor();
	void info();
	int getId();
	double getWeight();
	double getWidth();
	double getHeight();
	double getDepth();
};
