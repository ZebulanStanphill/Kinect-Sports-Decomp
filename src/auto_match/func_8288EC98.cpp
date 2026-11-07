struct BitRef_8288EC98 {
    unsigned int *word;
    unsigned int bit;
};

struct BitIt_8288EC98 {
    int ptr;
    int off;
};

struct Unit_8288B2D8 {
    char pad0[8];
    unsigned int count;
    char pad1[8];
    unsigned char enabled;
    unsigned int get(unsigned int i);
};

struct Iface_8288EC98;

struct IfaceVt_8288EC98 {
    void *f0;
    int *(*get)(Iface_8288EC98 *self);
};

struct Iface_8288EC98 {
    IfaceVt_8288EC98 *vt;
};

struct Elem_8288EC98 {
    char pad0[0x20];
    Iface_8288EC98 *f20;
};

struct Obj_8288EC98 {
    char pad0[0x10];
    Unit_8288B2D8 *sub;
};

struct Self_8288EC98;

struct SelfVt_8288EC98 {
    void *f0;
    void *f4;
    Obj_8288EC98 *(*getObj)(Self_8288EC98 *self);
};

struct Self_8288EC98 {
    SelfVt_8288EC98 *vt;
    int pad0[3];
    void *f10;
    int pad1[10];
    int bitsBegin;
    int pad2[3];
    unsigned int size;
};

extern "C" {
unsigned int fn_8240D928(void *a);
__declspec(noreturn) void fn_82F622E0(const char *msg);
BitRef_8288EC98 *fn_8288BE40(BitRef_8288EC98 *out, BitIt_8288EC98 *it, unsigned int idx);
unsigned char fn_82897BA8(unsigned int v);
Elem_8288EC98 *fn_82897620(Obj_8288EC98 *obj, unsigned int i);
void *fn_8265C9E0(unsigned int size);
void *fn_823AA970(void *a);
void *fn_8288D9D8(void *mem, Self_8288EC98 *self, void *a, int b);
void fn_82886518(void *p, int a, int b);
void *fn_82897BD0(void *a);
void fn_828BE158(void *a, void *b, void *c, int d);

void fn_8288EC98(Self_8288EC98 *self, void *key);
}

extern "C" void fn_8288EC98(Self_8288EC98 *self, void *key)
{
    unsigned int idx;
    BitIt_8288EC98 it;
    BitRef_8288EC98 tmp;
    BitRef_8288EC98 *ref;
    Obj_8288EC98 *obj;
    Unit_8288B2D8 *sub;
    void *mem;
    void *created;
    void *target;

    idx = fn_8240D928(key);
    if (self->size <= idx) {
        fn_82F622E0("invalid vector<bool> subscript");
    }
    it.ptr = self->bitsBegin;
    it.off = 0;
    ref = fn_8288BE40(&tmp, &it, idx);
    *ref->word &= ~(1 << ref->bit);

    obj = self->vt->getObj(self);
    sub = obj->sub;
    if (sub->enabled != 0) {
        unsigned int count = sub->count;
        unsigned int i;
        for (i = 0; i < count; i++) {
            if (fn_82897BA8(sub->get(i)) != 0) {
                Elem_8288EC98 *e = fn_82897620(obj, i);
                if (e->f20 != 0 && e->f20->vt->get(e->f20) != 0) {
                    int *p = e->f20 != 0 ? e->f20->vt->get(e->f20) : 0;
                    p[fn_8240D928(key) + 3] = 0;
                }
            }
        }
        *(unsigned char *)(fn_8240D928(key) + (int)obj + 0x34) = 0;
    }

    mem = fn_8265C9E0(0xa0);
    created = mem != 0 ? fn_8288D9D8(mem, self, fn_823AA970(key), 1) : 0;
    fn_82886518(created, 1000, -1);
    target = self->f10;
    fn_828BE158(target, created, fn_82897BD0(key), 0);
}
