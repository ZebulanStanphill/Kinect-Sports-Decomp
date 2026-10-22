typedef struct VObj VObj;
typedef struct {
    int pad[8];
    int (*get_type)(VObj *o);
} VTbl;
struct VObj { VTbl *vt; };

typedef struct {
    char pad0[0x8c];
    int f8c;
    int f90;
    int refcount;
    int pad98;
    char closing;
    char pad9d[7];
    int fa4;
} Owner;

typedef struct {
    int pad0[2];
    Owner *owner;
    int padc;
    int f10;
} Node;

typedef struct {
    int pad0[3];
    VObj *obj;
    int pad10;
    Node *a;
    Node *b;
} Arg;

extern unsigned int fn_82D7C120(void *a, void *b);
extern void fn_82D80C18(Owner *o);
extern void fn_82D80C30(Owner *o);
extern void fn_82DB06D0(void);
extern int fn_82DC9C20(char *self, Node *a, Node *b);
static unsigned int eq(Node *a, Node *b) { return fn_82D7C120(&a->f10, &b->f10); }

void fn_82DC3328(char *self, Arg *arg)
{
    Node *a;
    Owner *o;

    if (arg != 0 && (*arg->obj->vt->get_type)(arg->obj) != 0xb) {
        a = arg->a;
        if (a->f10 != 0 && arg->b->f10 != 0 &&
            fn_82DC9C20(self - 0x40, a, arg->b) == 1 &&
            eq(arg->a, arg->b) != 0) {
            o = a->owner;
            if (o != 0) {
                o->refcount++;
                fn_82DB06D0();
                if (--o->refcount == 0 && o->closing == 0) {
                    if (o->f8c != 0) {
                        fn_82D80C18(o);
                    }
                    if (o->fa4 == 1 && o->f90 != 0) {
                        fn_82D80C30(o);
                    }
                }
            }
        }
    }
}
