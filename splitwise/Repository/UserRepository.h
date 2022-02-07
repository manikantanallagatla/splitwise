//
//  UserRepository.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef UserRepository_h
#define UserRepository_h

#include "UserRepositoryInterface.h"
#include <mutex>

namespace Repository {
class UserRepository: public UserRepositoryInterface {
    unordered_map<string, User *> mp;
    mutex m;
public:
    void addUser(User *u){
        unique_lock<mutex> l(m);
        mp[u->id] = u;
    }
    User* getUser(string id){
        if (mp.find(id) == mp.end())
            return NULL;
        return mp[id];
    }
};
}

#endif /* UserRepository_h */
