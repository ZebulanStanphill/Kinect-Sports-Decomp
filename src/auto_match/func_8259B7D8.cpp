#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Sym;
extern "C" void fn_827D9630(Sym *, const Sym *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" void *fn_82A1DD38(void *, const void *, unsigned int);
struct __declspec(align(8)) Sym {
    char d[0x18];
    Sym() {}
    Sym(const Sym &o) { fn_827D9630(this, &o); }
    ~Sym() {}
};

struct Data {
    int first;
    char rest[0x130];
};

struct Entry {
    Sym key;
    Data data;
    Entry(const Sym &k, const Data &d) : key(k) { fn_82A1DD38(&data, &d, 0x134); }
};

extern "C" Sym fn_825200F0(const unsigned int *);
inline void *operator new(unsigned int n) throw() { return fn_8265C9E0(n); }

struct Buf {
    char *data;
    int size;
};

struct Shared {
    Buf *ptr;
    void *owner;
};

struct LineIter {
    char *cur;
    char *begin;
    int size;
    char buf[0x100];
};

struct Cfg {
    char pad[0x68];
    Data data;
};

struct Value {
    int a;
    Entry *b;
};

struct Node {
    Node *next;
    Node *prev;
    Value value;
};

struct It {
    Node *p;
};

struct Pairib {
    It it;
    unsigned char ok;
};

struct Hash {
    int traits;
    Node *head;
    unsigned int size;
};

struct SetNode {
    SetNode *left;
    SetNode *parent;
    SetNode *right;
    int val;
    char color;
    char isnil;
};

struct Set {
    int comp;
    SetNode *head;
    unsigned int size;
};

struct SPair {
    void *ptr;
    void *owner;
};

struct Obj2 {
    char pad[0x134];
    SPair sp;
    int pad2[3];
};

struct Self {
    int pad0;
    int f4;
    int f8;
    char pad1[0x34 - 0xc];
    Hash list;
    char pad2[0x74 - 0x40];
    void *f74;
    char pad3[0x88 - 0x78];
    int count;
    char pad4[0x9c - 0x8c];
    Set set;
};

extern "C" {
char *fn_825FD848(LineIter *);
int fn_827D5088(Buf *);
Buf *fn_827D5070(Buf *);
int fn_82F67FE8(const char *, const char *, char *, int, int *);
unsigned int fn_8265BF48(const char *, int);
void *fn_82A1EFC0(void *, int, unsigned int);
void *fn_82A1DD38(void *, const void *, unsigned int);
int fn_827D96A0(Entry *);
Pairib *fn_8259C040(Pairib *, Hash *, const Value *);
void *fn_82522D98(unsigned int);
SPair *fn_82517978(SPair *, int, int, int);
void fn_823F2E20(void *, SPair *);
void fn_822315A0(void *);
Pairib *fn_82273600(Pairib *, Set *, SetNode *);
int fn_827D98C0(Self *);
void fn_8259AC38();
void fn_827D7098(void *, Sym *, int, int, int, int, int, int, void (*)(), Obj2 *);
void fn_82522ED8(Buf *);
}

extern "C" void fn_8259B7D8(Self *self, Shared *sp, Cfg *cfg)
{
    Buf *obj = sp->ptr;
    LineIter it;
    int size = fn_827D5088(obj);
    char *data = (char *)fn_827D5070(obj);
    it.size = size;
    it.cur = data;
    it.begin = data;
    it.buf[0] = 0;
    char *line;
    while ((line = fn_825FD848(&it)) != 0) {
        unsigned int n;
        char name[0x100];
        fn_82F67FE8(line, "%s %d", name, 0x100, (int *)&n);
        unsigned int hash = fn_8265BF48(name, 0);
        Data tmp;
        fn_82A1EFC0(&tmp, 0, 0x134);
        fn_82A1DD38(&tmp, &cfg->data, 0x134);
        Entry *e = new Entry(fn_825200F0(&hash), tmp);
        Hash *list = &self->list;
        Value v;
        v.a = fn_827D96A0(e);
        v.b = e;
        Pairib r1;
        fn_8259C040(&r1, list, &v);
        Set *set = &self->set;
        SetNode *sn = std::_Allocate(1, (SetNode *)0);
        sn->left = set->head;
        sn->parent = set->head;
        sn->right = set->head;
        sn->color = 0;
        sn->isnil = 0;
        if (&sn->val != 0)
            sn->val = tmp.first;
        Pairib r2;
        fn_82273600(&r2, set, sn);
        if (n != 0) {
            Sym key = fn_825200F0(&hash);
            Obj2 *o = (Obj2 *)fn_82522D98(0x148);
            fn_82A1EFC0(o, 0, 0x148);
            SPair sp2;
            sp2.ptr = 0;
            sp2.owner = 0;
            fn_82517978(&sp2, self->f4, self->f8, 1);
            fn_823F2E20(&o->sp, &sp2);
            if (sp2.owner)
                fn_822315A0(sp2.owner);
            fn_827D7098(self->f74, &key, fn_827D98C0(self), 2, 0, 1, 1, 0, fn_8259AC38, o);
            self->count++;
        }
    }
    fn_82522ED8(fn_827D5070(sp->ptr));
    if (sp->owner)
        fn_822315A0(sp->owner);
}
