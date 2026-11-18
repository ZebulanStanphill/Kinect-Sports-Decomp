struct Entry_822F8F38 {
    int value;      /* 0x0 */
    float priority; /* 0x4 */

    Entry_822F8F38(const Entry_822F8F38 &other) : value(other.value), priority(other.priority)
    {
    }

    Entry_822F8F38 &operator=(const Entry_822F8F38 &other)
    {
        value = other.value;
        priority = other.priority;
        return *this;
    }
};

static __forceinline bool Greater(const Entry_822F8F38 &first, const Entry_822F8F38 &second)
{
    return first.priority > second.priority;
}

/* Moves the hole up towards top while the parent compares greater than value, then stores value. */
static __forceinline void PushHeap(Entry_822F8F38 *data, int hole, int top, const Entry_822F8F38 &value)
{
    for (int parent = (hole - 1) / 2; top < hole && Greater(data[parent], value); parent = (hole - 1) / 2) {
        data[hole] = data[parent];
        hole = parent;
    }
    data[hole] = value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
extern "C" void fn_822F8F38(Entry_822F8F38 *data, int hole, int count, const Entry_822F8F38 &value)
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
