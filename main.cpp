#include "List.hpp"

#include <iostream>

bool Sort2Comparison(int a, int b)
{
	return a < b;
}

int main()
{
	List<int> list;
	
	list.InsertHead(1);
	list.InsertHead(2);
	list.InsertHead(3);
	
	list.RemoveHead();
	
	list.Search(2);
	
	list.Sort(Sort2Comparison);
	
	return 0;
}