// Stops every item of a std::map<int, Item *> and then calls a std::tr1::function<void()>.
// The map's iterator ++ is the original's out-of-line (folded) fn_82250928.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
namespace tr1 {
extern "C" __declspec(noreturn) void fn_82F63108(void);
}
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#define _Xfunc fn_82F63108
#include <map>
#include <functional>
#undef _Xlength_error
#undef _Xout_of_range
#undef _Xfunc

struct Item_823B7F10 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void Stop();
    int pad04;
    int active;
};

struct Data_823B7F10 {
    char pad[0x144];
    char sub[4];
};

struct Owner_823B7F10 {
    virtual void v0();
    virtual void v1();
    virtual Data_823B7F10 *GetData();
    char pad04[0x64];
};

struct Iface_823B7F10 {
    int x;
};

struct OwnerFull_823B7F10 : Owner_823B7F10, Iface_823B7F10 {
};

typedef std::map<int, Item_823B7F10 *> Map;
typedef Map::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) void fn_82250928(Unchecked *it);
void fn_828AAF70(char *p, int v);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82250928(this);
    return *this;
}

struct Obj_823B7F10 {
    int pad00[3];
    Iface_823B7F10 *owner;
    int pad10[10];
    std::tr1::function<void()> callback;
    int pad50[3];
    Map items;
};

extern "C" void fn_823B7F10(Obj_823B7F10 *self)
{
    fn_828AAF70(static_cast<OwnerFull_823B7F10 *>(self->owner)->GetData()->sub, 1);
    for (Map::iterator it = self->items.begin(); it != self->items.end(); ++it) {
        Item_823B7F10 *item = it->second;
        if (item->active != 0) {
            item->Stop();
            item->active = 0;
        }
    }
    if (self->callback) {
        self->callback();
    }
}
