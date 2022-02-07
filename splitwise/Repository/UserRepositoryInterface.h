//
//  UserRepositoryInterface.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef UserRepositoryInterface_h
#define UserRepositoryInterface_h

#include "../Models/User.h"
#include <string>
using namespace std;

using namespace Models;

namespace Repository {
class UserRepositoryInterface {
public:
    virtual void addUser(User *u) = 0;
    virtual User* getUser(string) = 0;
};
}


#endif /* UserRepositoryInterface_h */
