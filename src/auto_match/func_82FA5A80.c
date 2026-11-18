extern unsigned int _CountLeadingZeros(unsigned int value);

void fn_82FA5A80(unsigned int size, int *firstIndex, int *secondIndex)
{
    int first;
    int second;
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
