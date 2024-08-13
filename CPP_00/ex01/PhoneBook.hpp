/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:15:54 by ygurma            #+#    #+#             */
/*   Updated: 2024/07/09 13:16:40 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
public:
    PhoneBook();
    void addContact();
    void searchContact() const;

private:
    Contact contacts[8];
    int currentIndex;
    int totalContacts;

    void displayContact(int index) const;
    void displayColumn(const std::string &str) const;
};

#endif