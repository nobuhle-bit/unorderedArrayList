// ListApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "list.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
List L;

L.Insert (10); L.Insert (15); L.Insert (20);
L.ShowData ();
L.Delete (15); 
L.ShowData ();
L.Insert(30); L.Insert(50); L.Delete (10); 
L.ShowData (); 


//List S;
//
//S.Insert ("nobuhle"); S.Insert ("bongani"); S.Insert ("ancobe");
//S.ShowData ();
//S.Delete ("ancobe"); 
//S.ShowData ();

std::cin.get();	
	return 0;
}

