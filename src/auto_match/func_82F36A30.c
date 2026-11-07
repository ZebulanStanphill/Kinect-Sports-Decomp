typedef struct Obj_82F36A30 Obj_82F36A30;

typedef struct ObjVt_82F36A30 {
    void *slot0;
    void *slot1;
    void (*Release)(Obj_82F36A30 *self);
} ObjVt_82F36A30;

struct Obj_82F36A30 {
    ObjVt_82F36A30 *vt;
};

typedef struct Sub_82F36A30 {
    char pad0[0x68];
    unsigned int count;
} Sub_82F36A30;

typedef struct Main_82F36A30 {
    char pad0[0xc];
    void *p0c;
    char pad1[0x5c - 0x10];
    Sub_82F36A30 sub;
    char pad2[0x13c - 0xc8];
    int x13c;
} Main_82F36A30;

extern int fn_82F35400(Sub_82F36A30 *s, unsigned int idx, Obj_82F36A30 ***out);
extern int fn_82F35498(Sub_82F36A30 *s, unsigned int idx);

static __forceinline int RemoveRange_82F36A30(Sub_82F36A30 *s, unsigned int idx, unsigned int n)
{
    unsigned int i;
    int hr;

    if (idx + n > s->count) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        hr = fn_82F35498(s, idx);
        if (hr < 0) {
            break;
        }
        s->count--;
    }
    return hr >= 0;
}

int fn_82F36A30(Main_82F36A30 *p, unsigned int idx)
{
    int result;
    Sub_82F36A30 *s;
    Obj_82F36A30 **slot;

    if (p->p0c == 0) {
        result = (int)0xC00D36B6;
    }
    else if (idx >= p->sub.count) {
        result = (int)0x80070057;
    }
    else {
        s = &p->sub;
        fn_82F35400(s, idx, &slot);
        if (*slot != 0) {
            fn_82F35400(s, idx, &slot);
            (*slot)->vt->Release(*slot);
        }
        if (!RemoveRange_82F36A30(s, idx, 1)) {
            result = (int)0x8000FFFF;
        }
        else {
            p->x13c--;
            result = 0;
        }
    }
    return result;
}
