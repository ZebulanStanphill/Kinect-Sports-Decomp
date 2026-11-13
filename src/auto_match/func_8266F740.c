extern long _InterlockedExchange(long *, long);

typedef struct Obj_8266F740 {
    int pad[65];
    long value;
} Obj_8266F740;

void fn_8266F740(Obj_8266F740 *p)
{
    _InterlockedExchange(&p->value, 0);
}
