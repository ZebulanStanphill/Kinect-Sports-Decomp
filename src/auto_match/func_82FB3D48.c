struct Node_82FB3D48;
typedef struct NodeVT_82FB3D48 { void *f0; void (*f4)(struct Node_82FB3D48 *, int); } NodeVT_82FB3D48;
typedef struct Node_82FB3D48 { NodeVT_82FB3D48 *vt; struct Node_82FB3D48 *next; } Node_82FB3D48;
typedef struct Info_82FB3D48 { char pad[0x10]; char f10[0x18]; int f28; } Info_82FB3D48;
typedef struct Obj_82FB3D48 {
    char pad[0x28];
    Node_82FB3D48 *head;
    int cnt;
    char pad2c[8];
    Info_82FB3D48 *info;
    char pad3c[4];
    char f40[0x10];
} Obj_82FB3D48;
extern void fn_82FA9208(Obj_82FB3D48 *o);
extern void fn_82FAD148(void *p);
extern unsigned int fn_82FB3AE8(Obj_82FB3D48 *o, int a, void *b, unsigned int c, void *d);

unsigned int fn_82FB3D48(Obj_82FB3D48 *o, unsigned int arg)
{
    Node_82FB3D48 *n, *next;
    unsigned int r;
    char tmp[16];
    o->cnt++;
    for (next = o->head; next != 0; ) { n = next; next = n->next; n->vt->f4(n, 0); }

    fn_82FAD148(o->f40);
    r = fn_82FB3AE8(o, o->info->f28, o->info->f10, arg, tmp);
    fn_82FA9208(o);
    return r;
}
