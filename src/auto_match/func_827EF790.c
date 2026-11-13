extern char lbl_8201DCF8[];
extern char lbl_8320A3E0[];

extern void fn_827F2BF0(void *p);
extern void fn_82811238(void *ctx, void *obj, void *str);
extern void *fn_82811438(void *buf, int *code, int n);

void fn_827EF790(void **self)
{
    int code;
    char buf[32];

    self[0] = lbl_8201DCF8;
    if (self[0x4a] != 0) {
        code = 3;
        fn_82811238(lbl_8320A3E0, self[0x4a], fn_82811438(buf, &code, 0x10));
    }
    if (self[0x45] != 0) {
        code = 3;
        fn_82811238(lbl_8320A3E0, self[0x45], fn_82811438(buf, &code, 0x10));
    }
    fn_827F2BF0(self);
}
