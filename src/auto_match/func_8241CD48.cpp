// Looks an id up in the owner's map and, when it has an entry, appends {entry, item} to the
// element vector at +0x3f8. Element_82420180 is the placeholder element type of
// func_8241FE58.cpp (push_back) and func_82420180.cpp (reserve).
#include <vector>

namespace BaseVtable {
extern "C" void *lbl_821B9BC8[];
}

namespace DerivedVtable {
extern "C" void *lbl_821B9BC8[];
}

struct Base_82420180 {
    Base_82420180(const Base_82420180 &other);
    ~Base_82420180();
    void **vtable;
    int unk4;
};

inline Base_82420180::Base_82420180(const Base_82420180 &other)
{
    vtable = BaseVtable::lbl_821B9BC8;
    unk4 = other.unk4;
}

inline Base_82420180::~Base_82420180()
{
    vtable = BaseVtable::lbl_821B9BC8;
}

struct Derived_82420180 : Base_82420180 {
    Derived_82420180(const Derived_82420180 &other);
    ~Derived_82420180();
    int unk8;
    unsigned int id;
    float unk10;
};

inline Derived_82420180::Derived_82420180(const Derived_82420180 &other)
    : Base_82420180(other)
{
    vtable = DerivedVtable::lbl_821B9BC8;
    unk8 = other.unk8;
    id = other.id;
    unk10 = other.unk10;
}

inline Derived_82420180::~Derived_82420180()
{
    vtable = DerivedVtable::lbl_821B9BC8;
}

struct Element_82420180 {
    Element_82420180(int entry, const Derived_82420180 &item) : unk0(entry), unk4(item) {}
    int unk0;
    Derived_82420180 unk4;
};

typedef Element_82420180 T;

template <> void std::vector<T>::push_back(const T &);

struct Node_8241CD48 {
    Node_8241CD48 *left;
    Node_8241CD48 *parent;
    Node_8241CD48 *right;
    unsigned int key;
    void *value;
    char pad14[0x20];
    char color;
    char isnil;
};

struct Tree_8241CD48 {
    int alloc;
    Node_8241CD48 *head;
    unsigned int size;
};

struct It_8241CD48 {
    Node_8241CD48 *p;
};

struct Registry_8241CD48 {
    char pad0[0x5c];
    Tree_8241CD48 map;
};

struct Owner_8241CD48 {
    char pad0[0x8c];
    Registry_8241CD48 *registry;
};

struct Obj_8241CD48 {
    Owner_8241CD48 *owner;
    char pad4[0x3f4];
    std::vector<T> elements;
};

static Node_8241CD48 *Lbound(Tree_8241CD48 *t, unsigned int key)
{
    Node_8241CD48 *pnode = t->head->parent;
    Node_8241CD48 *wherenode = t->head;
    while (!pnode->isnil) {
        if (pnode->key < key) {
            pnode = pnode->right;
        } else {
            wherenode = pnode;
            pnode = pnode->left;
        }
    }
    return wherenode;
}

static It_8241CD48 End(Tree_8241CD48 *t)
{
    It_8241CD48 e;
    e.p = t->head;
    return e;
}

static It_8241CD48 Find(Tree_8241CD48 *t, unsigned int key)
{
    It_8241CD48 where;
    It_8241CD48 e;
    where.p = Lbound(t, key);
    return *((where.p == t->head || key < where.p->key) ? (e = End(t), &e) : &where);
}

extern "C" void fn_8241CD48(Obj_8241CD48 *self, const Derived_82420180 *item)
{
    Registry_8241CD48 *reg = self->owner->registry;
    It_8241CD48 it = Find(&reg->map, item->id);
    void *entry = it.p != reg->map.head ? it.p->value : 0;
    if (entry != 0) {
        T e((int)entry, *item);
        self->elements.push_back(e);
    }
}
