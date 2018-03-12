#pragma once
struct Element
{
	int data;
	Element *leg;
};
void insertFront(Element *& cap, int val);
void afisare(Element *cap);