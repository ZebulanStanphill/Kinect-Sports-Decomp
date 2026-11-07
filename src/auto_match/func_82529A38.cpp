typedef struct P2_82529A38 {
    unsigned short id;
    char pad02[0x82];
    int f84;
    unsigned int f88;
    int f8c;
    int f90;
    unsigned int f94;
} P2_82529A38;

typedef struct R_82529A38 {
    void *f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    void *f20;
    int f24;
} R_82529A38;

class P3_82529A38 {
public:
    virtual void v00() = 0;
    virtual void v01() = 0;
    virtual void v02() = 0;
    virtual void v03() = 0;
    virtual void v04() = 0;
    virtual void v05() = 0;
    virtual void v06() = 0;
    virtual void v07() = 0;
    virtual void v08() = 0;
    virtual void v09() = 0;
    virtual void v10() = 0;
    virtual void v11() = 0;
    virtual void v12() = 0;
    virtual void v13() = 0;
    virtual void v14() = 0;
    virtual void v15() = 0;
    virtual void v16() = 0;
    virtual void v17() = 0;
    virtual void f48() = 0;
    virtual void v19() = 0;
    virtual void v20() = 0;
    virtual void v21() = 0;
    virtual void v22() = 0;
    virtual void f5c(int v) = 0;

    int pad04[0x1f];
    R_82529A38 *f80;
};

typedef struct Pair_82529A38 {
    int first;
    unsigned int second;
} Pair_82529A38;

typedef void *(*Getter_82529A38)(void);
typedef void (*Fill_82529A38)(Pair_82529A38 *p);

extern "C" void fn_82522ED8(R_82529A38 *r);
extern "C" R_82529A38 *fn_82529830(int p);
extern "C" int fn_82529BF0(R_82529A38 *r, int p, P2_82529A38 *d, int f);
extern "C" int fn_82587B68(int p);
extern "C" void fn_82594A70(R_82529A38 *r, int v);
extern "C" unsigned char fn_8288B760(P3_82529A38 *p);
extern "C" int lbl_8326AF38;

extern "C" R_82529A38 *fn_82529A38(int param_1, P2_82529A38 *param_2, P3_82529A38 *param_3)
{
    int o;
    void **obj;
    R_82529A38 *r;
    Pair_82529A38 pair;

    if (param_1 == 0) {
        return 0;
    }
    o = fn_82587B68(param_1);
    obj = (void **)(*(Getter_82529A38 *)(o + 8))();
    pair.second = 0;
    pair.first = 0;
    ((Fill_82529A38)*obj)(&pair);
    if (param_2->id != pair.second) {
        return 0;
    }
    r = fn_82529830(param_1);
    if (r == 0) {
        return 0;
    }
    r->f0 = obj;
    r->f4 = param_1;
    r->fc = 0;
    if (param_2->f88 != 0) {
        r->f1c = ((param_2->f94 & 0x2000000) != 0 && param_2->f8c == 0) ? 1 : 0;
    } else {
        r->f1c = 0;
    }
    if (param_3 != 0) {
        r->f1c = 1;
        r->f24 = fn_8288B760(param_3);
    } else if (param_2->f90 != 0) {
        r->f24 = 0;
    } else {
        r->f24 = 1;
    }
    if (fn_82529BF0(r, param_1, param_2, 1) != 0) {
        if (param_3 != 0) {
            r->f1c = 1;
            param_3->f5c(1);
            param_3->f80 = r;
            param_3->f5c(0);
            r->f20 = param_3;
            r->f1c = 1;
            param_3->f48();
        }
        if (r->f1c != 0) {
            fn_82594A70(r, param_2->f84);
        }
        lbl_8326AF38 = lbl_8326AF38 + 1;
    } else {
        fn_82522ED8(r);
        r = 0;
    }
    return r;
}
