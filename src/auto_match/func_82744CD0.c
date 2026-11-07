typedef struct RefObj_82744CD0 {
    int unk0;
    int unk4;
    int count;
} RefObj_82744CD0;

typedef struct Locals_82744CD0 {
    unsigned char kind;
    unsigned char kind2;
    RefObj_82744CD0 *ref;
} Locals_82744CD0;

typedef struct Value_82744CD0 {
    unsigned char type;
    int unk4;
    int value;
    int unkC;
} Value_82744CD0;

extern void fn_82744C18(void);
extern void fn_826BF638(void *a, void *b, unsigned int *c, void *d, unsigned char *e);
extern void fn_82681728(RefObj_82744CD0 **out, int base, const char *name);
extern void fn_826C1FF8(void *a, unsigned int *b, RefObj_82744CD0 **c, Value_82744CD0 *d, unsigned char *e);
extern void fn_826944C8(RefObj_82744CD0 *p);
extern void fn_82696330(Value_82744CD0 *p);
extern char lbl_82012814[];
extern char lbl_82012818[];
extern char lbl_8201286C[];
extern char lbl_82012750[];

void **fn_82744CD0(void **param_1, unsigned int *param_2)
{
    Locals_82744CD0 s;
    Value_82744CD0 v;
    RefObj_82744CD0 *r;

    fn_82744C18();
    param_1[0] = lbl_8201286C;
    param_1[4] = lbl_82012818;
    param_1[0xc] = lbl_82012814;
    s.kind = 6;
    fn_826BF638(param_1 + 0xc, param_1, param_2, lbl_82012750, &s.kind);
    s.kind2 = 2;
    v.type = 4;
    v.value = 0;
    fn_82681728(&s.ref, *param_2 + 0x254, "length");
    fn_826C1FF8(param_1 + 4, param_2, &s.ref, &v, &s.kind2);
    r = s.ref;
    if (--r->count == 0) {
        fn_826944C8(r);
    }
    fn_82696330(&v);
    return param_1;
}
