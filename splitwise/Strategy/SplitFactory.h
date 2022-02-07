//
//  SplitFactory.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef SplitFactory_h
#define SplitFactory_h

#include "SplitFactoryInterface.h"
#include "ExactStrategy.h"
#include "EqualStrategy.h"

using namespace Strategy;

namespace Strategy {
class SplitFactory: public SplitFactoryInterface {
public:
    SplitStrategyInterface * getStrategy(string type){
        if (type == "equal")
            return new EqualStrategy();
        if (type == "exact")
            return new ExactStrategy();
        return NULL;
    }
};
}

#endif /* SplitFactory_h */
