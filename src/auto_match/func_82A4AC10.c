typedef struct Obj Obj;
typedef struct { void (*f[2])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_82A4AC10(char *p)
{
    if (*(Obj **)(p + 0x44))
        (*(Obj **)(p + 0x44))->vt->f[1](*(Obj **)(p + 0x44));
}
