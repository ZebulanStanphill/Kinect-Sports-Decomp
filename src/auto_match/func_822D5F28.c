extern unsigned int strlen(const char *s);
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct String_822D5F28 {
    int unk0[7];
} String_822D5F28;

typedef struct SharedPtr_822D5F28 {
    void *ptr;
    void *rep;
} SharedPtr_822D5F28;

typedef struct NameEntry_822D5F28 {
    int id;
    char name[32];
} NameEntry_822D5F28;

typedef struct Store_822D5F28 {
    int unk0[33];
    int unk84;
} Store_822D5F28;

typedef struct Owner_822D5F28 {
    int unk0[112];
    Store_822D5F28 *store;
} Owner_822D5F28;

typedef struct Self_822D5F28 {
    int unk0[47];
    Owner_822D5F28 *owner;
    int pending;
    int key;
    int id;
    int unkCC;
    __vector4 value;
    int pendingE0;
    int argE4;
    int pendingE8;
    int argEC;
    int argF0;
    int argF4;
} Self_822D5F28;

extern NameEntry_822D5F28 lbl_831CD888[];
extern void fn_82230110(String_822D5F28 *s, const char *text);
extern void fn_82230360(String_822D5F28 *s, const char *text, unsigned int len);
extern unsigned char fn_822BD338(String_822D5F28 *s, const char *text);
extern void fn_82230300(String_822D5F28 *s, int tidy, int len);
extern SharedPtr_822D5F28 *fn_823730C0(SharedPtr_822D5F28 *ret, Store_822D5F28 *store, int key);
extern void fn_822315A0(void *rep);
extern void *fn_82365BD8(SharedPtr_822D5F28 *ret, SharedPtr_822D5F28 *src);
extern int fn_822CEB28(Owner_822D5F28 *owner, void *obj, String_822D5F28 *name, __vector4 *value);
extern int fn_822CE1C0(Owner_822D5F28 *owner, int arg);
extern int fn_822CEC20(Owner_822D5F28 *owner, int a, int b, int c);

static __forceinline void swapP(void **a, void **b)
{
    void *t = *a;
    *a = *b;
    *b = t;
}

void fn_822D5F28(Self_822D5F28 *self)
{
    Owner_822D5F28 *owner = self->owner;
    String_822D5F28 name;
    char *n;
    __vector4 value;
    SharedPtr_822D5F28 sp;
    SharedPtr_822D5F28 tmp;
    SharedPtr_822D5F28 moved;
    void *ptr;
    void *rep;
    int ok;
    Store_822D5F28 *store;
    int key;

    if (owner == 0) {
        return;
    }
    if (self->pending != 0) {
        fn_82230110(&name, "unknown");
        for (n = lbl_831CD888[0].name; (int)n < (int)lbl_831CD888[12].name; n += sizeof(NameEntry_822D5F28)) {
            if (self->id == ((int *)n)[-1]) {
                fn_82230360(&name, n, strlen(n));
            }
        }
        fn_822BD338(&name, "unknown");
        store = owner->store;
        key = self->key;
        sp.ptr = 0;
        sp.rep = 0;
        value = self->value;
        if (store != 0) {
            SharedPtr_822D5F28 *r = fn_823730C0(&tmp, store, key);
            ptr = 0;
            rep = 0;
            if (&moved != r) {
                swapP(&rep, &r->rep);
                swapP(&ptr, &r->ptr);
            }
            sp.rep = rep;
            sp.ptr = ptr;
            if (tmp.rep != 0) {
                fn_822315A0(tmp.rep);
            }
            if (ptr != 0 && owner->store->unk84 != 0) {
                int res = fn_822CEB28(owner, fn_82365BD8(&moved, &sp), &name, &value);
                if (rep != 0) {
                    fn_822315A0(rep);
                }
                ok = res;
            } else {
                if (rep != 0) {
                    fn_822315A0(rep);
                }
                ok = 0;
            }
        } else {
            ok = 0;
        }
        if (ok != 0) {
            self->pending = 0;
        }
        fn_82230300(&name, 1, 0);
    }
    if (self->pendingE0 != 0 && fn_822CE1C0(owner, self->argE4) != 0) {
        self->pendingE0 = 0;
    }
    if (self->pendingE8 != 0 && fn_822CEC20(owner, self->argEC, self->argF0, self->argF4) != 0) {
        self->pendingE8 = 0;
    }
}
