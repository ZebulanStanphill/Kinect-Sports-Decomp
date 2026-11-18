struct Entry_82450E80 {
    int value;    /* 0x0 */
    int priority; /* 0x4 */

    Entry_82450E80(const Entry_82450E80 &other) : value(other.value), priority(other.priority)
    {
    }

    Entry_82450E80 &operator=(const Entry_82450E80 &other)
    {
        value = other.value;
        priority = other.priority;
        return *this;
    }
};

static __forceinline bool Less(Entry_82450E80 first, Entry_82450E80 second)
{
    return first.priority < second.priority;
}

/* Moves the hole up towards top while the parent compares less than value, then stores value. */
static __forceinline void PushHeap(Entry_82450E80 *data, int hole, int top, const Entry_82450E80 &value)
{
    for (int parent = (hole - 1) / 2; top < hole && Less(data[parent], value); parent = (hole - 1) / 2) {
        data[hole] = data[parent];
        hole = parent;
    }
    data[hole] = value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
extern "C" void fn_82450E80(Entry_82450E80 *data, int hole, int count, const Entry_82450E80 &value)
{
    int top = hole;
    int child = 2 * hole + 2;

    for (; child < count; child = 2 * child + 2) {
        if (Less(data[child], data[child - 1])) {
            --child;
        }
        data[hole] = data[child];
        hole = child;
    }
    if (child == count) {
        data[hole] = data[count - 1];
        hole = count - 1;
    }
    PushHeap(data, hole, top, value);
}
