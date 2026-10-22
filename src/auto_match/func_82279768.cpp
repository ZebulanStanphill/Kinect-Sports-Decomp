#include "stdext/xmemory.h"

struct RefCount;
struct Movie;

struct SharedPtr {
    Movie *ptr;
    RefCount *rep;
};

struct ListNode {
    ListNode *next;
    ListNode *prev;
    int value;
};

struct Header {
    int size;
    int data;
};

struct HeaderBase {
    int a;
    int b;
};

struct Resource : Header, HeaderBase {
};

struct ResRange {
    Resource *res;
    char *end;
};

struct FuncImpl;
struct FuncImplVtbl {
    void *f0;
    void (*call)(FuncImpl *self, int a, HeaderBase *b, wchar_t *buf, int len);
};
struct FuncImpl {
    FuncImplVtbl *vtbl;
};

struct Function {
    int space[4];
    FuncImpl *impl;
};

struct Listener;
struct ListenerVtbl {
    void (*f0)(Listener *self, SharedPtr *sp);
};
struct Listener {
    ListenerVtbl *vtbl;
};

struct Elem40 {
    char pad[0xe4];
    int value;
    char pad2[0x8];
};

struct Elem54 {
    char pad[0x10];
    char flag;
    char pad2[3];
};

struct Config {
    char pad[0x40];
    Elem40 *elems;
    int count;
    char pad2[0xc];
    Elem54 *flags;
    void ResetFlags() { for (int j = 0; j < 32; j++) flags[j].flag = 0; }
};

struct Sound {
    char data[0x30];
};

struct Callback {
    void *vtbl;
    void *owner;
    void *f0;
    void *f1;
    void *f2;
};

struct Screen {
    void *vtbl;
    int _04;
    SharedPtr movie;
    ListNode *head;
    unsigned int size;
    int _18;
    int _1c;
    ResRange rr;
    char _28[0x70];
    int _98;
    int _9c;
    int _a0;
    int _a4;
    Callback cb;
    char _bc[0x18];
    int _d4;
    int _d8;
    int _dc;
    int _e0;
    int _e4;
    int _e8;
    int _ec;
    Config *_f0;
    int _f4;
    int _f8;
    int _fc;
    int _100;
    int _104;
    int _108;
    int _10c;
    Function func;
    char _124[4];
    char _128;
};

extern "C" {
extern void *lbl_821A82B8[];
extern void *lbl_821A8C90[];
extern const wchar_t lbl_820E975C[];
void fn_822315A0(RefCount *rep);
int fn_82274A10(void *a, int b, int c, int d);
void fn_82279FA0();
void fn_8227A140();
void fn_8227A218();
void fn_8227A358();
void fn_8227A748(Screen *self, wchar_t *buf);
void fn_822C5B18(Function *dst, Function *src);
void fn_82359C18(Function *f);
SharedPtr *fn_823F2E20(SharedPtr *dst, SharedPtr *src);
void fn_82517978(SharedPtr *dst, Movie *ptr, RefCount *rep, int throwFlag);
Resource *fn_8251F720(int *a, int b);
int fn_8266EC60();
SharedPtr *fn_8266ECF0(SharedPtr *ret, int a, int *b, void *c, int d, int e, int f, int g);
SharedPtr *fn_8266EF20(SharedPtr *ret, int a, int *b, int c, int d, int e);
void fn_82672C20(Movie *m, const char *name, void *args, int count);
void fn_82673A28(Movie *m, void (*cb)(), Screen *self);
int fn_828647D8(Sound *s);
void fn_82864898(Sound *s);
Sound *fn_82864988(Sound *s, const char *name);
void *memset(void *dst, int c, unsigned int n);
}

static void SetCb(Callback *cb, void *owner, void (*a)(), void (*b)(), void (*c)())
{
    cb->owner = owner;
    cb->f0 = (void *)a;
    cb->f1 = (void *)b;
    cb->f2 = (void *)c;
}

