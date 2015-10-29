//�⺯����תvector
vector<int> printListFromTailToHead(struct ListNode* head) {
	vector<int> x;
	ListNode * temp=head;
	while(temp!=NULL){
		x.push_back(temp->val);
		temp = temp->next;
	}
	reverse(x.begin(), x.end());
	return x;
}
//ͷ��
vector<int> printListFromTailToHead(struct ListNode* head) {
	vector<int> x;
	ListNode * temp=head;
	while(temp!=NULL){
		x.insert(x.begin(), temp->val);
		temp = temp->next;
	}
	return x;
}

//�ݹ�
vector<int> printListFromTailToHead(struct ListNode* head) {
	vector<int> x;
	ListNode * temp=head;
	if(temp!=NULL){
		if(temp->next != NULL){
			x = printListFromTailToHead(temp->next);
		}
		x.push_back(temp->val);
	}
	return x;
}

//����ջ���ݽṹstack
vector<int> printListFromTailToHead(struct ListNode* head) {
	vector<int> x;
	stack<int> s;
	ListNode * temp=head;
	while(temp!=NULL){
		s.push(temp->val);
		temp=temp->next;
	}
	while(!s.empty()){
		x.push_back(s.top());
		s.pop();
	}
	return x;
}
