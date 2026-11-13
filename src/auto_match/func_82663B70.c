typedef struct WString_82663B70 {
    union {
        unsigned short buf[8];
        unsigned short *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} WString_82663B70;

unsigned short *fn_82663B70(WString_82663B70 *self)
{
    return self->res >= 8 ? self->bx.ptr : self->bx.buf;
}
