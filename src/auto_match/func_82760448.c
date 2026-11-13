extern long _InterlockedExchangeAdd(long *, long);

typedef struct Obj_82760448 {
    int pad[5];
    long value;
} Obj_82760448;

void fn_82760448(Obj_82760448 *p)
{
    _InterlockedExchangeAdd(&p->value, 1);
}
