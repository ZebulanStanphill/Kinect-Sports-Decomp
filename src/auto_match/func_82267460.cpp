#include "stdext/xmemory.h"

struct Node {
    Node *next;
    Node *prev;
    int value;
};

struct List {
    Node *head;
    unsigned int size;
    int alval;
};

struct Name {
    char buf[40];
};

struct Src {
    void *ptr;
};

extern "C" {
void *fn_82274A10(int a, int b, int c, int d);
void *fn_82284118(void *self, Src *src, int flag);
int fn_828647D8(Name *);
void fn_82864898(Name *);
Name *fn_82864988(Name *, const char *);
void fn_82267C00(void);
void fn_82267CC8(void);
void fn_82267D60(void);
extern void *lbl_821A8C90[];
}

struct Obj {
    List a;
    List b;
    void *m18;
    int pad1c;
    int m20;
    void **m24;
    Obj *m28;
    void (*m2c)(void);
    void (*m30)(void);
    void (*m34)(void);
    int m38;
    int m3c;
    int m40;
    int m44;
    int m48;
    int m4c;
    int m50;
    int m54;
    int m58;
    int m5c;
    int m60;
    int m64;
    int m68;
    void *m6c;
    int m70;
    int m74;
};

static inline void List_init(List *l)
{
    l->size = 0;
    l->head = std::_Allocate(1, (Node *)0);
    l->head->next = l->head;
    l->head->prev = l->head;
}

extern "C" Obj *fn_82267460(Obj *self, int p2, int p3, Src *p4, int *p5, int p6, int p7)
{
    List_init(&self->a);
    List_init(&self->b);
    self->m18 = 0;
    self->m20 = p2;
    self->m24 = lbl_821A8C90;
    self->m38 = 0;
    self->m3c = 1;
    self->m40 = 0;
    self->m44 = 0;
    self->m48 = 0;
    self->m4c = 0;
    self->m50 = p3;
    self->m54 = 1;
    self->m58 = 0;
    self->m5c = 0;
    self->m68 = p6;
    self->m6c = 0;
    self->m74 = p7;
    self->m18 = fn_82274A10(1, p3, 0, 0);
    self->m28 = self;
    self->m2c = fn_82267C00;
    self->m30 = fn_82267CC8;
    self->m34 = fn_82267D60;
    int ok = 0;
    if (p4 != 0)
        ok = p4->ptr != 0;
    if (ok) {
        void *mem = fn_8265C9E0(0xd44);
        self->m6c = mem ? fn_82284118(mem, p4, 1) : 0;
    }
    self->m70 = *p5;
    Name name;
    self->m60 = fn_828647D8(fn_82864988(&name, "Play_sfx_ui_frontend_select_fadein"));
    fn_82864898(&name);
    self->m64 = fn_828647D8(fn_82864988(&name, "Stop_sfx_ui_frontend_select_fadein"));
    fn_82864898(&name);
    return self;
}
