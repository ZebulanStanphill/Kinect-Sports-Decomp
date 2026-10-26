typedef struct Obj Obj;
typedef struct { void (*f[3])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_82281ED8(char *p)
{
    if (*(Obj **)(p + 0x40))
        (*(Obj **)(p + 0x40))->vt->f[2](*(Obj **)(p + 0x40));
}
