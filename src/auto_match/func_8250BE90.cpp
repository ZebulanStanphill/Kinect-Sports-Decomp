struct Entry_8250BE90 {
    int unk0;       /* 0x00 */
    int unk4;       /* 0x04 */
    float priority; /* 0x08 */
    int unkC;       /* 0x0c */
    int unk10;      /* 0x10 */
};

static __forceinline bool Less(const Entry_8250BE90 &first, const Entry_8250BE90 &second)
{
    return first.priority < second.priority;
}

/* Moves the hole up towards top while the parent compares less than value, then stores value. */
static __forceinline void PushHeap(Entry_8250BE90 *data, int hole, int top, const Entry_8250BE90 &value)
{
    for (int parent = (hole - 1) / 2; top < hole && Less(data[parent], value); parent = (hole - 1) / 2) {
        data[hole] = data[parent];
        hole = parent;
    }
    data[hole] = value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
extern "C" void fn_8250BE90(Entry_8250BE90 *data, int hole, int count, const Entry_8250BE90 &value)
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
