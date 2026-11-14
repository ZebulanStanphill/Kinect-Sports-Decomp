typedef struct Object_8269CEE0 {
    void *vt;
    int refs;
} Object_8269CEE0;

typedef struct Proxy_8269CEE0 {
    int refs;
    Object_8269CEE0 *object;
} Proxy_8269CEE0;

typedef struct WeakPtr_8269CEE0 {
    Proxy_8269CEE0 *proxy;
} WeakPtr_8269CEE0;

typedef struct Ptr_8269CEE0 {
    Object_8269CEE0 *p;
} Ptr_8269CEE0;

extern void fn_8267BE38(void *p);

static __forceinline int IsAlive(Proxy_8269CEE0 *p) { return p->object != 0; }
static __forceinline Object_8269CEE0 *GetObj(Proxy_8269CEE0 *p) { return p->object; }
static __forceinline void Release(Proxy_8269CEE0 *p) { if (--p->refs == 0) fn_8267BE38(p); }
Ptr_8269CEE0 *fn_8269CEE0(Ptr_8269CEE0 *result, WeakPtr_8269CEE0 *weak)
{
    Object_8269CEE0 *obj = 0;
    if ((int)weak->proxy != 0) {
        if (IsAlive(weak->proxy)) {
            obj = GetObj(weak->proxy);
        } else {
            Release(weak->proxy);
            weak->proxy = 0;
        }
    }
    if (obj != 0)
        obj->refs++;
    result->p = obj;
    return result;
}
