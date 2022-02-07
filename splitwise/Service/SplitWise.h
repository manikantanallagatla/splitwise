//
//  SplitWise.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef SplitWise_h
#define SplitWise_h

#include "SplitWiseInterface.h"
#include "../Repository/GraphRepositoryInterface.h"
#include "../Repository/UserRepositoryInterface.h"
#include "../Strategy/SplitFactoryInterface.h"

using namespace Repository;
using namespace Strategy;

namespace Service {
class SplitWise: public SplitWiseInterface {
    GraphRepositoryInterface *gr;
    UserRepositoryInterface *ur;
    SplitFactoryInterface *sf;
public:
    SplitWise(GraphRepositoryInterface *g, UserRepositoryInterface *u, SplitFactoryInterface *s)
    {
        gr = g;
        ur = u;
        sf = s;
    }
    void show();
    void addUser(string, string, string, string);
    void show(string);
    void addExpense(string, string);
};
}

#endif /* SplitWise_h */
