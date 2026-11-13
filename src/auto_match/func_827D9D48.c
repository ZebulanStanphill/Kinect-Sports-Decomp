extern long _InterlockedExchange(long *, long);

typedef struct Obj_827D9D48 {
    int pad[4];
    long value;
} Obj_827D9D48;

void fn_827D9D48(Obj_827D9D48 *p)
{
    _InterlockedExchange(&p->value, 1);
}
