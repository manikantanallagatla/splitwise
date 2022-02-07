//
//  Expense.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef Expense_h
#define Expense_h

#include <string>
#include <vector>

using namespace std;

namespace Models {
struct Expense {
    int amount;
    string userPaidId;
    vector<string> usersInvolved;
    vector<int> amountsDue;
    Expense(int a, string uP, vector<string> uI, vector<int> aDue)
    {
        amount = a;
        userPaidId = uP;
        usersInvolved = uI;
        amountsDue = aDue;
    }
};
}

#endif /* Expense_h */
