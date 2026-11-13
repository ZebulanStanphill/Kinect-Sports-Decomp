extern long _InterlockedExchange(long *, long);

typedef struct Obj_827D50D0 {
    int pad[5];
    long value;
} Obj_827D50D0;

void fn_827D50D0(Obj_827D50D0 *p)
{
    _InterlockedExchange(&p->value, 1);
}
