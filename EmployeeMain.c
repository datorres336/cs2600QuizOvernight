#include <string.h>
#include <stdlib.h>
#include "Employee.h"


int main(void) {
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int seizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char* targetPhone);
    PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary);

    extern Employee EmployeeTable[]; //defined in employeeTable.c
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
   
    //Example not found
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");
   
    //Example found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    //Example found *********** WORKED ON THE CODE BELOW **************************
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "909-555-2134");
    if (matchPtr != NULL)
        printf("Employee 909-555-2134 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee 909-555-2134 is NOT found in the record\n");
    //EXAMPLE NOT FOUND
        matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "626-911-0000");
    if (matchPtr != NULL)
        printf("Employee 626-911-0000 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee 626-911-0000 is NOT found in the record\n");
   
    //Example found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32);
    if (matchPtr != NULL)
        printf("Employee with salary 8.32 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with salary 8.32 is NOT found in the record\n");
    //Example NOT found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 35.50);
    if (matchPtr != NULL)
        printf("Employee with salary 35.50 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with salary 35.50 is NOT found in the record\n");


    return EXIT_SUCCESS;
}
