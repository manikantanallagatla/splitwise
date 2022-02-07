//
//  EqualStrategy.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef EqualStrategy_h
#define EqualStrategy_h

#include "SplitStrategyInterface.h"
#include "../Utils/Utils.h"

using namespace Utils;

namespace Strategy {
class EqualStrategy: public SplitStrategyInterface {
public:
    Expense* getExpense(string exp) {
    //        u1 125 4 u1 u2 u3 u4
        vector<string> words = getWords(exp);
        string userPaidId = words[0];
        int amount = getInt(words[1]);
        int numUsersInvolved = getInt(words[2]);
        vector<string> usersInvolved;
        int index = 3;
        for (int i = 0; i < numUsersInvolved; i++)
        {
            usersInvolved.push_back(words[index++]);
        }
        vector<int> amountsDue;
        for (int i = 0; i < numUsersInvolved; i++)
        {
            amountsDue.push_back(amount/numUsersInvolved);
        }
        return new Expense(amount,
                           userPaidId,
                           usersInvolved,
                           amountsDue);
    }
};
}

#endif /* EqualStrategy_h */
