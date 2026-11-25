/* Heap sort of an array of pointers with a caller-supplied comparison function. */
typedef int (*Compare_82965280)(void *a, void *b, void *context);

static __forceinline void SiftDown(void **items, unsigned int hole, unsigned int count, void *value,
                                   Compare_82965280 compare, void *context)
{
    unsigned int child;
    void *largest;
    void *right;

    for (child = hole * 2 + 1; child < count; child = child * 2 + 1) {
        largest = items[child];
        if (child + 1 < count) {
            right = items[child + 1];
            if (compare(right, largest, context) > 0) {
                child++;
                largest = right;
            }
        }
        if (compare(largest, value, context) <= 0) {
            break;
        }
        items[hole] = items[child];
        hole = child;
    }
    items[hole] = value;
}

void fn_82965280(Compare_82965280 compare, void **items, unsigned int count, void *context)
{
    unsigned int i;
    unsigned int last;
    void *value;

    if (count <= 1) {
        return;
    }
    i = count / 2;
    if (i != 0) {
        void **parent = &items[i];

        do {
            i--;
            SiftDown(items, i, count, *--parent, compare, context);
        } while (i != 0);
    }
    for (last = count - 1; last != 0; last--) {
        value = items[last];
        items[last] = items[0];
        SiftDown(items, 0, last, value, compare, context);
    }
}
