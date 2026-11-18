struct Entry_8233FFA0 {
    float priority; /* 0x0 */
    int value;      /* 0x4 */

    Entry_8233FFA0(const Entry_8233FFA0 &other) : priority(other.priority), value(other.value)
    {
    }

    Entry_8233FFA0 &operator=(const Entry_8233FFA0 &other)
    {
        priority = other.priority;
        value = other.value;
        return *this;
    }
};

static __forceinline bool Greater(Entry_8233FFA0 first, Entry_8233FFA0 second)
{
    return first.priority > second.priority;
}

/* Moves the hole up towards top while the parent compares greater than value, then stores value. */
static __forceinline void PushHeap(Entry_8233FFA0 *data, int hole, int top, const Entry_8233FFA0 &value)
{
    for (int parent = (hole - 1) / 2; top < hole && Greater(data[parent], value); parent = (hole - 1) / 2) {
        data[hole] = data[parent];
        hole = parent;
    }
    data[hole] = value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
extern "C" void fn_8233FFA0(Entry_8233FFA0 *data, int hole, int count, const Entry_8233FFA0 &value)
{
    int top = hole;
    int child = 2 * hole + 2;

    for (; child < count; child = 2 * child + 2) {
        if (Greater(data[child], data[child - 1])) {
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
