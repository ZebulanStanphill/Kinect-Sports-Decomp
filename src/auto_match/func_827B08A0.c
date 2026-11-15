extern unsigned int fn_827664B0(void *self, unsigned int offset, unsigned int *length);
extern unsigned int fn_827668B8(void *self, unsigned int offset, unsigned char *data);
extern int memcmp(const void *first, const void *second, unsigned int count);

unsigned int fn_827B08A0(char *first, unsigned int firstOffset, char *second, unsigned int secondOffset)
{
    unsigned int firstLength;
    unsigned int secondLength;
    unsigned char secondData[10];
    unsigned char firstData[10];
    unsigned int count;
    firstOffset += fn_827664B0(first + 0xc, firstOffset, &firstLength);
    secondOffset += fn_827664B0(second + 0xc, secondOffset, &secondLength);
    if (firstLength != secondLength) {
        return 0;
    }
    count = firstLength >> 1;
    while (count != 0) {
        unsigned int firstSize;
        unsigned int secondSize;
        count--;
        firstSize = fn_827668B8(first + 0xc, firstOffset, firstData);
        secondSize = fn_827668B8(second + 0xc, secondOffset, secondData);
        if (firstSize != secondSize || memcmp(firstData, secondData, firstSize) != 0) {
            return 0;
        }
        firstOffset = firstSize + firstOffset;
        secondOffset = secondSize + secondOffset;
    }
    return 1;
}
