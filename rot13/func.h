#pragma once
#include <iostream>
// #include <sstream>
// #include <Windows.h>	

/* ROT13 encoder RU/EN (version  0.0.1)
 * Copyright © 2018 Mihails Šilovs
 * License: MIT
 */




 std::wstring encode(std::wstring source) {

	using namespace std;
		

		const wchar_t* v[] = { L"АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ",
						L"абвгдежзийклмнопрстуфхцчшщъыьэюя",
						L"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
						L"abcdefghijklmnopqrstuvwxyz",
						L"0123456789",
						 NULL

		};

		wstring out = L"";

		for (auto const & c : source) {

			bool x = false;
			unsigned short i = 0;   // line number in array

			while (v[i] != '\0') {

				wstring str = v[i];
				unsigned short p = 0;            // the position of the cursor in the array row v 
				unsigned short l = str.size();   // string length from array v

				for (auto const & cv : str) {

					if (c == cv) {

						p += l / 2;
						p %= l;

						out += str.at(p);
						x = true; // symbol was found
						break;

					}

					p++;
				}

				if (x) break; // if the character was found, then we finish the search
				i++;
			}

			if (!x) out += c; // if the character was not found, then leave the original character	
		}




		return  out;
	}