typedef struct Alloc_82663D90 { char unused; } Alloc_82663D90;
typedef struct String_82663D90 {
    union {
        unsigned short buf[8];
        unsigned short *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    Alloc_82663D90 al;
} String_82663D90;

extern unsigned int fn_82663D38(String_82663D90 *self);
extern unsigned short *fn_82663F58(Alloc_82663D90 *al, unsigned int count, void *hint);
extern unsigned short *fn_82297D98(unsigned short *dst, const unsigned short *src, unsigned int count);
extern unsigned short *fn_82663B70(String_82663D90 *self);
extern void fn_82663538(String_82663D90 *self, int built, unsigned int newsize);
extern void fn_82663848(String_82663D90 *self, unsigned int newsize);

void fn_82663D90(String_82663D90 *self, unsigned int newsize, unsigned int oldlen)
{
    unsigned short *ptr;
    unsigned int newres = newsize | 7;
    if (fn_82663D38(self) < newres)
        newres = newsize;
    else if (self->res / 2 <= newres / 3)
        ;
    else if (self->res <= fn_82663D38(self) - self->res / 2)
        newres = self->res + self->res / 2;
    else
        newres = fn_82663D38(self);
    {
        ptr = fn_82663F58(&self->al, newres + 1, 0);
    }
    if (0) {
        newres = newsize;
        {
            ptr = fn_82663F58(&self->al, newres + 1, 0);
        }
        if (0) {
            fn_82663538(self, 1, 0);
        }
    }
    if (0 < oldlen)
        fn_82297D98(ptr, fn_82663B70(self), oldlen);
    fn_82663538(self, 1, 0);
    self->bx.ptr = ptr;
    self->res = newres;
    fn_82663848(self, oldlen);
}
