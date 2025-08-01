#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy;
    ListNode* res = &dummy;   
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            res->next = list1;
            list1 = list1->next;
        } else {
            res->next = list2;
            list2 = list2->next;
        }
        res = res->next;
    }
    res->next = (list1 != nullptr) ? list1 : list2;
    return dummy.next;
}
