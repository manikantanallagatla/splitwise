//
//  User.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef User_h
#define User_h

namespace Models {
struct User {
    string id;
    string name;
    string email;
    string mobile;
    User(string i, string n, string e, string m)
    {
        id = i;
        name = n;
        email = e;
        mobile = m;
    }
};
}

#endif /* User_h */
