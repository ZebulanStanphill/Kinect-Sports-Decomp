typedef struct Obj_828C6F40 {
    char pad0[0x6c];
    int f6c;
    char pad70[0x10];
    char f80[8];
    char f88[0x10];
    unsigned char f98;
    char pad99[7];
    unsigned char fa0;
} Obj_828C6F40;

extern int fn_8223C478(void *s, int a, int b);
extern int fn_82891F28(void *s, void *p);
extern int fn_828B5C88(void *p, int a, void *s);
extern int fn_828E9DB8(void *s, int v, int n);

void fn_828C6F40(Obj_828C6F40 *self, void *s)
{
    int flag;
    int v;

    flag = self->f98 != 0;
    fn_8223C478(s, 1, 0);
    fn_828E9DB8(s, flag, 1);
    fn_828B5C88(self->f80, self->f6c, s);
    if (self->f98 != 0) {
        v = self->fa0;
        fn_8223C478(s, 8, 0);
        fn_828E9DB8(s, v, 8);
        fn_82891F28(s, self->f88);
    }
}
