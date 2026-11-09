extern long _InterlockedExchange(long *, long);

typedef struct Obj_827D9EB0 {
    int pad[12];
    long value;
} Obj_827D9EB0;

void fn_827D9EB0(Obj_827D9EB0 *p, long value)
{
    _InterlockedExchange(&p->value, value);
}
