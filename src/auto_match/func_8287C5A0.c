extern const unsigned int lbl_82022E78[0x30];

unsigned int fn_8287C5A0(unsigned int value)
{
    const unsigned int *first = lbl_82022E78;
    int count = 0x30;
    for (; 0 < count; ) {
        int half = count / 2;
        const unsigned int *mid = first + half;
        if (*mid < value) {
            first = ++mid;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return *first;
}
