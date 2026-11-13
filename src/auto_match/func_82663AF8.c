typedef struct WString_82663AF8 {
    unsigned short buf[8];
    unsigned int size;
    unsigned int res;
} WString_82663AF8;

extern unsigned short *fn_82663B70(WString_82663AF8 *self);

unsigned char fn_82663AF8(WString_82663AF8 *self, const unsigned short *ptr)
{
    if (ptr == 0 || ptr < fn_82663B70(self) || fn_82663B70(self) + self->size <= ptr) {
        return 0;
    } else {
        return 1;
    }
}
