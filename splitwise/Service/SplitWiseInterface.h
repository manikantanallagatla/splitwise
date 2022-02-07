//
//  SplitWiseInterface.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef SplitWiseInterface_h
#define SplitWiseInterface_h

#include <string>

using namespace std;

namespace Service {
class SplitWiseInterface {
public:
    virtual void show() = 0;
    virtual void addUser(string, string, string, string) = 0;
    virtual void show(string) = 0;
    virtual void addExpense(string, string) = 0;
};
}

#endif /* SplitWiseInterface_h */
