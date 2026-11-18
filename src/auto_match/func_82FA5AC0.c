extern unsigned int _CountLeadingZeros(unsigned int value);

/* Rounds size up to the next list size, then maps it to its first- and second-level index. */
void fn_82FA5AC0(unsigned int size, int *firstIndex, int *secondIndex)
{
    int first;
    int second;
    if (size >= 0x20) {
        size = size + (1 << (31 - _CountLeadingZeros(size) - 5)) - 1;
    }
    if (size < 0x80) {
        first = 0;
        second = size >> 2;
    } else {
        first = 31 - _CountLeadingZeros(size);
        second = (size >> (first - 5)) ^ 0x20;
        first -= 6;
    }
    *firstIndex = first;
    *secondIndex = second;
}
