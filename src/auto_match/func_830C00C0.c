extern void fn_830C0798(int a, char *b);
extern void fn_830C0AE0(char *a, char *buf);
extern void fn_830CBCD0(char *p, char *s);
extern int fn_830CBDA8(char *p, char *s, char *t);
extern int fn_830DB068(char *p, char *s, char *t);
extern void fn_830EF0E8(char *s, int a);
extern void fn_830EF208(char *p, unsigned int a, unsigned int b, unsigned int c, int d);
extern int fn_830F2960(char *p, char *s, char *t);
extern int fn_83105FF0(char *p, char *s, char *t, int a, int b, unsigned int c);
extern int lbl_8329F084;

int fn_830C00C0(char *p)
{
    char *s;
    char *t;
    int r;
    char buf[1536];

    s = p + 0x3e70;
    fn_830CBCD0(p, s);
    fn_830C0798(lbl_8329F084, p + 0x57a0);
    t = s + 0x580;
    r = fn_830CBDA8(p, s, t);
    if (r != 0) return r;
    r = fn_83105FF0(p, s, t, 0, 0, *(unsigned short *)(s + 0x34) >> 1);
    if (r != 0) return r;
    r = fn_830F2960(p, s, t);
    if (r != 0) return r;
    r = fn_830DB068(p, s, t);
    if (r != 0) return r;
    if (*(int *)(p + 0xf6c) != 0) {
        fn_830EF0E8(s, *(int *)(p + 0x110));
        fn_830EF208(p, *(unsigned int *)(p + 0xec0) + *(unsigned int *)(p + 0xdc),
                    *(unsigned int *)(p + 0xec4) + *(unsigned int *)(p + 0xe0),
                    *(unsigned int *)(p + 0xe0) + *(unsigned int *)(p + 0xec8), 0);
        fn_830EF208(p, *(unsigned int *)(p + 0xec0) + *(unsigned int *)(p + 0xdc),
                    *(unsigned int *)(p + 0xec4) + *(unsigned int *)(p + 0xe0),
                    *(unsigned int *)(p + 0xe0) + *(unsigned int *)(p + 0xec8), 1);
    }
    fn_830C0AE0(p + 0x57a0, buf);
    *(int *)(p + 0x3d08) = 1;
    *(int *)(p + 0x3d0c) = 0;
    *(int *)(p + 0x3cf0) = 1;
    return 0;
}
