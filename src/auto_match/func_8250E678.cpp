extern "C" long _InterlockedIncrement(long volatile *);
extern "C" long _InterlockedDecrement(long volatile *);

typedef struct Rep_8250E678 Rep_8250E678;
typedef struct RepVt_8250E678 {
    void (*destroy)(Rep_8250E678 *);
    void (*deleteThis)(Rep_8250E678 *);
} RepVt_8250E678;
struct Rep_8250E678 {
    RepVt_8250E678 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_8250E678 {
    void *ptr;
    Rep_8250E678 *rep;
} WeakPtr_8250E678;

typedef struct Obj_8250E678 {
    char pad0[0x5d8];
    WeakPtr_8250E678 self;         /* 0x5d8 */
    char pad5e0[8];
} Obj_8250E678;

typedef struct Self_8250E678 Self_8250E678;

typedef struct Bind_8250E678 {
    void (*fn)(Self_8250E678 *);
    Self_8250E678 *self;
    int extra;
} Bind_8250E678;

struct Function_8250E678;
extern "C" void fn_82359C18(Function_8250E678 *f);
extern "C" const char lbl_821C23EC[];
struct Function_8250E678 {
    const void *manager;
    Bind_8250E678 bound;
    Function_8250E678 *impl;
    __forceinline Function_8250E678(Bind_8250E678 b) : manager(lbl_821C23EC), bound(b), impl(this) {}
    __forceinline ~Function_8250E678() { fn_82359C18(this); }
};

struct Self_8250E678 {
    char pad0[0x10];
    int owner;                     /* 0x10 */
    Obj_8250E678 *obj;             /* 0x14 */
    WeakPtr_8250E678 weak;         /* 0x18 */
    char pad20[0x14];
    int a;                         /* 0x34 */
    int b;                         /* 0x38 */
};

extern "C" void fn_8250EFB0(Self_8250E678 *self);
extern "C" void *fn_827F04B0(unsigned int size);
extern "C" Obj_8250E678 *fn_8250E2F8(void *mem, int owner, int a, int b, const Function_8250E678 &callback);

static __forceinline Bind_8250E678 Bind(void (*fn)(Self_8250E678 *), Self_8250E678 *self)
{
    Bind_8250E678 b;
    b.fn = fn;
    b.self = self;
    return b;
}

static __forceinline void Decwref_8250E678(Rep_8250E678 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

extern "C" void fn_8250E678(Self_8250E678 *self)
{
    void *mem = fn_827F04B0(sizeof(Obj_8250E678));
    self->obj = mem ? fn_8250E2F8(mem, self->owner, self->a, self->b, Function_8250E678(Bind(fn_8250EFB0, self))) : 0;
    {
        WeakPtr_8250E678 *w = &self->weak;
        Rep_8250E678 *rep = self->obj->self.rep;
        void *ptr = self->obj->self.ptr;
        if (rep != 0)
            _InterlockedIncrement(&rep->weaks);
        if (w->rep != 0)
            Decwref_8250E678(w->rep);
        w->rep = rep;
        w->ptr = ptr;
    }
}
