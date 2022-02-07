//
//  SplitWise.cpp
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#include "SplitWise.h"
#include "../Models/Expense.h"

using namespace Service;
using namespace Models;

void SplitWise::show()
{
    gr->show();
}
void SplitWise::addUser(string id, string name, string emaild, string phone)
{
    ur->addUser(new User(id, name, emaild, phone));
}
void SplitWise::show(string uId)
{
    gr->show(uId);
}
void SplitWise::addExpense(string type, string exp)
{
    SplitStrategyInterface *str = sf->getStrategy(type);
    Expense* expense = str->getExpense(exp);
    for (int i = 0; i < expense->usersInvolved.size(); i++)
    {
        gr->addAmount(expense->userPaidId,
                      expense->usersInvolved[i],
                      expense->amountsDue[i]);
    }
}
