extern long _InterlockedExchange(long *, long);

typedef struct Obj_827D9D20 {
    int pad[2];
    long value;
} Obj_827D9D20;

void fn_827D9D20(Obj_827D9D20 *p, long value)
{
    _InterlockedExchange(&p->value, value);
}
