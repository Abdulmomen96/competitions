/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* output = new ListNode;
        ListNode* head_out = output;
        ListNode* head_1 = l1;
        ListNode* head_2 = l2;
        int carr = 0;
        int sum = 0;

        for (;head_1 != NULL;)
        {
            if (head_2 != NULL)
            {
                sum = (carr + head_1 -> val +  head_2 -> val) % 10;
                carr = (carr + head_1 -> val +  head_2 -> val) / 10;
                head_2 = head_2 -> next;
                
            }
            else
            {
                sum = (carr + head_1 -> val) % 10;
                carr = (carr + head_1 -> val ) / 10;
            }
            printf("%d, ", sum);
            head_out -> val = sum;
            head_1 = head_1 -> next;
            if (carr == 0 && head_1 == NULL && head_2 == NULL)
            {
                //head_out = NULL;



            }
            else
            {
                ListNode* temp = new ListNode;
                head_out -> next = temp;
                head_out = temp;
                head_out -> next = NULL;

            }
            
            
            
            
        }
        for (;head_2 != NULL;)
        {
            sum = (carr + head_2 -> val) % 10;
            carr = (carr + head_2 -> val ) / 10;
            head_out -> val = sum;
            head_2 = head_2 -> next;
            if (carr == 0 && head_2 == NULL)
            {
                //head_out = NULL;



            }
            else
            {
                ListNode* temp = new ListNode;
                head_out -> next = temp;
                head_out = temp;
                head_out -> next = NULL;

            }


        }
        if (carr != 0)
        {
            
            head_out -> val += carr;
            printf("%d\n", head_out -> val);

        }

        return output;
        


        
    }
};