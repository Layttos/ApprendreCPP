//
// Created by Layttos on 6/26/2022.
//

#include "Table.h"
#include <iostream>

Table::Table(const int table) : originalNumber(table) {
    for (int i = 0; i < 11; ++i) {
        tableArray[i] = originalNumber * i;
    }
}

const int *Table::GetTable() {
    return tableArray;
}

void Table::PrintTable() {
    for (int i = 0; i < 11; ++i) {
        std::cout << tableArray[i] << std::endl;
    }
}
