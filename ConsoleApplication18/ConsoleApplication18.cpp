
#include <string>
#include <iostream>
using namespace std;

struct time {
	int h= 2;
	int m= 6;
	int n = 5;
};

 struct planes
 {
	 int FlightNumber;
	 string type;
	 string destination;
	 string Time;
	 
 };
	 


int main()
{
	setlocale(LC_ALL, "rus");
	int h = 2;
	int m = 6;
	int n = 5;
	planes p1;
	p1.FlightNumber = 101;
	p1.type = "Пассажирский";
	p1.destination = "Москва 750 км";
	p1.Time = "4:00";
	
	cout << "Номер самолета: " << p1.FlightNumber << "\tТип: " << p1.type << "\tПункт назначения: " << p1.destination << "\t\tВремя: " << p1.Time << endl;


	planes p2;
	p2.FlightNumber = 51;
	p2.type = "Грузовой";
	p2.destination = "Санкт-Петербург 1476 км";
	p2.Time = "8:20";

	cout << "Номер самолета: " << p2.FlightNumber << "\tТип: " << p2.type << "\tПункт назначения: " << p2.destination << "\tВремя: " << p2.Time << endl;

	planes p3;
	p3.FlightNumber = 35;
	p3.type = "Пассажирский";
	p3.destination = "Минск 8900 км";
	p3.Time = "9:00";
	
	cout << "Номер самолета: " << p3.FlightNumber << "\tТип: " << p3.type << "\tПункт назначения: " << p3.destination << "\t\tВремя: " << p3.Time << endl;

	 // Под забыл я ++) Тут пытался с функциями, но вот со временем не получилось. До пустим было бы к примеру задание. Вывести на экран только те рейсы, котрые вылетают до 9 часов к примеру.  
	//Я думаю бы у меня получилось. Но тоже сортировкой проблемы есть
	

	/*planes reys[3]; 
	reys[0] = { 101, "Пассажирский" "Москва 750 км", "6:00" };
	reys[1] = { 51, "Грузовой" "Санкт-Петербург 1476 км", "8:20"};
	reys[2] = { 35, "Пассажирский" "Владивосток 8900 км", "4:00"};
	
	int i = 0;
	*/
	
		




}