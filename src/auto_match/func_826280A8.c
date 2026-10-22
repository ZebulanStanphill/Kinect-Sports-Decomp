typedef struct SharedPtr {
    void *ptr;
    void *rc;
} SharedPtr;

typedef struct Item {
    char pad0[0x20];
    int refs;
} Item;

typedef struct Self {
    int f0;
    void *ptr;
    void *rc;
    char pad0[0x34 - 0xc];
    Item **begin;
    Item **end;
} Self;

extern char lbl_821CBF20[];
extern void fn_822315A0(void *rc);
extern void fn_82517978(SharedPtr *sp, void *ptr, void *rc, int flag);
extern void *fn_8265C9E0(int size);
extern unsigned int fn_827D96A0(void *p);
extern void fn_827DE858(void *obj, SharedPtr *sp, char *src);

static void **Create(Self *self, char *src)
{
    void **obj;
    SharedPtr a;
    SharedPtr b;
    void *rc;

    obj = fn_8265C9E0(0x18);
    if (obj != 0) {
        a.ptr = 0;
        a.rc = 0;
        fn_82517978(&a, self->ptr, self->rc, 1);
        rc = a.rc;
        b.ptr = 0;
        b.rc = 0;
        fn_82517978(&b, a.ptr, rc, 0);
        fn_827DE858(obj, &b, src);
        *obj = lbl_821CBF20;
        if (rc != 0) {
            fn_822315A0(rc);
        }
        return obj;
    }
    return 0;
}

void **fn_826280A8(Self *self, char *src)
{
    Item **it;
    unsigned short id;

    it = self->begin;
    if (src != 0) {
        for (; it != self->end; it++) {
            id = fn_827D96A0(*it);
            if (id == fn_827D96A0(src + 0x68)) {
                Item *e = *it;
                e->refs++;
                break;
            }
        }
        return Create(self, src);
    }
    return 0;
}
