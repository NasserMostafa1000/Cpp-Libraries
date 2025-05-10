#pragma once
#include <iostream>
#include <string>
#include "ClsDate.h"
using namespace std;
class IsInputValid
{
	public:
	static bool IsNumberBetween(short number, short from, short to)
	{
		return (number > from && number < to);
	}
	static bool IsNumberBetween(int number, int from, int to)
	{
		return (number > from && number < to);
	}
	static bool IsNumberBetween(float number, float from, float to)
	{
		return (number > from && number < to);
	}
	static bool IsNumberBetween(double number, double from, double to)
	{
		return (number > from && number < to);
	}
	static bool IsDateBetween(ClsDate &TheDate, ClsDate& DateFrom, ClsDate &DateTo)
	{
		//The Date should be after than date from and before than date 2
		return (ClsDate::IsDate1BeforeDate2(TheDate, DateTo) && ClsDate::IsDate1AfterDate2(TheDate, DateFrom));
	}
	static int ReadIntNumber(string message) {
		int number;

		while (true) {
			std::cout << "Please enter a number: ";
			std::cin >> number;

			if (std::cin.fail()) {
				std::cout << message << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				break;
			}
		}

		return number;
	}
	static int ReadIntNumberBetween1Tonum(string message, int from, int to) {
		int number;
		do {
			std::cout << "\t\t\t\t\tenter number from " << from << " To " << to << endl;;
			std::cin >> number;
			if (std::cin.fail() || number < from || number > to) {
				std::cout << "\t\t\t\t\tInvalid input. " << message << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				break;
			}
		} while (true);

		return number;
	}
	static short ReadShortNumberBetween1Tonum(string message, short from, short to) {
		short number;
		do {
			std::cout << "\t\t\t\t\tenter number from " << from << " To " << to << endl;;
			std::cin >> number;
			if (std::cin.fail() || number < from || number > to) {
				std::cout << "\t\t\t\t\tInvalid input. " << message << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				break;
			}
		} while (true);

		return number;
	}
	static double ReadDoubleNumber(const std::string& message) {
		double number;

		while (true) {
			std::cout << message;
			std::cin >> number;

			if (std::cin.fail()) {
				std::cout << "Invalid input. " << message << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				break;
			}
		}

		return number;
	}
	static float ReadFloatNumber(const std::string& message) {
		float number;

		while (true) {
			std::cout << message;
			std::cin >> number;

			if (std::cin.fail()) {
				std::cout << "Invalid input. " << message << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				break;
			}
		}

		return number;
	}
	static double ReadDoubleNumberBetweenFromAndTo(string message, double from, double to) {
		double number;
		do {
			std::cout << message;
			std::cin >> number;
			if (std::cin.fail() || number < from || number > to) {
				std::cout << "Invalid input. " << message << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				break;
			}
		} while (true);

		return number;
	}
	static string ReadString(string message)
	{
		string input;
		cout << message;

		// ???? ?????? ?? ??? ???????
		while (true)
		{
			(cin>> input);

			// ?????? ?? ?? ??????? ??? ??????
			if (!input.empty())
			{
				break;
			}

			// ????? ???????? ??? ??????? ??? ????
			cout << "Invalid input. Please enter a non-empty string: ";
		}

		return input;
	}
	static bool IsValidDate(ClsDate& date)
	{
		return ClsDate::IsThisValidDate(date);
	}
};

