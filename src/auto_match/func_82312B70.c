typedef struct Obj Obj;
typedef struct ObjVt {
    void *s[7];
    void (*f1c)(Obj *o);
} ObjVt;
struct Obj {
    ObjVt *vt;
    int x4;
    int x8;
    char *owner;
    char *data;
};

extern void *fn_822C5B18(void *buf, char *src);
extern void fn_823000E0(int h, void *v);

void fn_82312B70(Obj *o)
{
    char buf[24];
    char *owner = o->owner;
    char *data = o->data;
    *(int *)(*(int *)(owner + 0x1e8) + 0x578) = 0x800;
    fn_823000E0(*(int *)(owner + 0x1e8), fn_822C5B18(buf, data + 0x978));
    o->vt->f1c(o);
}
