void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(s.size()==n){
	    return true;
	}
	else
	return false;
}

bool isEmpty(stack<int>& s){
	if(s.empty()){
	    return true;
	    
	}
	else
	return false;
}

int pop(stack<int>& s){
	s.pop();
	
}

int getMin(stack<int>& s){
	
	int mini =s.top();
while(!s.empty()){
//   mini = min(mini,s.top());
//   s.pop();
    if(mini>s.top()){
        mini=s.top();
        s.pop();
    }
    else{
        s.pop();
    }
}
return mini;

}
