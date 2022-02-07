//
//  SplitFactoryInterface.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef SplitFactoryInterface_h
#define SplitFactoryInterface_h

#include "SplitStrategyInterface.h"

namespace Strategy {
class SplitFactoryInterface {
public:
    virtual SplitStrategyInterface * getStrategy(string) = 0;
};
}

#endif /* SplitFactoryInterface_h */
