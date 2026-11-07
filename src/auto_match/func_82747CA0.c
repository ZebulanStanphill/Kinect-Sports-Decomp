typedef unsigned char U8;

typedef struct Ref_82747CA0 {
    int unk0;
    int unk4;
    int count;
} Ref_82747CA0;

typedef struct Variant_82747CA0 {
    U8 type;
    U8 pad1[7];
    int value;
    int padC;
} Variant_82747CA0;

extern char lbl_82012B24[];
extern char lbl_82012AD0[];
extern char lbl_820129E0[];
extern char lbl_82012960[];
extern char lbl_821ADAE0[];
extern char lbl_8201169C[];
extern char lbl_821ADAE8[];
extern char lbl_820116A0[];
extern char lbl_82012A08[];
extern char lbl_820129FC[];
extern char lbl_82011754[];

extern void fn_82747B98(void);
extern void fn_826BF638(void *a, void *b, int *c, void *d, U8 *e);
extern void fn_82681728(Ref_82747CA0 **out, int base, void *name);
extern void fn_826C1FF8(void *a, int *b, Ref_82747CA0 **r, Variant_82747CA0 *v, U8 *f);
extern void fn_826944C8(Ref_82747CA0 *r);
extern void fn_82696330(Variant_82747CA0 *v);

void **fn_82747CA0(void **param_1, int *param_2)
{
    void **sub;
    Ref_82747CA0 *o;
    U8 f0;
    U8 f1;
    Ref_82747CA0 *r1;
    Variant_82747CA0 v1;
    U8 f2;
    Ref_82747CA0 *r2;
    Variant_82747CA0 v2;
    U8 f3;
    Ref_82747CA0 *r3;
    Variant_82747CA0 v3;
    U8 f4;
    Ref_82747CA0 *r4;
    Variant_82747CA0 v4;
    U8 f5;
    Ref_82747CA0 *r5;
    Variant_82747CA0 v5;
    U8 f6;
    Ref_82747CA0 *r6;
    Variant_82747CA0 v6;
    U8 f7;
    Ref_82747CA0 *r7;
    Variant_82747CA0 v7;

    fn_82747B98();
    param_1[0] = lbl_82012B24;
    param_1[4] = lbl_82012AD0;
    param_1[0xc] = lbl_820129E0;
    f0 = 6;
    fn_826BF638(param_1 + 0xc, param_1, param_2, lbl_82012960, &f0);
    sub = param_1 + 4;

    f1 = 2;
    v1.type = 4;
    v1.value = 0;
    fn_82681728(&r1, *param_2 + 0x254, lbl_821ADAE0);
    fn_826C1FF8(sub, param_2, &r1, &v1, &f1);
    o = r1;
    if (--o->count == 0) {
        fn_826944C8(o);
    }
    fn_82696330(&v1);

    f2 = 2;
    v2.type = 4;
    v2.value = 0;
    fn_82681728(&r2, *param_2 + 0x254, lbl_8201169C);
    fn_826C1FF8(sub, param_2, &r2, &v2, &f2);
    o = r2;
    if (--o->count == 0) {
        fn_826944C8(o);
    }
    fn_82696330(&v2);

    f3 = 2;
    v3.type = 4;
    v3.value = 0;
    fn_82681728(&r3, *param_2 + 0x254, lbl_821ADAE8);
    fn_826C1FF8(sub, param_2, &r3, &v3, &f3);
    o = r3;
    if (--o->count == 0) {
        fn_826944C8(o);
    }
    fn_82696330(&v3);

    f4 = 2;
    v4.type = 4;
    v4.value = 0;
    fn_82681728(&r4, *param_2 + 0x254, lbl_820116A0);
    fn_826C1FF8(sub, param_2, &r4, &v4, &f4);
    o = r4;
    if (--o->count == 0) {
        fn_826944C8(o);
    }
    fn_82696330(&v4);

    f5 = 2;
    v5.type = 4;
    v5.value = 0;
    fn_82681728(&r5, *param_2 + 0x254, lbl_82012A08);
    fn_826C1FF8(sub, param_2, &r5, &v5, &f5);
    o = r5;
    if (--o->count == 0) {
        fn_826944C8(o);
    }
    fn_82696330(&v5);

    f6 = 2;
    v6.type = 4;
    v6.value = 0;
    fn_82681728(&r6, *param_2 + 0x254, lbl_820129FC);
    fn_826C1FF8(sub, param_2, &r6, &v6, &f6);
    o = r6;
    if (--o->count == 0) {
        fn_826944C8(o);
    }
    fn_82696330(&v6);

    f7 = 2;
    v7.type = 4;
    v7.value = 0;
    fn_82681728(&r7, *param_2 + 0x254, lbl_82011754);
    fn_826C1FF8(sub, param_2, &r7, &v7, &f7);
    o = r7;
    if (--o->count == 0) {
        fn_826944C8(o);
    }
    fn_82696330(&v7);

    return param_1;
}
