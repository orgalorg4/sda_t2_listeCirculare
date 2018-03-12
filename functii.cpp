#include <iostream>
#include "Header.h"

void insertFront(Element *& cap, int val)
{
	Element *q = new Element;
	q->data = val;
	Element *p = cap;
	if (cap)
	{
		do
		{
			p = p->leg;
		} while (p->leg != cap->leg);
	}
	p->leg = q;
	q->leg = cap;
	cap = q;
}

void afisare(Element * cap)
{
	if (!cap)
	{
		Element *p = cap;
		do
		{
			std::cout << p->data << " ";
			p = p->leg;
		} while (p->leg != cap->leg);
		std::cout << std::endl;
	}
}
