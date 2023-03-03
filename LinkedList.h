

struct Node{
    Node* nextPtr;
};

class LinkedList{
    public:
        void push_front(int item);
        void push_back(int item);
        void pop_front();
        void pop_back();
        int front();
        int back();
        bool empty();
        void insert(size_t index, const Item_Type& item);
        bool remove(size_t index);
        size_t find(const Item_Type& item);

};