// Constructor. p6 is a std::tr1::function passed by value: it is copied into
// self->func (fn_822C5B18) and destroyed by the callee at the end (fn_82359C18).
extern "C" Screen *fn_82279768(Screen *self, int *p2, int p3, int p4, void *p5, Function *p6,
                               Config *p7, int p8, int p9, Listener *p10)
{
    SharedPtr *movie = &self->movie;
    SharedPtr tmp1;
    SharedPtr tmp2;
    self->vtbl = lbl_821A82B8;
    movie->ptr = 0;
    movie->rep = 0;
    self->size = 0;
    self->head = std::_Allocate(1, (ListNode *)0);
    self->head->next = self->head;
    self->head->prev = self->head;
    self->_1c = *p2;
    self->rr.res = 0;
    self->rr.end = 0;
    self->_98 = 0;
    self->_9c = 0;
    self->_a4 = p3;
    self->cb.vtbl = lbl_821A8C90;
    self->_d4 = 0;
    self->_d8 = 0;
    self->_dc = 1;
    self->_e0 = p4;
    self->_e4 = 0;
    self->_e8 = 0;
    self->_ec = p8;
    self->_f0 = p7;
    self->_f4 = 0;
    self->_f8 = 0;
    self->_fc = 0;
    self->_100 = 0;
    self->_104 = 0;
    fn_822C5B18(&self->func, p6);
    self->_128 = 0;

    Resource *r = fn_8251F720(p2, 0);
    self->rr.res = r;
    self->rr.end = (char *)self->rr.res + self->rr.res->size;
    self->_9c = fn_82274A10(p5, self->_ec, p9, 1);
    SetCb(&self->cb, self, fn_82279FA0, fn_8227A140, fn_8227A218);
    if (self->_e0 != 0) {
        fn_823F2E20(movie, fn_8266EF20(&tmp1, fn_8266EC60(), &self->rr.res->data, 0, 1, 0x18280143));
        if (tmp1.rep != 0)
            fn_822315A0(tmp1.rep);
    } else {
        fn_823F2E20(movie, fn_8266ECF0(&tmp2, fn_8266EC60(), &self->rr.res->data, p5, 0, -1, 0, 0x18280143));
        if (tmp2.rep != 0)
            fn_822315A0(tmp2.rep);
    }
    if (p10 != 0) {
        SharedPtr sp;
        sp.ptr = 0;
        sp.rep = 0;
        fn_82517978(&sp, movie->ptr, movie->rep, 0);
        p10->vtbl->f0(p10, &sp);
    }
    {
        Sound s;
        self->_108 = fn_828647D8(fn_82864988(&s, "Play_sfx_ui_frontend_select_fadein"));
        fn_82864898(&s);
    }
    {
        Sound s;
        self->_10c = fn_828647D8(fn_82864988(&s, "Stop_sfx_ui_frontend_select_fadein"));
        fn_82864898(&s);
    }
    fn_82673A28(movie->ptr, fn_8227A358, self);
    Config *cfg = self->_f0;
    if (cfg != 0) {
        int i;
        for (i = 0; i < cfg->count; i++)
            cfg->elems[i].value = 0x80000000;
        cfg->ResetFlags();
    }
    fn_82672C20(movie->ptr, "_root.RegisterButtons", 0, 0);
    fn_82672C20(movie->ptr, "_root.RegisterJiggles", 0, 0);
    wchar_t buf[256]; // = L"" (the literal is named lbl_820E975C)
    buf[0] = lbl_820E975C[0];
    memset(&buf[1], 0, sizeof(buf) - sizeof(buf[0]));
    if (p6->impl != 0)
        p6->impl->vtbl->call(p6->impl, 0, self->rr.res, buf, 256);
    fn_8227A748(self, buf);
    fn_82359C18(p6);
    return self;
}
