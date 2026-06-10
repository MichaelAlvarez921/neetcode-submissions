class DynamicArray {
public:
    int size;
    int capacity;
    vector<int> vec;

    DynamicArray(int capacity) {
        this->size = 0;
        this->capacity = capacity; 
        this->vec.resize(capacity); 
    }

    int get(int i) {
        return vec[i];
    }

    void set(int i, int n) {
        vec[i] = n;
    }

    void pushback(int n) {
        if(size >= capacity){
            resize();
        }

        vec[size] = n;
        size++;
    }

    int popback() {
        size--;
        return vec[size];
    }

    void resize() {
        capacity *= 2;
        vec.resize(capacity);
    }

    int getSize() {
        return this->size;
    }

    int getCapacity() {
        return this->capacity;
    }
};