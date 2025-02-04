

template<class T>
UnsortedList<T>::UnsortedList() {

}

template<class T>
void UnsortedList<T>::MakeEmpty() {
    length = 0;
}

template<class T>
bool UnsortedList<T>::IsFull() const {
    return(length);
    // return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    if (length) return length;
    return 0;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    Node *curNode = head;

    while (curNode != nullptr) {
        if (curNode->item == someItem) return true;

        curnNode = curNode->next;
    }

    return false;
}

template<class T>
void UnsortedList<T>::AddItem(T item) {
    Node *insertedNode = new Node;

    insertedNode->data = item;
    insertedNode->next = head;
    head = insertedNode;

    length++;
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {

}

template<class T>
void UnsortedList<T>::ResetIterator() {

}

template<class T>
T UnsortedList<T>::GetNextItem() {
    return T();
}
