extern char lbl_8201DDE0[];
extern char lbl_8320A3E0[];

extern void fn_827F38B0(void *p);
extern void fn_827F38B8(void *p);
extern void fn_827FE3B0(void *p, void **out);
extern void fn_82811238(void *ctx, void *obj, void *str);
extern void *fn_82811438(void *buf, int *code, int n);

void fn_827F6010(void **self)
{
    void *obj;
    int code;
    char buf[32];

    obj = 0;
    self[0] = lbl_8201DDE0;
    fn_827FE3B0(self + 9, &obj);
    if (obj != 0) {
        code = 3;
        fn_82811238(lbl_8320A3E0, obj, fn_82811438(buf, &code, 0x10));
    }
    if (self[0x76] != 0) {
        code = 3;
        fn_82811238(lbl_8320A3E0, self[0x76], fn_82811438(buf, &code, 0x10));
    }
    fn_827F38B0(self + 0x51);
    fn_827F38B8(self);
}
