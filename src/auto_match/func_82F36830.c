typedef struct IObj IObj;

typedef struct IObjVtbl {
    void *f[9];
    int (*GetSize)(IObj *self, unsigned int *size);
} IObjVtbl;

struct IObj {
    IObjVtbl *vt;
};

typedef struct Entry {
    IObj *obj;
} Entry;

typedef struct Self {
    char pad0[0xc];
    void *ready;
    char pad1[0x5c - 0x10];
    char list[0xc4 - 0x5c];
    unsigned int count;
} Self;

extern void fn_82F35400(void *list, unsigned int index, Entry **out);

int fn_82F36830(Self *self, IObj *obj, unsigned __int64 *offset)
{
    unsigned int count;
    unsigned __int64 total;
    unsigned int i;
    Entry *e0;
    Entry *e1;
    Entry *e2;
    unsigned int size;

    if (self->ready == 0) {
        return 0xc00d36b6;
    }
    if (obj == 0 || offset == 0) {
        return 0x80070057;
    }
    count = self->count;
    total = 0;
    for (i = 0; i < count; i++) {
        fn_82F35400(self->list, i, &e0);
        if (e0->obj == obj) {
            *offset = total;
            return 0;
        }
        fn_82F35400(self->list, i, &e1);
        if (e1->obj != 0) {
            fn_82F35400(self->list, i, &e2);
            if (e2->obj->vt->GetSize(e2->obj, &size) >= 0) {
                total = size + total;
            }
        }
    }
    return 0xc00d3a9c;
}
