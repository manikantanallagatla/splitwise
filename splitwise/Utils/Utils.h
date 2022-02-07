//
//  Utils.h
//  splitwise
//
//  Created by Nallagatla Manikanta on 07/02/22.
//

#ifndef Utils_h
#define Utils_h

namespace Utils {
    int getInt(string s)
    {
        stringstream ss;
        ss << s;
        int x;
        ss >> x;
        return x;
    }

    vector<string> getWords(string str)
    {
        string word = "";
        vector<string> ans;
        for (auto x : str)
        {
            if (x == ' ')
            {
                ans.push_back(word);
                word = "";
            }
            else {
                word.push_back(x);
            }
        }
        if (word != "")
            ans.push_back(word);
        return ans;
    }
}

#endif /* Utils_h */
