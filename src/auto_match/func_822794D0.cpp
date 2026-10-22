#include "stdext/xmemory.h"

extern "C" void fn_822315A0(void *rep);

struct SP {
    void *ptr;
    void *rep;
    ~SP() { if (rep != 0) fn_822315A0(rep); }
};

struct Node {
    Node *next;
    Node *prev;
    int value;
};

struct Item40 {
    char pad[0xe4];
    unsigned int fe4;
    char pad2[0xf0 - 0xe8];
};

struct Item54 {
    char pad[0x10];
    unsigned char f10;
    char pad2[3];
};

struct Owner {
    char pad[0x40];
    Item40 *arr40;
    int count44;
    char pad48[0x54 - 0x48];
    Item54 *arr54;
};

struct Str {
    char buf[0x30];
};

struct List {
    Node *head;
    unsigned int size;
    int alloc;
};

struct Vec {
    int first;
    int last;
    int end;
    int alloc;
};

struct M98 {
    int a;
    int b;
    int c;
    int d;
};

struct Cb {
    void *vtbl;
    char pad[0xd4 - 0xac];
};

struct M120 {
    int a;
    int b;
};

struct Obj {
    void *vtbl;
    int f4;
    SP m8;
    List lst;
    Vec vec;
    char pad2c[0x98 - 0x2c];
    M98 m98;
    Cb cb;
    int fd4;
    int fd8;
    int fdc;
    int fe0;
    int fe4;
    int fe8;
    int fec;
    Owner *ff0;
    int ff4;
    int ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
    int f10c;
    char pad110[0x120 - 0x110];
    M120 m120;
    unsigned char f128;
};

extern "C" {
extern void *lbl_821A82B8[];
extern void *lbl_821A8C90[];
void *fn_8266EC60(void);
SP fn_8266EF20(void *a, int p2, int b, int c, int flags);
SP fn_8266ECF0(void *a, int p2, int p4, int b, int c, int d, int flags);
void fn_823F2E20(SP *dst, const SP &src);
void fn_8227A358(void);
void fn_82673A28(void *p, void (*cb)(void), Obj *o);
void fn_82672C20(void *p, const char *s, int a, int b);
Str *fn_82864988(Str *s, const char *text);
int fn_828647D8(Str *s);
void fn_82864898(Str *s);

Obj *fn_822794D0(Obj *self, int p2, int p3, int p4, Owner *p5)
{
    Owner *o;
    int i;
    Str s;

    self->vtbl = lbl_821A82B8;
    {
        SP *m8 = &self->m8;
        m8->ptr = 0;
        m8->rep = 0;
    }
    self->lst.size = 0;
    self->lst.head = std::_Allocate(1, (Node *)0);
    self->lst.head->next = self->lst.head;
    self->lst.head->prev = self->lst.head;
    self->vec.first = 0;
    self->vec.last = 0;
    self->vec.end = 0;
    {
        M98 *m98 = &self->m98;
        m98->a = 0;
        m98->b = 0;
        m98->d = 0;
    }
    {
        Cb *cb = &self->cb;
        cb->vtbl = lbl_821A8C90;
    }
    self->fe0 = p3;
    self->fdc = 1;
    self->fe4 = 1;
    self->fec = 1;
    self->fd4 = 0;
    self->fd8 = 0;
    self->fe8 = 0;
    self->ff0 = p5;
    self->ff4 = 0;
    self->ff8 = 0;
    self->ffc = 0;
    self->f100 = 0;
    self->f104 = 0;
    {
        M120 *m120 = &self->m120;
        m120->a = 0;
    }
    self->f128 = 0;
    if (self->fe0 != 0) {
        fn_823F2E20(&self->m8, fn_8266EF20(fn_8266EC60(), p2, 0, 1, 0x18280143));
    } else {
        fn_823F2E20(&self->m8, fn_8266ECF0(fn_8266EC60(), p2, p4, 0, -1, 0, 0x18280143));
    }
    o = self->ff0;
    if (o != 0) {
        for (i = 0; i < o->count44; i++) {
            o->arr40[i].fe4 = 0x80000000;
        }
        for (i = 0; i < 32; i++) {
            o->arr54[i].f10 = 0;
        }
    }
    fn_82673A28(self->m8.ptr, fn_8227A358, self);
    fn_82672C20(self->m8.ptr, "_root.RegisterJiggles", 0, 0);
    self->f108 = fn_828647D8(fn_82864988(&s, "Play_sfx_ui_frontend_select_fadein"));
    fn_82864898(&s);
    self->f10c = fn_828647D8(fn_82864988(&s, "Stop_sfx_ui_frontend_select_fadein"));
    fn_82864898(&s);
    return self;
}
}
