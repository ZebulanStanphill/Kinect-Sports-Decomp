typedef struct Obj Obj;
typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    int (*Make)(Obj *, int);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

typedef struct { int f0; char *base; Obj *obj; int a; int b; int c; } Self;
typedef struct { int *key; int val; } Arg;

extern void fn_82E129F0(int, int, int, int);
extern char *fn_82CEB1B8(void *, int);
extern int fn_82CEA280(void *, int, int);

void fn_82E0A300(Self *self, Arg *arg)
{
    char buf[16];
    int key = *arg->key;
    fn_82E129F0(arg->val, self->a, self->b, self->c);
    if (*fn_82CEB1B8(buf, arg->val) != 0) {
        int r = fn_82CEA280(self->base + 0x28, key, 0);
        arg->val = self->obj->vt->Make(self->obj, r);
        fn_82E129F0(arg->val, self->a, self->b, self->c);
    }
}
