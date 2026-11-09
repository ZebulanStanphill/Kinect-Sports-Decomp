extern long _InterlockedExchange(long *, long);

typedef struct Obj_827D9D78 {
    int pad[5];
    long value;
} Obj_827D9D78;

void fn_827D9D78(Obj_827D9D78 *p, long value)
{
    _InterlockedExchange(&p->value, value);
}
