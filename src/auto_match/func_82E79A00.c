extern int fn_82E78690(void *, unsigned int, unsigned int *);

static __forceinline unsigned int Select(int ok, unsigned int value)
{
    return ok ? value : 0;
}

unsigned int fn_82E79A00(char *self, unsigned int index)
{
    unsigned int first;
    unsigned int second;
    unsigned int third;
    unsigned int item;
    unsigned int total;
    unsigned short sequence;
    int ok = fn_82E78690(self + 0x178, index, &first);
    item = Select(ok, first);
    if (item == 0) {
        return 0;
    }
    if (*(int *)(item + 0x12c) == 0 || *(unsigned char *)(item + 0x130) != 0) {
        return *(unsigned int *)(item + 0x1b);
    }
    ++index;
    total = *(unsigned int *)(item + 0x1b);
    sequence = 0;
    for (++total; index < *(unsigned int *)(self + 0x1e0); ++total) {
        ok = fn_82E78690(self + 0x178, index, &first);
        if (*(int *)(Select(ok, first) + 0x12c) == 0) {
            break;
        }
        ok = fn_82E78690(self + 0x178, index, &second);
        if (*(unsigned char *)(Select(ok, second) + 0x130) != (int)sequence + 1) {
            break;
        }
        ok = fn_82E78690(self + 0x178, index, &third);
        ++index;
        ++sequence;
        total += *(unsigned int *)(Select(ok, third) + 0x1b);
    }
    return total;
}
