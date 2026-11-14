typedef struct String_82663A00 {
    union { unsigned short buf[8]; unsigned short *ptr; } bx;
    unsigned int size;
    unsigned int res;
    char alval;
} String_82663A00;

extern unsigned int fn_82663D38(String_82663A00 *self);
extern void fn_8265E080(String_82663A00 *self);
extern void fn_82663D90(String_82663A00 *self, unsigned int newsize, unsigned int oldlen);
extern void fn_82663538(String_82663A00 *self, unsigned char built, unsigned int newsize);
extern void fn_82663848(String_82663A00 *self, unsigned int size);

unsigned char fn_82663A00(String_82663A00 *self, unsigned int newsize, unsigned char trim)
{
    if (fn_82663D38(self) < newsize)
        fn_8265E080(self);
    if (self->res < newsize)
        fn_82663D90(self, newsize, self->size);
    else if (trim && newsize < 8)
        fn_82663538(self, 1, newsize < self->size ? newsize : self->size);
    else if (newsize == 0)
        fn_82663848(self, 0);
    return 0 < newsize;
}
