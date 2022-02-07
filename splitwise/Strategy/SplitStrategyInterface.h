//
//  SplitStrategyInterface.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef SplitStrategyInterface_h
#define SplitStrategyInterface_h

#include <sstream>
#include <vector>
#include "../Models/Expense.h"

using namespace std;
using namespace Models;

namespace Strategy {
class SplitStrategyInterface {
public:
    virtual Expense* getExpense(string) = 0;
};
}

#endif /* SplitStrategyInterface_h */
