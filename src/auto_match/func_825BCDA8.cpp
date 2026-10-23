#include "stdext/xmemory.h"

extern "C" {
void fn_827D9980(void *self, unsigned int a, unsigned int b, unsigned int c, unsigned int d);
void fn_82587028(void *hash, unsigned int buckets);
void fn_827D9630(void *dst, const void *src);
unsigned int fn_82A1E6A0(int a, int b, int c, int d);
void RtlInitializeCriticalSection(void *cs);
extern void *lbl_821C8D10[];
extern const float lbl_821CA45C[2];
}

extern "C" __declspec(selectany) const float lbl_821CA45C[2] = { 1.0f, 1.0f };

struct Args {
    unsigned int pad0;
    unsigned int a4;
    unsigned int a8;
    unsigned int ac;
    unsigned int a10;
    unsigned int pad14;
    unsigned char a18[0x18];
    unsigned int a30;
    unsigned int a34;
    unsigned int a38;
};

struct Compare {
    char c;
    Compare() {}
};

struct ListNode {
    ListNode *next;
    ListNode *prev;
    unsigned int value[2];
};

struct List {
    ListNode *head;
    unsigned int size;
    unsigned int alval;
    __forceinline void init()
    {
        size = 0;
        head = std::_Allocate(1, (ListNode *)0);
        head->next = head;
        head->prev = head;
    }
};

struct Vec {
    ListNode **first;
    ListNode **last;
    ListNode **end;
    unsigned int alval;
    void init() { first = 0; last = 0; end = 0; }
};

struct Traits {
    Compare comp;
};

struct Hash : Traits {
    List list;
    Vec vec;
    unsigned int mask;
    unsigned int maxidx;
    float max_bucket_size;
    __forceinline void init(const Compare &c)
    {
        comp = c;
        list.init();
        float m = lbl_821CA45C[1];
        {
            Vec *v = &vec;
            v->first = 0;
            v->last = 0;
            v->end = 0;
        }
        max_bucket_size = m;
        fn_82587028(this, 8);
    }
};

struct Base {
    void **vtbl;
    unsigned int pad04[12];
};

struct Obj : Base {
    unsigned int f34;
    unsigned int f38;
    unsigned int f3c;
    unsigned int f40[7];
    Hash hash;
    unsigned int f88;
    unsigned int f8c;
    unsigned char pad90[0x1c4 - 0x90];
    unsigned int f1c4;
    unsigned int f1c8;
    unsigned int pad1cc[3];
    unsigned int f1d8;
    unsigned int f1dc;
    unsigned int pad1e0;
    unsigned int f1e4;
    unsigned int f1e8;
    unsigned int f1ec;
    unsigned int f1f0;
    unsigned int pad1f4;
    unsigned char f1f8[0x18];
    unsigned int f210;
    unsigned char f214;
    unsigned int pad218;
    unsigned int f21c;
    unsigned int f220;
    unsigned int f224;
    unsigned int pad228;
    unsigned int f22c;
    unsigned int f230;
    unsigned char cs[0x1c];
};

extern "C" Obj *fn_825BCDA8(Obj *self, Args *args)
{
    fn_827D9980(self, args->a4, args->ac, args->a10, args->a38);
    self->vtbl = lbl_821C8D10;
    self->f34 = args->a30;
    self->f38 = args->a4;
    self->f3c = args->a8;
    self->f40[0] = 0;
    self->f40[1] = 0;
    self->f40[2] = 0;
    self->f40[3] = 0;
    self->f40[4] = 0;
    self->f40[5] = 0;
    self->f40[6] = 0;
    self->hash.init(Compare());
    self->f88 = 0;
    self->f8c = 0;
    self->f1c4 = 0;
    self->f1c8 = 0;
    self->f1dc = 0;
    self->f1e4 = 0;
    self->f1e8 = 0;
    self->f1ec = 0;
    self->f1f0 = 0;
    fn_827D9630(self->f1f8, args->a18);
    self->f210 = args->a34;
    unsigned int *q = &self->f21c;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[4] = 0;
    q[5] = 0;
    if (self->f210 != 0)
        self->f214 = 1;
    else
        self->f214 = 0;
    self->f1d8 = fn_82A1E6A0(0, 1, 0, 0);
    RtlInitializeCriticalSection(self->cs);
    return self;
}
