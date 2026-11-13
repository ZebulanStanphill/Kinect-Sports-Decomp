// Returns the index registered for a name, registering it first when it is new: a
// std::map<std::string, int> lookup (the inline _Tree::find from func_8228F268), and for a
// new name the map entry (map::operator[], fn_8254FD18) gets the vector's size and an
// 84-byte record holding the name is appended (std::vector::push_back, func_8254FE78.cpp).
#include <string.h>
#include <vector>

struct Element_8254FE78 {
    int data[21];
};

struct Str_8254CC70;
extern "C" {
void fn_82230110(Str_8254CC70 *s, const char *text);
void fn_82230300(Str_8254CC70 *s, int built, unsigned int new_size);
}

struct Str_8254CC70 {
    union { char *p; char buf[16]; } u;
    unsigned int size;
    unsigned int cap;
    int alloc;
    __forceinline Str_8254CC70(const char *text) { fn_82230110(this, text); }
    __forceinline ~Str_8254CC70() { fn_82230300(this, 1, 0); }
};

struct Node_8254CC70 {
    Node_8254CC70 *left, *parent, *right;
    Str_8254CC70 key;
    int value;
    char color;
    char isnil;
};

struct Tree_8254CC70 {
    int pad;
    Node_8254CC70 *head;
    unsigned int size;
};

struct Self_8254CC70 {
    char pad0[0xa4];
    Tree_8254CC70 map;
    int padb0;
    std::vector<Element_8254FE78> records;
};

extern "C" {
int fn_8260D428(Str_8254CC70 *, int, unsigned, const char *, unsigned);
int *fn_8254FD18(Tree_8254CC70 *map, Str_8254CC70 *key);
extern char lbl_82196582[];
}

static __forceinline const char *cstr(Str_8254CC70 *s) { return s->cap >= 0x10 ? s->u.p : s->u.buf; }

static __forceinline int cmp(Str_8254CC70 *a, Str_8254CC70 *b) { unsigned len = b->size; const char *p = cstr(b); return fn_8260D428(a, 0, a->size, p, len); }

static __forceinline Node_8254CC70 *find(Tree_8254CC70 *t, Str_8254CC70 *key)
{
    Node_8254CC70 *res = t->head;
    Node_8254CC70 *n = res->parent;
    Node_8254CC70 **pp;
    Node_8254CC70 *tmp;
    Node_8254CC70 *endn;
    while (n->isnil == 0) {
        Str_8254CC70 *k = &n->key;
        if (cmp(k, key) < 0) {
            n = n->right;
        } else {
            res = n;
            n = n->left;
        }
    }
    tmp = res;
    if (res != t->head && cmp(key, &res->key) >= 0) {
        pp = &tmp;
    } else {
        endn = t->head;
        pp = &endn;
    }
    return *pp;
}

extern "C" int fn_8254CC70(Self_8254CC70 *self, const char *name)
{
    if (name == 0)
        name = lbl_82196582;
    Str_8254CC70 s(name);
    Node_8254CC70 *it = find(&self->map, &s);
    if (it != self->map.head)
        return it->value;
    Element_8254FE78 record;
    memset(&record, 0, sizeof(record));
    record.data[0] = (int)name;
    int index = (int)self->records.size();
    *fn_8254FD18(&self->map, &s) = index;
    self->records.push_back(record);
    return index;
}
