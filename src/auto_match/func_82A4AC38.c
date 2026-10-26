typedef struct Obj Obj;
typedef struct { void (*f[4])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_82A4AC38(char *p)
{
    if (*(Obj **)(p + 0x44))
        (*(Obj **)(p + 0x44))->vt->f[3](*(Obj **)(p + 0x44));
}
