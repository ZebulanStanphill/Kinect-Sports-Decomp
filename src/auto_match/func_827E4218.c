typedef struct Node_827E4218 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    void *data;
} Node_827E4218;

struct Obj_827E4218;

typedef struct ObjVt_827E4218 {
    void *slots[14];
    unsigned int (*getSize)(struct Obj_827E4218 *self);
} ObjVt_827E4218;

typedef struct Obj_827E4218 {
    ObjVt_827E4218 *vt;
    void *owner;
} Obj_827E4218;

struct Alloc_827E4218;

typedef struct AllocVt_827E4218 {
    void *slots[3];
    Node_827E4218 *(*alloc)(struct Alloc_827E4218 *self, unsigned int size, void *info);
} AllocVt_827E4218;

typedef struct Alloc_827E4218 {
    AllocVt_827E4218 *vt;
} Alloc_827E4218;

extern void fn_82811438(void *dst, void *src, int size);
extern void fn_827E3D48(void *owner, Node_827E4218 **out);
extern void *memset(void *dst, int c, unsigned int n);
extern Alloc_827E4218 *lbl_83156AA0;

int fn_827E4218(Obj_827E4218 *obj, Node_827E4218 **out)
{
    unsigned int zero[4];
    unsigned char info[32];
    Node_827E4218 *mem;
    Node_827E4218 *n;

    zero[0] = 0;
    fn_82811438(info, zero, 0x10);
    mem = lbl_83156AA0->vt->alloc(lbl_83156AA0, obj->vt->getSize(obj) + 0x28, info);
    if (mem != 0) {
        mem->f4 = 0;
        mem->f8 = 0;
        n = mem;
    } else {
        n = 0;
    }
    *out = n;
    n->data = (char *)n + 0x28;
    memset((*out)->data, 0, obj->vt->getSize(obj));
    fn_827E3D48(obj->owner, out);
    return 0;
}
