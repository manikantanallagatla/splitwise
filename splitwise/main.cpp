//
//  main.cpp
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#include <iostream>
#include "Repository/GraphRepository.h"
#include "Repository/UserRepository.h"
#include "Strategy/SplitFactory.h"
#include "Service/SplitWise.h"

using namespace Repository;
using namespace Strategy;
using namespace Service;

int main(int argc, const char * argv[]) {
    GraphRepositoryInterface *gr = new GraphRepository();
    UserRepositoryInterface *ur = new UserRepository();
    SplitFactoryInterface *sf = new SplitFactory();
    SplitWiseInterface *service = new SplitWise(gr, ur, sf);
//    service->show();
    service->addUser("u1", "u1", "u1", "p1");
    service->addUser("u2", "u2", "u2", "p2");
    service->addUser("u3", "u3", "u3", "p3");
    service->addUser("u4", "u4", "u4", "p4");
//    service->show();
    service->addExpense("equal", "u1 160 4 u1 u2 u3 u4");
//    service->show();
    service->addExpense("exact", "u1 125 3 u2 u3 u4 25 50 50");
//    service->show();
    service->addExpense("exact", "u2 65 1 u1 65");
//    service->show();
    service->addExpense("exact", "u3 90 1 u1 90");
    service->addExpense("exact", "u4 90 1 u1 90");
    service->show();
    return 0;
}
