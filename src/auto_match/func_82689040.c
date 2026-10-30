typedef unsigned char (*Fn)(int self, int a, int b);

typedef struct Obj {
    int pad0;
    int iface;
    int arg;
    int data;
} Obj;

unsigned char fn_82689040(Obj *o)
{
    int p = o->iface;
    if (p != 0 && o->data != 0 &&
        (*(Fn *)(*(int *)p + 8))(p, o->data + 8, o->arg)) {
        return 1;
    }
    return 0;
}
