#include "game/Vcall_82282330.h"
#include "game/Vcall_82282350.h"

struct Vcall_82282340 {
    virtual void v0();
    virtual void f();
};

typedef void (Vcall_82282330::*Vcall_82282330_pmf)();
typedef void (Vcall_82282340::*Vcall_82282340_pmf)();
typedef void (Vcall_82282350::*Vcall_82282350_pmf)();

/* tr1::function-sized value (0x18 bytes) passed by value. */
struct Function_82281308 {
    int words[6];
};

struct Vector_82281308 {
    void *first;
    void *last;
    void *end;
};

struct Pair_82281308 {
    int first;
    int second;
};

struct Object_82281308 {
    void *vtable;               /* 0x00 */
    int field4;                 /* 0x04 */
    int field8;                 /* 0x08 */
    int fieldC;                 /* 0x0c */
    void *child;                /* 0x10 */
    Vector_82281308 items;      /* 0x14 */
    int field20;                /* 0x20 */
    Pair_82281308 pair;         /* 0x24 */
    void *innerVtable;          /* 0x2c */
    Object_82281308 *owner;     /* 0x30 */
    Vcall_82282340_pmf method1; /* 0x34 */
    Vcall_82282350_pmf method2; /* 0x38 */
    Vcall_82282330_pmf method3; /* 0x3c */
    int field40;                /* 0x40 */
    int field44;                /* 0x44 */
    Function_82281308 callback; /* 0x48 */
    int field60;                /* 0x60 */
    int field64;                /* 0x64 */
};

extern "C" {
extern char lbl_821A8A08[];
extern char lbl_821A8C90[];
void *fn_8227FDA0(void *mem, void *source);
void *fn_822C5B18(void *dst, void *src);
void fn_82359C18(void *p);
void *fn_8265C9E0(unsigned int size);

static __forceinline void ZeroWord(void *word)
{
    *(int *)word = 0;
}

static __forceinline void InitVector(Vector_82281308 *vector)
{
    vector->first = 0;
    vector->last = 0;
    vector->end = 0;
}

static __forceinline void InitPair(Pair_82281308 *pair, int first, int second)
{
    pair->first = first;
    pair->second = second;
}

Object_82281308 *fn_82281308(Object_82281308 *self, void *source, int arg40, int arg8, int arg24, int arg28,
                             Function_82281308 *callback, int arg60)
{
    void *mem;
    void *child;

    self->field8 = arg8;
    self->vtable = lbl_821A8A08;
    ZeroWord(&self->fieldC);
    ZeroWord(&self->child);
    InitVector(&self->items);
    InitPair(&self->pair, arg24, arg28);
    self->innerVtable = lbl_821A8C90;
    self->field40 = arg40;
    fn_822C5B18(&self->callback, callback);
    self->field60 = arg60;
    self->field64 = 0;
    if (source != 0) {
        mem = fn_8265C9E0(0xa0);
        if (mem != 0) {
            child = fn_8227FDA0(mem, source);
        } else {
            child = 0;
        }
        self->child = child;
    }
    self->owner = self;
    self->method1 = &Vcall_82282340::f;
    self->method2 = &Vcall_82282350::f;
    self->method3 = &Vcall_82282330::f;
    fn_82359C18(callback);
    return self;
}
}
