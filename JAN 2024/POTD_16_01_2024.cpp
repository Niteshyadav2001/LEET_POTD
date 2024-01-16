class RandomizedSet {
public:
    
    unordered_set<int> st;
    RandomizedSet() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    bool insert(int val) {
        int temp = st.size();
        st.insert(val);
        if(st.size() == temp) return false;
        return true;
    }
    
    bool remove(int val) {
        int size = st.size();
        st.erase(val);
        if(st.size() == size) return false;
        return true;
    }
    
    int getRandom() {
        // doing mod to get in range [0, s.size()-1]
        int pos = rand() % st.size();
        // std::next returns an iterator pointing to the element after              being advanced by certain no. of positions.
        return *next(st.begin(), pos);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
