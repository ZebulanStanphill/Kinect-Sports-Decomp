typedef struct Obj Obj;
typedef struct { void (*f[1])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_82A4ABE8(char *p)
{
    if (*(Obj **)(p + 0x44))
        (*(Obj **)(p + 0x44))->vt->f[0](*(Obj **)(p + 0x44));
}
