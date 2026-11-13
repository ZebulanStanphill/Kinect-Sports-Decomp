extern long _InterlockedExchangeAdd(long *, long);

typedef struct Obj_8267C4C8 {
    int pad[1];
    long value;
} Obj_8267C4C8;

void fn_8267C4C8(Obj_8267C4C8 *p)
{
    _InterlockedExchangeAdd(&p->value, 1);
}
