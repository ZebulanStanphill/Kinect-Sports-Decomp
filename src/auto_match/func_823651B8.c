typedef struct Rep_822315A0 Rep_822315A0;

typedef struct Results_823651B8 {
    char pad[0x1188];
    unsigned short playerName[0x400]; /* 0x1188 */
} Results_823651B8;

/* std::tr1::shared_ptr<Results_823651B8> */
typedef struct SharedPtr_823651B8 {
    Results_823651B8 *ptr; /* 0x0 */
    Rep_822315A0 *rep;     /* 0x4 */
} SharedPtr_823651B8;

/* std::wstring */
typedef struct WString_823651B8 {
    union {
        unsigned short buf[8];
        unsigned short *ptr;
    } bx; /* 0x00 */

    unsigned int size; /* 0x10 */
    unsigned int res;  /* 0x14 */
} WString_823651B8;

typedef struct Ref_823651B8 {
    unsigned int handle;
} Ref_823651B8;

typedef struct Screen_823651B8 {
    char pad[0x40];
    unsigned int state; /* 0x40 */
} Screen_823651B8;

typedef struct Obj_823651B8 {
    char pad0[0x98];
    int arg98;  /* 0x098 */
    int arg9c;  /* 0x09c */
    int screen; /* 0x0a0 */
    char pad_a4[0x7d8 - 0xa4];
    SharedPtr_823651B8 results; /* 0x7d8 */
    char pad_7e0[0xa74 - 0x7e0];
    WString_823651B8 playerName; /* 0xa74 */
} Obj_823651B8;

extern void fn_82520158(const char *name, Ref_823651B8 *out, int flags);
extern SharedPtr_823651B8 *fn_82365C38(SharedPtr_823651B8 *out, Ref_823651B8 *ref, int *a, int *b);
extern void fn_822315A0(Rep_822315A0 *rep);
extern int fn_82F64988(unsigned short *dest, unsigned int size, const unsigned short *src);

static __forceinline SharedPtr_823651B8 *MakeResults(SharedPtr_823651B8 *out, Ref_823651B8 *ref, int a, int b)
{
    return fn_82365C38(out, ref, &a, &b);
}

static int isValid(Ref_823651B8 *r)
{
    return r->handle != 0 ? (r->handle & 0xff000000) < 0x7a000000 : 0;
}

static __forceinline void Release(SharedPtr_823651B8 *p)
{
    if (p->rep != 0) {
        fn_822315A0(p->rep);
    }
}

static __forceinline void SwapRep(Rep_822315A0 **left, Rep_822315A0 **right)
{
    Rep_822315A0 *rep = *left;

    *left = *right;
    *right = rep;
}

static __forceinline void SwapPtr(Results_823651B8 **left, Results_823651B8 **right)
{
    Results_823651B8 *ptr = *left;

    *left = *right;
    *right = ptr;
}

static __forceinline void Swap(SharedPtr_823651B8 *self, SharedPtr_823651B8 *other)
{
    SwapRep(&self->rep, &other->rep);
    SwapPtr(&self->ptr, &other->ptr);
}

static __forceinline void MoveAssign(SharedPtr_823651B8 *self, SharedPtr_823651B8 *other)
{
    SharedPtr_823651B8 tmp;

    tmp.ptr = 0;
    tmp.rep = 0;
    if (&tmp != other) {
        Swap(&tmp, other);
    }
    Swap(&tmp, self);
    Release(&tmp);
}

static __forceinline const unsigned short *CStr(WString_823651B8 *s)
{
    return s->res < 8 ? s->bx.buf : s->bx.ptr;
}

void fn_823651B8(Obj_823651B8 *o)
{
    Ref_823651B8 r;
    SharedPtr_823651B8 made;

    fn_82520158("ui_boxingResultsScreen", &r, 0);
    if (!isValid(&r) || (int)o->results.ptr != 0 ||
        (o->screen != 0 && ((Screen_823651B8 *)o->screen)->state == 1) ||
        (o->screen != 0 && ((Screen_823651B8 *)o->screen)->state == 2)) {
        return;
    }
    MoveAssign(&o->results, MakeResults(&made, &r, o->arg98, o->arg9c));
    Release(&made);
    fn_82F64988(o->results.ptr->playerName, 0x400, CStr(&o->playerName));
}
