long _InterlockedDecrement(long volatile *);
typedef struct Obj_82A5D500 {
    unsigned char state;
    char pad[0xf];
    long refs;
} Obj_82A5D500;
extern void fn_82A4F4E0(Obj_82A5D500 *o);
static __forceinline void Decref_82A5D500(Obj_82A5D500 *o)
{
    if ((unsigned long)_InterlockedDecrement(&o->refs) == 0) {
        o->state = 0xf;
        fn_82A4F4E0(o);
    }
}
static __forceinline void Release_82A5D500(Obj_82A5D500 **pp)
{
    if (*pp != 0 && *pp != (Obj_82A5D500 *)-1) {
        Decref_82A5D500(*pp);
        *pp = 0;
    }
}
void fn_82A5D500(Obj_82A5D500 **pp)
{
    Release_82A5D500(pp);
}
