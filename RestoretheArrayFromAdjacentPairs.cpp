class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        std::unordered_map<int, vector<int>> myHashtable;
        vector<int> result;
        for (auto& innervector:adjacentPairs)
        {


            
            myHashtable[innervector[0]].push_back(innervector[1]);
            myHashtable[innervector[1]].push_back(innervector[0]);

        }
    int head;
    for (const auto& entry : myHashtable) {
        if (entry.second.size() == 1){
            head = entry.first;

            break;

        } 

        
    }
    
    
    int left = -999999;

    int i = 0;
    for (int i = 0; i < adjacentPairs.size() + 1; i++){
        //auto it = myHashtable.find(head);
        
        result.push_back(head);
        
        
        
        int temp = myHashtable[head][0];
        //auto it2 = std::find(result.begin(), result.end(), temp);
    
        if (temp != left) 
        {
    
            head = temp;
        }

        else 
            if (myHashtable[head].size() != 1) head = myHashtable[head][1];
        else 
            break;

        left = result.back();

    }
    

    return result;

    }
};