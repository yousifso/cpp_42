#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {}

void PhoneBook::addContact() {
    std::string input;
    Contact contact;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    contact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    contact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    contact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    contact.setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    contact.setDarkestSecret(input);

    contacts[currentIndex] = contact;
    currentIndex = (currentIndex + 1) % 8;
    if (totalContacts < 8) {
        totalContacts++;
    }
}

void PhoneBook::searchContact() const {
    if (totalContacts == 0) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < totalContacts; ++i) {
        std::cout << std::setw(10) << i << "|";
        displayColumn(contacts[i].getFirstName());
        displayColumn(contacts[i].getLastName());
        displayColumn(contacts[i].getNickname());
        std::cout << std::endl;
    }

    int index;
    std::cout << "Enter index to view details: ";
    std::cin >> index;
    std::cin.ignore();
    if (index < 0 || index >= totalContacts) {
        std::cout << "Invalid index." << std::endl;
    } else {
        displayContact(index);
    }
}

void PhoneBook::displayContact(int index) const {
    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::displayColumn(const std::string &str) const {
    if (str.length() > 10) {
        std::cout << str.substr(0, 9) << ".";
    } else {
        std::cout << std::setw(10) << str;
    }
    std::cout << "|";
}