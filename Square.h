#pragma once
class Square {

public:
	Square();
	Square(float size);
	Square(float left, float bottom, float size);
	~Square();
	void Print();
	void Move(float deltaLeft, float deltaBottom);
	void SetSize(float size);

	
private:
	float m_Left;
	float m_Bottom;
	float m_Size;

	float GetArea();
	float GetPerimeter();



};