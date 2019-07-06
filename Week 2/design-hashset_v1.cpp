class MyHashSet {
private:
    vector<bool> *table;
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        table = new vector<bool> (1000000,false);
    }
    
    void add(int key) {
        table->at(key) = true;
    }
    
    void remove(int key) {
        table->at(key) = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return table->at(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */