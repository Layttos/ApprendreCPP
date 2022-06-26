//
// Created by Layttos on 6/26/2022.
//

#ifndef APPRENDREC___TABLE_H
#define APPRENDREC___TABLE_H


class Table {
    private:
       const int originalNumber;
       int tableArray[10];
    public:
        Table(const int table);
        const int* GetTable();
        void PrintTable();
};


#endif //APPRENDREC___TABLE_H
