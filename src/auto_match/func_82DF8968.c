typedef struct Header_82DF8968 {
    char unknown00[0x18];
    unsigned int first; /* 0x18 */
    unsigned short f1c;
    unsigned short f1e;
    unsigned int words[4]; /* 0x20 */
} Header_82DF8968;

static __forceinline void SwapBytes(void *start, int count)
{
    unsigned char *front = (unsigned char *)start;
    unsigned char *back = front + count - 1;
    int i;

    for (i = 0; i < count / 2; i++) {
        unsigned char t = *front;
        *front++ = *back;
        *back-- = t;
    }
}

void fn_82DF8968(Header_82DF8968 *self)
{
    int i;

    SwapBytes(&self->first, 4);
    for (i = 0; i < 4; i++) {
        SwapBytes(&self->words[i], 4);
    }
}
