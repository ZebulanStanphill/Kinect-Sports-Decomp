extern long _InterlockedExchangeAdd(long *, long);
typedef struct { int f0; long refs; } Obj_83140010;
extern unsigned int lbl_831F1398;
extern void fn_8267BE38(void *p);

void fn_83140010(void)
{
    Obj_83140010 *o = (Obj_83140010 *)(lbl_831F1398 & ~3);
    if (_InterlockedExchangeAdd(&o->refs, -1) - 1 == 0) {
        fn_8267BE38(o);
    }
}
