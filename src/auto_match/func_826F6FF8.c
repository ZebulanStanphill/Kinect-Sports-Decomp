struct Rel_826F6FF8;
typedef struct RelVT_826F6FF8 {
    int pad[2];
    void (*release)(struct Rel_826F6FF8 *, int);
} RelVT_826F6FF8;
typedef struct Rel_826F6FF8 {
    RelVT_826F6FF8 *vt;
} Rel_826F6FF8;
typedef struct Tmp_826F6FF8 {
    Rel_826F6FF8 *obj;
    int x;
} Tmp_826F6FF8;
typedef struct Inner_826F6FF8 {
    char pad[0x14];
    int f14;
} Inner_826F6FF8;
typedef struct Item_826F6FF8 {
    char pad[0x20];
    void *f20;
} Item_826F6FF8;
typedef struct Created_826F6FF8 {
    char pad0[8];
    int f8;
    char pad1[0x3c - 0xc];
    int f3c;
} Created_826F6FF8;
typedef struct Self_826F6FF8 {
    char pad0[0x14];
    int f14;
    char pad1[0x6c - 0x18];
    Inner_826F6FF8 *f6c;
    char pad2[0x100 - 0x70];
    Inner_826F6FF8 *f100;
} Self_826F6FF8;
extern void *fn_8267B890(void *, int, int);
extern void fn_8267C4F0(void *);
extern void fn_82687270(Item_826F6FF8 *);
extern void fn_826D90B0(Tmp_826F6FF8 *, void *, int, int, int, int);
extern int fn_826DC518(void *, Item_826F6FF8 *, int, int, int, int, int, int, int);
extern void fn_826DEB00(void *, int, void *, int);
extern Item_826F6FF8 *fn_826E4198(Tmp_826F6FF8 *, int, void *, int, int, int);
extern void fn_826F3458(Created_826F6FF8 *, Item_826F6FF8 *);
extern Created_826F6FF8 *fn_826F5070(void *, int, void *, int);
extern void *lbl_831E7E64;

int fn_826F6FF8(Self_826F6FF8 *self, void *param_2, int param_3, void *param_4, Created_826F6FF8 *param_5)
{
    int result = 0;
    Created_826F6FF8 *created = 0;
    void *mem;
    Created_826F6FF8 *r;
    Inner_826F6FF8 *sub;
    void *arg;
    Tmp_826F6FF8 tmp;
    Item_826F6FF8 *item;
    int heap;

    if (param_5 == 0) {
        mem = fn_8267B890(lbl_831E7E64, 0x54, 0);
        if (mem != 0) {
            sub = self->f100;
            if (sub != 0)
                arg = (char *)sub + 8;
            else
                arg = 0;
            r = fn_826F5070(mem, self->f6c->f14, arg, 0);
        } else {
            r = 0;
        }
        created = r;
        param_5 = r;
    }
    if (param_2 != 0) {
        fn_826D90B0(&tmp, param_4, 0, 0, 0, 0);
        heap = self->f14;
        item = fn_826E4198(&tmp, 2, param_4, heap, 0, 0);
        if (item == 0) {
            if (tmp.obj != 0)
                tmp.obj->vt->release(tmp.obj, tmp.x);
            if (created != 0)
                fn_8267C4F0(created);
            return 0;
        }
        fn_826DEB00(item->f20, 0, param_2, param_3);
        fn_826F3458(param_5, item);
        mem = fn_8267B890((void *)heap, 0x20, 0);
        if (mem != 0)
            result = fn_826DC518(mem, item, param_5->f8, param_5->f3c, 0, self->f100->f14, heap, 1, 0);
        else
            result = 0;
        fn_82687270(item);
        if (tmp.obj != 0)
            tmp.obj->vt->release(tmp.obj, tmp.x);
    }
    if (created != 0)
        fn_8267C4F0(created);
    return result;
}
