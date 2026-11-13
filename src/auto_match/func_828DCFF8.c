typedef struct Obj_828DCFF8 {
    char pad0[0x80];
    unsigned char f80;
    char pad81[7];
    char f88[8];
} Obj_828DCFF8;

extern int fn_8223C478(void *s, int a, int b);
extern int fn_828E9DB8(void *s, int v, int n);
extern int fn_828D2958(void *s, void *p, int n, int b);

void fn_828DCFF8(Obj_828DCFF8 *self, void *s)
{
    int flag;

    flag = self->f80 != 0;
    fn_8223C478(s, 1, 0);
    fn_828E9DB8(s, flag, 1);
    fn_828D2958(s, self->f88, 8, 0);
}
