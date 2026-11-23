typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

long _InterlockedDecrement(long volatile *);

typedef struct Rep_82406510 Rep_82406510;

typedef struct RepVtbl_82406510 {
    void (*destroy)(Rep_82406510 *self);
    void (*deleteThis)(Rep_82406510 *self);
} RepVtbl_82406510;

struct Rep_82406510 {
    RepVtbl_82406510 *vtbl;
    long uses;
    long weaks;
};

typedef struct WeakPtr_82406510 {
    void *ptr;
    Rep_82406510 *rep;
} WeakPtr_82406510;

typedef struct String_82406510 {
    char data[0x1c];
} String_82406510;

typedef struct Punch_82406510 {
    void *vtbl;             /* 0x0 */
    WeakPtr_82406510 owner; /* 0x4 */
    int kind;               /* 0xc */
    String_82406510 name;   /* 0x10 */
    int high;               /* 0x2c */
    __vector4 start;        /* 0x30 */
    __vector4 end;          /* 0x40 */
} Punch_82406510;

extern char lbl_821B7DB4[];
extern char lbl_821B7DE8[];
extern WeakPtr_82406510 *fn_824060E8(WeakPtr_82406510 *self, WeakPtr_82406510 *other);
extern void fn_82230110(String_82406510 *self, const char *text);

static __forceinline void DecWeak_82406510(Rep_82406510 *rep)
{
    if (_InterlockedDecrement(&rep->weaks) == 0) {
        rep->vtbl->deleteThis(rep);
    }
}

static __forceinline void WeakRelease_82406510(WeakPtr_82406510 *weak)
{
    if (weak->rep != 0) {
        DecWeak_82406510(weak->rep);
    }
}

/*
 * Constructor of a punch object: the base part (vtable lbl_821B7DB4) keeps a weak_ptr copy, kind 2
 * and a name; the derived part (vtable lbl_821B7DE8) adds the high flag and two vectors. The
 * weak_ptr is a by-value parameter in the original (the callee releases it), passed as a pointer.
 */
Punch_82406510 *fn_82406510(Punch_82406510 *self, WeakPtr_82406510 *owner, int high, __vector4 start,
                            __vector4 end)
{
    const char *name;
    WeakPtr_82406510 copy;
    WeakPtr_82406510 *base;
    if (high != 0) {
        name = "Punch High";
    } else {
        name = "Punch Low";
    }
    base = fn_824060E8(&copy, owner);
    self->vtbl = lbl_821B7DB4;
    fn_824060E8(&self->owner, base);
    self->kind = 2;
    fn_82230110(&self->name, name);
    WeakRelease_82406510(base);
    self->high = high;
    self->vtbl = lbl_821B7DE8;
    self->start = start;
    self->end = end;
    WeakRelease_82406510(owner);
    return self;
}
