typedef struct Entry_82829A80 {
    char pad0[0x24];
    char data[4]; /* 0x24 */
} Entry_82829A80;

typedef struct Obj_82829A80 {
    char pad0[0x10];
    unsigned int nameId; /* 0x10 */
    int m14;             /* 0x14 */
    char pad18[0x10];
    unsigned char isNew; /* 0x28 */
    char pad29[3];
    int m2c; /* 0x2c */
    char pad30[4];
    unsigned char m34; /* 0x34 */
    char pad35[3];
    int m38;           /* 0x38 */
    void *tree;        /* 0x3c */
    char *entryData;   /* 0x40 */
    int m44;           /* 0x44 */
    int *list;         /* 0x48 */
    int m4c;           /* 0x4c */
    int m50;           /* 0x50 */
    unsigned char m54; /* 0x54 */
} Obj_82829A80;

extern void *fn_828252D0(unsigned int size);
extern unsigned int fn_82828720(void *ctx, const char *name);
extern void fn_828277F8(Obj_82829A80 *obj, void *ctx);
extern unsigned char fn_828281C8(void *ctx, const char *type, Entry_82829A80 **out);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82828B78(void *self, const void *comp, const void *alloc);

void fn_82829A80(void *ctx, const char *name, const char *type, Obj_82829A80 **out, int arg)
{
    Obj_82829A80 *obj;
    char unused;
    void *mem;
    void *tree;
    int *list;
    Entry_82829A80 *entry;

    obj = (Obj_82829A80 *)fn_828252D0(0x58);
    obj->nameId = fn_82828720(ctx, name);
    fn_828277F8(obj, ctx);
    obj->isNew = fn_828281C8(ctx, type, &entry);
    obj->entryData = entry->data;
    obj->m2c = arg;
    obj->m14 = 0;
    obj->m34 = 0;
    obj->m38 = 0;
    mem = fn_8265C9E0(0x10);
    if (mem != 0) {
        fn_82828B78(mem, &unused, &unused);
        tree = mem;
    } else {
        tree = 0;
    }
    obj->tree = tree;
    obj->m44 = 0;
    mem = fn_8265C9E0(0x10);
    if (mem != 0) {
        ((int *)mem)[0] = 0;
        ((int *)mem)[1] = 0;
        ((int *)mem)[2] = 0;
        list = (int *)mem;
    } else {
        list = 0;
    }
    obj->list = list;
    obj->m4c = 0;
    obj->m50 = 0;
    obj->m54 = 0;
    *out = obj;
}
