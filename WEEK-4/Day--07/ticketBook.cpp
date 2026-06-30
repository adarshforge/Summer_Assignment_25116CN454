#include <iostream>
#include <string>
using namespace std;

class TicketBooking {
private:
    string customerName;
    int totalSeats;
    int bookedSeats;

public:
    TicketBooking() {
        totalSeats = 100;
        bookedSeats = 0;
    }

    void bookTicket() {
        int seats;

        cout << "\nEnter Customer Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Number of Seats to Book: ";
        cin >> seats;

        if (seats <= 0) {
            cout << "Invalid number of seats!\n";
        }
        else if (bookedSeats + seats > totalSeats) {
            cout << "Not enough seats available!\n";
        }
        else {
            bookedSeats += seats;
            cout << "Ticket Booked Successfully!\n";
            cout << "Seats Booked: " << seats << endl;
        }
    }

    void cancelTicket() {
        int seats;

        cout << "\nEnter Number of Seats to Cancel: ";
        cin >> seats;

        if (seats <= 0 || seats > bookedSeats) {
            cout << "Invalid cancellation!\n";
        }
        else {
            bookedSeats -= seats;
            cout << "Ticket Cancelled Successfully!\n";
        }
    }

    void bookingDetails() {
        cout << "\n------ Booking Details ------\n";
        cout << "Customer Name : " << customerName << endl;
        cout << "Booked Seats  : " << bookedSeats << endl;
        cout << "Available Seats : " << totalSeats - bookedSeats << endl;
    }

    void availableSeats() {
        cout << "\nAvailable Seats: " << totalSeats - bookedSeats << endl;
    }
};

int main() {
    TicketBooking ticket;
    int choice;

    do {
        cout << "\n====== Ticket Booking System ======\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. View Booking Details\n";
        cout << "4. Check Available Seats\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ticket.bookTicket();
                break;
            case 2:
                ticket.cancelTicket();
                break;
            case 3:
                ticket.bookingDetails();
                break;
            case 4:
                ticket.availableSeats();
                break;
            case 5:
                cout << "\nThank You for Using the Ticket Booking System!\n";
                break;
            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}