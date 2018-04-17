#include"Square.h"
#include<iostream>
Square::Square() :Square{ 0.0f,0.0f,0.0f } {}
 Square::Square(float size):Square{0.0f,0.0f,size}
 {
}
 Square::Square(float left, float bottom, float size)
	 :m_Left{ left }, m_Bottom{ bottom }, m_Size{ size }
 {
 }
 Square::~Square() {
 }
 void Square::Print() {
	 std::cout << "Left: " << Square::m_Left << std::endl;
	 std::cout << "Bottom: " << Square::m_Bottom << std::endl;
	 std::cout << "Size: " << Square::m_Size << std::endl;
	 std::cout << "Area: "<<Square::GetArea() << std::endl;
	 std::cout <<"Perimeter: "<<Square::GetPerimeter()<< std::endl;
 }
 void Square::Move(float deltaLeft, float deltaBottom) {
	 m_Left += deltaLeft;
	 m_Bottom += deltaBottom;
 }
 void Square::SetSize(float size) {
	 m_Size = size;
 }
 float Square::GetArea() {
	 return m_Size * m_Size;
 }
 float Square::GetPerimeter() {
	 return m_Size * 4;
 }