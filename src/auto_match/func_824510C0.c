extern void fn_82433068(void *self);
extern void fn_82437E38(void *self, int a, int b);
extern void *fn_82450F88(void *p, int a);
extern void *fn_8265C9E0(unsigned int size);
extern char lbl_821BA3D0[];

typedef struct S {
    void *vt;
    char pad4[0x40];
    void *child;
} S;

S *fn_824510C0(S *self, int a)
{
    void *p;

    fn_82433068(self);
    self->vt = lbl_821BA3D0;
    p = fn_8265C9E0(0x80);
    self->child = p ? fn_82450F88(p, a) : 0;
    fn_82437E38(self, 2, 0);
    fn_82437E38(self, 6, 0);
    fn_82437E38(self, 7, 0);
    fn_82437E38(self, 8, 0);
    fn_82437E38(self, 9, 0);
    fn_82437E38(self, 10, 0);
    fn_82437E38(self, 0xb, 0);
    fn_82437E38(self, 0xf, 0);
    fn_82437E38(self, 0xc, 0);
    fn_82437E38(self, 0xd, 0);
    fn_82437E38(self, 0xe, 0);
    return self;
}
