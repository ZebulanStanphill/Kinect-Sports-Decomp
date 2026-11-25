long _InterlockedDecrement(long volatile *);

typedef struct Rep_824D3E38 Rep_824D3E38;

typedef struct RepVt_824D3E38 {
    void (*destroy)(Rep_824D3E38 *);
    void (*deleteThis)(Rep_824D3E38 *);
} RepVt_824D3E38;

struct Rep_824D3E38 {
    RepVt_824D3E38 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_824D3E38 {
    void *ptr;
    Rep_824D3E38 *rep;
} WeakPtr_824D3E38;

typedef struct Entry_824D3E38 {
    int words[8];
} Entry_824D3E38;

typedef struct Vector_824D3E38 {
    Entry_824D3E38 *first;
    Entry_824D3E38 *last;
    Entry_824D3E38 *end;
} Vector_824D3E38;

typedef struct Data_824D3E38 {
    char pad0[0x90];
    Vector_824D3E38 entries; /* 0x090 */
    char pad1[0x410 - 0x9C];
    char lock[4]; /* 0x410 */
} Data_824D3E38;

typedef struct Deletable_824D3E38 Deletable_824D3E38;

typedef struct DeletableVt_824D3E38 {
    void (*destroy)(Deletable_824D3E38 *self, int flags);
} DeletableVt_824D3E38;

struct Deletable_824D3E38 {
    DeletableVt_824D3E38 *vt;
};

typedef struct Self_824D3E38 {
    void *vt; /* 0x000 */
    char pad0[0xF0 - 4];
    Data_824D3E38 *data;       /* 0x0F0 */
    Deletable_824D3E38 *child; /* 0x0F4 */
    char pad1[0x110 - 0xF8];
    char member[0x174 - 0x110]; /* 0x110 */
    WeakPtr_824D3E38 first;     /* 0x174 */
    WeakPtr_824D3E38 second;    /* 0x17C */
} Self_824D3E38;

extern char lbl_821C0D90[];
extern char lbl_821C0C34[];
extern void fn_82230300(void *p, int a, int b);
extern void fn_8265CA20(void *p);
extern void fn_824D47E0(void *member);
extern void fn_824CC9E8(Self_824D3E38 *self);

static __forceinline void Decwref_824D3E38(Rep_824D3E38 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_824D3E38(Rep_824D3E38 **p)
{
    if (*p != 0)
        Decwref_824D3E38(*p);
}

void fn_824D3E38(Self_824D3E38 *self)
{
    Data_824D3E38 *data;

    self->vt = lbl_821C0D90;
    if (self->child != 0) {
        self->child->vt->destroy(self->child, 1);
        self->child = 0;
    }
    data = self->data;
    if (data != 0) {
        Vector_824D3E38 *entries;

        fn_82230300(data->lock, 1, 0);
        entries = &data->entries;
        if (entries->first != 0) {
            Entry_824D3E38 *p;

            for (p = entries->first; p != entries->last; p++) {
            }
            fn_8265CA20(entries->first);
        }
        entries->first = 0;
        entries->last = 0;
        entries->end = 0;
        fn_8265CA20(data);
        self->data = 0;
    }
    Release_824D3E38(&self->second.rep);
    Release_824D3E38(&self->first.rep);
    fn_824D47E0(self->member);
    self->vt = lbl_821C0C34;
    fn_824CC9E8(self);
}
