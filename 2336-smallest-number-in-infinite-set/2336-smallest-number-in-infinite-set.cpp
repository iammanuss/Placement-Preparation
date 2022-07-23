class SmallestInfiniteSet {
private:
    bool present(int num){
        priority_queue<int,vector<int>,greater<int>>pq1=pq;
        while(!pq1.empty()){
            if(pq1.top() == num)    return true;
            pq1.pop();
        }
        return false;
    }
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    SmallestInfiniteSet() {
        for(int i=1;i<1001;i++) pq.push(i);
    }
    
    int popSmallest() {
        int p=pq.top();
        pq.pop();
        return p;
    }
    void addBack(int num) {
        if(present(num))    return;
        pq.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */