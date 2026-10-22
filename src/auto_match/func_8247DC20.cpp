#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct ContainerBase;

struct ContainerProxy {
    ContainerProxy() : mycont(0), myfirstiter(0) {}
    const ContainerBase *mycont;
    void *myfirstiter;
};

template<class T> inline void construct(T *p, T &&v)
{
    ::new ((void *)p) T(static_cast<T &&>(v));
}

struct ContainerBase {
    ContainerProxy *myproxy;
};

struct Vec : ContainerBase {
    int *first;
    int *last;
    int *end;
    int f10;
};

struct Obj {
    void **vtbl;
    char pad04[0x24];
    Vec vec;
    int pad3c;
    char f40;
    char pad41[7];
    char sub48[0x90];
    int fd8;
    char fdc;
};

typedef void (*HookFn)(int, int, int, const char *, const char *, int);

extern "C" {
extern void *lbl_821BD718[];
extern HookFn lbl_83276774[];
void fn_82520D38(Obj *);
void fn_824C1DE0(void *, int);
}

extern "C" Obj *fn_8247DC20(Obj *self)
{
    Vec *v;
    fn_82520D38(self);
    self->vtbl = lbl_821BD718;
    v = &self->vec;
    v->myproxy = 0;
    v->myproxy = std::_Allocate(1, (ContainerProxy *)0);
    construct(v->myproxy, ContainerProxy());
    v->myproxy->mycont = v;
    v->first = 0;
    v->last = 0;
    v->end = 0;
    v->f10 = 0;
    self->f40 = 0;
    fn_824C1DE0(self->sub48, 0);
    self->fd8 = 0;
    self->fdc = 0;
    if (lbl_83276774[1])
        lbl_83276774[1](0, 0, 0, "olympus::invite::SceneControllerReceivedInvite::SceneControllerReceivedInvite",
                        "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\scenecontroller\\scenecontroller_frontend\\scenecontroller_frontend_receivedinvite.cpp",
                        0x4d);
    return self;
}
