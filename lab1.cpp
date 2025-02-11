/*
Laboratorio 1: Box office
Juan F. Torré García
801-24-9424
Profa. Lillian Gonzalez Albino 
CCOM3033-002
12 de febrero de el 2025
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string movieName;
    int adultTickets, childTickets;
    double gross, net, distributor;

    // Desplegar proposito
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributor's Profit of a movie playing in the theater.\n\n";

    // Pedir el nombre de la pelicula
    cout << " Enter the name of the movie: ";
    getline(cin, movieName);

    // Pedir la cantidad de boletos vendidos
    cout << "Enter the amount of adult tickets sold: ";
    cin >> adultTickets;
    cout << "Enter the amount of child tickets sold: ";
    cin >> childTickets;

    // Calcular
    gross = adultTickets * 10.0 + childTickets * 6.0;
    net = 0.2 * gross;
    distributor = gross - net;

    // Formateo de el output
    cout << fixed << setprecision(2);
    cout << left; // ponerlo "left justified"

    // Desplegar el resultado
    cout << "\nMovie Name:" << setw(25) << left << " " << "\"" << movieName << "\"" << endl;
    cout << setw(30) << left << "Adult Tickets Sold:" << right << setw(10) << adultTickets << endl;
    cout << setw(30) << left << "Child Tickets Sold:" << right << setw(10) << childTickets << endl;
    
    
    cout << setw(30) << left << "Gross Box Office Profit:" << right << "$ " << setw(8) << gross << endl;
    cout << setw(30) << left << "Net Box Office Profit:" << right << "$ " << setw(8) << net << endl;
    cout << setw(30) << left << "Amount Paid to Distributor:" << right << "$ " << setw(8) << distributor << endl;

    return 0;
}