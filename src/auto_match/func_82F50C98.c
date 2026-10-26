typedef struct Obj Obj;
typedef struct { void (*f[3])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_82F50C98(char *p)
{
    if (*(Obj **)(p + 0x28))
        (*(Obj **)(p + 0x28))->vt->f[2](*(Obj **)(p + 0x28));
}
