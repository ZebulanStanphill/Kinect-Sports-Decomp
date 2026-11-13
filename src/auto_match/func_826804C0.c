/* Releases a tagged reference (low two bits are flags): decrements the count at +4 and frees the object
   (fn_8267BE38) when it reaches zero. */
extern long _InterlockedExchangeAdd(long *, long);
typedef struct { int f0; long refs; } Obj_826804C0;
extern void fn_8267BE38(void *p);

void fn_826804C0(unsigned int *ref)
{
    Obj_826804C0 *o = (Obj_826804C0 *)(*ref & ~3);
    if (_InterlockedExchangeAdd(&o->refs, -1) - 1 == 0) {
        fn_8267BE38(o);
    }
}
