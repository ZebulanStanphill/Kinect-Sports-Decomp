extern long _InterlockedExchange(long *, long);

typedef struct Obj_827D9DA0 {
    int pad[3];
    long value;
} Obj_827D9DA0;

void fn_827D9DA0(Obj_827D9DA0 *p, long value)
{
    _InterlockedExchange(&p->value, value);
}
