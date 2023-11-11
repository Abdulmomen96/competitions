class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        std::unordered_map<int, vector<int>> myHashtable;
        vector<int> result;
        for (auto& innervector:adjacentPairs)
        {
            vector<int> pair;

            for (auto& element: innervector)
            {
                pair.push_back(element);
                
            }
            myHashtable[pair[0]].push_back(pair[1]);
            myHashtable[pair[1]].push_back(pair[0]);

        }
        int head;
        for (const auto& entry : myHashtable) {
            if (entry.second.size() == 1){
                head = entry.first;
                result.push_back(head);
                head = entry.second[0];
                break;

            } 
    }
    
    
    //cout << result[0] << endl;
    
    while (true){
        auto it = myHashtable.find(head);
        cout << head << endl;
        if (it -> second.size() == 1)
        {   
            result.push_back(it -> second[0]);
            break;
        }
        int temp = it -> second[0];
        auto it2 = std::find(result.begin(), result.end(), temp);
        if (it2 != result.end()) result.push_back(temp);
        else  result.push_back(it -> second[1]);
        head = result.back();
        
        

    }

    
            
    return result;

    }
};