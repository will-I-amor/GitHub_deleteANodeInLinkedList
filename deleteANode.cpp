#include <iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution{
public:
	void deleteNode(ListNode* node){
		if(node->next ==  NULL){
			cout<<"end of the list"<<endl;
		}
		else{
			ListNode* p = node->next;
			node->val = node->next->val;//赋值
			node->next = p->next;
			delete p;
			p = NULL;
		}
	}
};

int main(){
	ListNode* node = new ListNode(1);
	node->next = new ListNode(2);
	node->next->next = new ListNode(3);
	node->next->next->next = new ListNode(4);
	ListNode* p = node->next->next;
	Solution testSol;
	testSol.deleteNode(p);
	return 0;

}









