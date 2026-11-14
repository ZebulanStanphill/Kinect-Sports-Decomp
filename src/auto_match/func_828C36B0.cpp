// Replaces map[key] (std::map<std::string, std::set<Element_828A61C8> >) with an empty set by
// move-assignment, then stores a new 0x28-byte object, built from that set, into a
// shared_ptr map entry (move-assignment of a temporary shared_ptr).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#include <string>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828A61C8.h"

typedef std::set<Element_828A61C8> Set;
typedef Set::_Mybase SetTree;

template <> SetTree::iterator SetTree::erase(const_iterator, const_iterator);

struct SetRaw_828C36B0 {
    int alloc;
    void *head;
    unsigned int size;
    int padC;
};

struct Empty_828C36B0 {
    char c;
};

struct SharedPtr_828C36B0 {
    void *px;
    void *rep;
};

struct Map_828C36B0;
struct PtrMap_828C36B0;
struct Object_828C36B0;

struct Self_828C36B0 {
    char pad0[0xd8];
    char ptrMap[0x10];      /* 0xd8 */
    char setMap[0x10];      /* 0xe8 */
};

extern "C" {
void fn_822315A0(void *rep);
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *p);
SetRaw_828C36B0 *fn_828A2348(SetRaw_828C36B0 *self, const Empty_828C36B0 *comp, const Empty_828C36B0 *al);
void fn_828A60D8(SetRaw_828C36B0 *self);
SharedPtr_828C36B0 *fn_828BAB20(SharedPtr_828C36B0 *self, Object_828C36B0 *p);
SharedPtr_828C36B0 *fn_828BCA78(void *m, const std::string *key);
Object_828C36B0 *fn_828C2480(void *mem, void *owner, const std::string *key, SetRaw_828C36B0 *set);
SetRaw_828C36B0 *fn_828C35A0(void *m, const std::string *key);
}

static __forceinline void MoveAssign_828C36B0(SharedPtr_828C36B0 *dst, SharedPtr_828C36B0 *r)
{
    SharedPtr_828C36B0 tmp;
    void *old;
    tmp.px = 0;
    tmp.rep = 0;
    if (&tmp != r) {
        void **pr = &r->rep;
        tmp.rep = *pr;
        *pr = 0;
        tmp.px = r->px;
        r->px = 0;
    }
    old = dst->rep;
    dst->rep = tmp.rep;
    dst->px = tmp.px;
    if (old != 0)
        fn_822315A0(old);
}

extern "C" void fn_828C36B0(Self_828C36B0 *self, void *owner, const std::string *key)
{
    Empty_828C36B0 comp;
    SharedPtr_828C36B0 sp;
    SetRaw_828C36B0 empty;
    SetRaw_828C36B0 *set;
    void *mem;
    Object_828C36B0 *obj;
    SharedPtr_828C36B0 *r;
    SharedPtr_828C36B0 *dst;

    fn_828A2348(&empty, &comp, &comp);
    set = fn_828C35A0(self->setMap, key);
    if (set != &empty) {
        unsigned int t;
        fn_828A60D8(set);
        t = (unsigned int)set->head;
        set->head = empty.head;
        empty.head = (void *)t;
        t = set->size;
        set->size = empty.size;
        empty.size = t;
    }
    ((Set *)&empty)->erase(((Set *)&empty)->begin(), ((Set *)&empty)->end());
    fn_8265CA20(empty.head);

    mem = fn_8265C9E0(0x28);
    if (mem != 0)
        obj = fn_828C2480(mem, owner, key, fn_828C35A0(self->setMap, key));
    else
        obj = 0;
    r = fn_828BAB20(&sp, obj);
    dst = fn_828BCA78(self->ptrMap, key);
    MoveAssign_828C36B0(dst, r);
    if (sp.rep != 0)
        fn_822315A0(sp.rep);
}
