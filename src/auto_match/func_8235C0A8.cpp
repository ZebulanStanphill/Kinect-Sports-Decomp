struct Counter_8235C0A8 {
    char pad[0x7d4];
    int added;
    int pending;
};

struct Slot_8235C0A8 {
    char pad[0x28];
    Counter_8235C0A8 *counter;
    int active;
};

struct Loader_8235C0A8 {
    char pad[0x34];
    Slot_8235C0A8 *slot;
    char pad38[0x110 - 0x38];
    int pool;
};

struct Mode_8235C0A8 {
    char pad[0x40];
    unsigned int state;
};

struct Screen_8235C0A8 {
    char pad[0xa48];
    int a48;
    float a4c;
    char pad50[0xa84 - 0xa50];
    int a84;
};

struct Id_8235C0A8 {
    unsigned int value;
};

struct Ptr_8235C0A8 {
    Screen_8235C0A8 *ptr;
    void *rep;
};

struct RefObj_8235C0A8 {
    void *vtbl;
    int uses;
    int weaks;
    int pad;
    char storage[0x1198 - 0x10];
};

struct Self_8235C0A8 {
    char pad[0x98];
    int a98;
    int a9c;
    Mode_8235C0A8 *mode;
    char padA4[0x174 - 0xa4];
    int started;
    char pad178[0x17c - 0x178];
    Ptr_8235C0A8 screen;
    char pad184[0xc0c - 0x184];
    int c0c;
    char padC10[0xc38 - 0xc10];
    int c38;
    char padC3C[0xe24 - 0xc3c];
    int fader;
    char padE28[0x15cc - 0xe28];
    Id_8235C0A8 id;
    char pad15d0[0x2b20 - 0x15d0];
    Loader_8235C0A8 *loader;
    char pad2b24[0x2cc4 - 0x2b24];
    unsigned int flags;
};

extern "C" {
extern char lbl_821A8D8C[];
extern float lbl_821CC160;
void *fn_8265C9E0(unsigned int size);
void fn_82573D30(Counter_8235C0A8 *c);
void fn_82416D20(int *pool, Slot_8235C0A8 *slot);
void fn_8241F610(Loader_8235C0A8 *loader);
void fn_82536590(int *fader, int value);
void fn_8227AD00(void *self, Id_8235C0A8 *id, int a, int b, const char *name, int c, int d, int e,
                 int f, int g, int h, int i);
void fn_823F2E20(Ptr_8235C0A8 *dst, Ptr_8235C0A8 *src);
void fn_822315A0(void *rep);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

static __forceinline int valid_8235C0A8(Id_8235C0A8 *id)
{
    if (id->value != 0) {
        return (id->value & 0xff000000) < 0x7a000000;
    }
    return 0;
}

static __forceinline int inState_8235C0A8(Mode_8235C0A8 *m, unsigned int s)
{
    return m != 0 && m->state == s;
}

extern "C" void fn_8235C0A8(Self_8235C0A8 *param_1)
{
    if (param_1->started == 0) {
        Loader_8235C0A8 *loader = param_1->loader;
        if (loader != 0) {
            Slot_8235C0A8 *slot = loader->slot;
            if (slot != 0) {
                Counter_8235C0A8 *c = slot->counter;
                slot->active = 0;
                c->added++;
                c->pending--;
                fn_82573D30(slot->counter);
                fn_82416D20(&loader->pool, loader->slot);
                loader->slot = 0;
            }
            fn_8241F610(param_1->loader);
        }
        param_1->started = 1;
        {
            unsigned int *f = &param_1->flags;
            *f |= 0x10;
        }
        if (param_1->c38 != 0 && param_1->c0c != 0) {
            fn_82536590(&param_1->fader, 0);
        }
    }
    if (valid_8235C0A8(&param_1->id) && param_1->screen.ptr == 0 &&
        !inState_8235C0A8(param_1->mode, 1) && !inState_8235C0A8(param_1->mode, 2)) {
        int b = param_1->a9c;
        int a = param_1->a98;
        RefObj_8235C0A8 *r = (RefObj_8235C0A8 *)fn_8265C9E0(0x1198);
        if (r != 0) {
            void *p;
            r->uses = 1;
            r->weaks = 1;
            r->vtbl = lbl_821A8D8C;
            p = operator new(0x1188, (void *)r->storage);
            if (p != 0) {
                fn_8227AD00(p, &param_1->id, a, b, "introscreentitle", 0, 0, 0, 0, 0, 1, 0);
            }
        } else {
            r = 0;
        }
        {
            Ptr_8235C0A8 tmp;
            tmp.ptr = (Screen_8235C0A8 *)r->storage;
            tmp.rep = r;
            fn_823F2E20(&param_1->screen, &tmp);
            if (tmp.rep != 0) {
                fn_822315A0(tmp.rep);
            }
        }
        {
            float v = lbl_821CC160;
            Screen_8235C0A8 *s = param_1->screen.ptr;
            s->a84 = 0xf;
            s->a4c = v;
            s->a48 = 0;
        }
    }
}
