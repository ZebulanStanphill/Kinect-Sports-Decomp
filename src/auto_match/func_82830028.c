typedef struct { unsigned char bytes[0x20]; } Elem_82830028;
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void *memset(void *dst, int c, unsigned int size);

void fn_82830028(Elem_82830028 *p, unsigned int count)
{
    for (; count != 0; count--, p++) {
        Elem_82830028 tmp;
        memset(&tmp, 0, sizeof(tmp));
        if (p != 0)
            memcpy(p, &tmp, sizeof(tmp));
    }
}
