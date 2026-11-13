extern long _InterlockedDecrement(long *);
extern long _InterlockedExchange(long *, long);

typedef struct Obj_82BD54A0 Obj_82BD54A0;
struct Obj_82BD54A0 {
    void **vt;
    long refs;
};

extern void fn_82BD5328(Obj_82BD54A0 *o);
extern long lbl_83223F40;

unsigned long fn_82BD54A0(Obj_82BD54A0 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0) {
        fn_82BD5328(o);
        _InterlockedExchange(&lbl_83223F40, 0);
    }
    return n;
}
