typedef struct Str_82701F78 {
    int pad0[2];
    unsigned char *data;
    unsigned int len;
} Str_82701F78;

typedef struct Desc_82701F78 {
    unsigned int type;
    int pad4[3];
    int str;
} Desc_82701F78;

typedef struct Target_82701F78 Target_82701F78;
typedef struct TargetVt_82701F78 {
    void *pad[23];
    char *(*getObj)(Target_82701F78 *self);
} TargetVt_82701F78;
struct Target_82701F78 {
    TargetVt_82701F78 *vt;
};

typedef struct Holder_82701F78 {
    void *first;
    void *second;
    unsigned char flags;
} Holder_82701F78;

extern void *fn_8267B890(void *alloc, int size, int flags);
extern void fn_8267C498(void *p);
extern void fn_826824B0(void *p);
extern void fn_82695750(void *buf, Holder_82701F78 *h);
extern void fn_82696330(void *buf);
extern void fn_826A16E8(Target_82701F78 *t, Desc_82701F78 *d, void *buf);
extern void *fn_826AA930(void *mem, void *ctx, Str_82701F78 *s);
extern void *fn_826C40A8(void *mem, char *obj, void *a, int b, unsigned int len, int c, int mode);

static __forceinline unsigned char Str_IsEmpty_82701F78(Str_82701F78 *s)
{
    if (s->len < 1 || s->data[0] == 0)
        return 1;
    return 0;
}

void fn_82701F78(Desc_82701F78 *param_1, Target_82701F78 *param_2)
{
    char *obj;
    void *alloc;
    void *mem;
    void *a;
    void *p;
    int mode;
    unsigned int type;
    Holder_82701F78 h;
    int buf[4];

    if (param_1->str == 0)
        return;
    if (Str_IsEmpty_82701F78((Str_82701F78 *)param_1->str))
        return;

    obj = param_2->vt->getObj(param_2);
    alloc = *(void **)(*(char **)(obj + 0x78) + 0x288);
    mem = fn_8267B890(alloc, 0x20, 0);
    if (mem != 0)
        a = fn_826AA930(mem, obj + 0x78, (Str_82701F78 *)param_1->str);
    else
        a = 0;

    type = param_1->type;
    if (type == 1 || type == 4 || type == 0x200 || type == 0x40000)
        mode = 4;
    else
        mode = 3;

    mem = fn_8267B890(alloc, 0x68, 0);
    if (mem != 0)
        p = fn_826C40A8(mem, obj, a, 0, ((Str_82701F78 *)param_1->str)->len, 0, mode);
    else
        p = 0;
    h.first = p;
    h.flags = 0;
    h.second = 0;
    fn_82695750(buf, &h);
    if ((h.flags & 2) == 0 && h.first != 0)
        fn_826824B0(h.first);
    h.first = 0;
    if ((h.flags & 1) == 0 && h.second != 0)
        fn_826824B0(h.second);
    h.second = 0;
    fn_826A16E8(param_2, param_1, buf);
    fn_82696330(buf);
    if (a != 0)
        fn_8267C498(a);
}
