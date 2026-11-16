static __forceinline void PushHeap_82490210(int *data, int hole, int top, int *value)
{
    int parent = (hole - 1) / 2;
    while (top < hole && data[parent] < *value) {
        data[hole] = data[parent];
        hole = parent;
        parent = (hole - 1) / 2;
    }
    data[hole] = *value;
}

void fn_82490210(int *data, int hole, int count, int *value)
{
    int top = hole;
    int child = 2 * (hole + 1);
    while (child < count) {
        if (data[child] < data[child - 1]) {
            --child;
        }
        data[hole] = data[child];
        hole = child;
        child = 2 * (child + 1);
    }
    if (child == count) {
        data[hole] = data[count - 1];
        hole = count - 1;
    }
    PushHeap_82490210(data, hole, top, value);
}
