//
//  GraphRepositoryInterface.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef GraphRepositoryInterface_h
#define GraphRepositoryInterface_h

#include <string>
using namespace std;

namespace Repository {
class GraphRepositoryInterface {
public:
    virtual void show() = 0;
    virtual void show(string) = 0;
    virtual void addAmount(string, string, double) = 0;
};
}

#endif /* GraphRepositoryInterface_h */
