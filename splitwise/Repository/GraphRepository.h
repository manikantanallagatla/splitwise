//
//  GraphRepository.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef GraphRepository_h
#define GraphRepository_h

#include "GraphRepositoryInterface.h"
#include <unordered_map>
#include <mutex>

namespace Repository {
class GraphRepository: public GraphRepositoryInterface {
    unordered_map<string, unordered_map<string, double>> g;
    mutex m;
public:
    void show(){
        for (auto it = g.begin(); it != g.end(); it++)
        {
            show(it->first);
        }
    }
    void show(string u1){
        cout << "===========================" << endl;
        auto it = g.find(u1);
        for (auto it1 = it->second.begin(); it1 != it->second.end(); it1++)
        {
            if (it1->second > 0)
                cout << it1->first << " needs to pay " << it->first << " " << it1->second << endl;
            if (it1->second < 0)
                cout << it->first << " needs to pay " << it1->first << " " << it1->second << endl;
        }
        cout << "===========================" << endl;
    }
    void addAmount(string u1, string u2, double amount){
//        Add validations
        if (u1 != u2)
        {
            unique_lock<mutex> l(m);
            g[u1][u2] += amount;
            g[u2][u1] -= amount;
        }
            
    }
};
}

#endif /* GraphRepository_h */
