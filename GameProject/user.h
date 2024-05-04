#pragma once
#include <string>

#using<system.dll>
using namespace System;
using namespace System::IO;

//#define maxlines 5
ref class User {
public:
	int rank;
	System::String^ name;
	int score;

};



array<String^>^ getHeaders() {
	String^ file = "User.txt";
		StreamReader^ tin = File::OpenText(file);
		String^ line;
		line = tin->ReadLine();
		array<String^>^ headers = line->Split('#');
		return headers;
	}

array <User^>^ fillArray(String^ file) {
	int i = 0;
	

	

	StreamReader^ tin = File::OpenText(file);
	int count = 1;
	String^ line;
	while ((line = tin->ReadLine()) != nullptr) {
		count++;
	}
	int maxlines = count-1;
	array< User^ >^ user = gcnew array< User^ >(maxlines);
	StreamReader^ din = File::OpenText(file);
	
	while ((line = din->ReadLine()) != nullptr) {
		array<String^>^ columns = line->Split('#');
		user[i] = gcnew User;
		user[i]->name = columns[0];
		user[i]->score = System::Convert::ToInt32(columns[1]);
		i++;
	}
	int temp;
	String^ stemp;
	bool swapped;
	for (int i = 0; i < maxlines -1; i++) {
		swapped = false;
		for (int j = 0; j < maxlines - i - 1; j++) {
			if ((user[j]->score) < (user[j + 1]->score)) {
				temp = user[j + 1]->score;
				user[j + 1]->score = user[j]->score;
				user[j]->score = temp;
				stemp = user[j + 1]->name;
				user[j + 1]->name = user[j]->name;
				user[j]->name = stemp;
				swapped = true;
			}


		}
	}

	for (int i = 0; i < maxlines; i++) {
		user[i]->rank = i + 1;
	}

		return user;
	}



