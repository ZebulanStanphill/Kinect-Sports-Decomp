typedef struct Node_82553678 {
    unsigned int flags;     /* low 4 bits: kind */
} Node_82553678;

typedef struct Mgr_82553678 {
    char pad0[0x2ed8];
    Node_82553678 *kind5;           /* 0x2ed8 */
    char pad2edc[0x3144 - 0x2edc];
    Node_82553678 *kind2;           /* 0x3144 */
    Node_82553678 *kind4a;          /* 0x3148 */
    char pad314c[0xc];
    Node_82553678 *kind4b;          /* 0x3158 */
    Node_82553678 *kind1[0x10];     /* 0x315c */
    char pad319c[0x14];
    Node_82553678 *kind3[0x1a];     /* 0x31b0 */
    char pad3218[0x2c];
    Node_82553678 *kind7;           /* 0x3244 */
    Node_82553678 *kind6;           /* 0x3248 */
} Mgr_82553678;

typedef struct Obj_82553678 {
    char pad0[0x14];
    void *handle;                   /* 0x14 */
} Obj_82553678;

typedef struct Self_82553678 {
    char pad0[0x4664];
    Obj_82553678 *obj;              /* 0x4664 */
} Self_82553678;

extern Mgr_82553678 *lbl_8320A898;
extern char lbl_82196288[];

extern void fn_82837D98(void *handle, int flags, Node_82553678 **out);
extern void fn_8263CBB0(void *a, unsigned int b, void *c, unsigned __int64 mask);
extern void fn_8251FA58(void *p);
extern int fn_825200A8(void *a, void *b);
extern Obj_82553678 *fn_8251F720(void *a, int b);

void fn_82553678(Self_82553678 *self, void *id)
{
    Node_82553678 *node;
    Mgr_82553678 *mgr;
    int found;
    int i;

    if (self->obj != 0) {
        fn_82837D98(self->obj->handle, 0, &node);
        found = 0;
        mgr = lbl_8320A898;
        switch (node->flags & 0xf) {
    case 1:
        for (i = 0; i < 0x10; i++) {
            if (mgr->kind1[i] == node)
                found = 1;
        }
        break;
    case 3:
        for (i = 0; i < 0x1a; i++) {
            if (mgr->kind3[i] == node)
                found = 1;
        }
        break;
    case 2:
        if (mgr->kind2 == node)
            found = 1;
        break;
    case 4:
        if (mgr->kind4a == node)
            found = 1;
        if (mgr->kind4b == node)
            found = 1;
        break;
    case 5:
        found = mgr->kind5 == node;
        break;
    case 6:
        found = mgr->kind6 == node;
        break;
    case 7:
        found = mgr->kind7 == node;
        break;
    case 8:
    case 9:
        found = 0;
        break;
        }
        if (found)
            fn_8263CBB0(mgr, 0xf, 0, 0x8000000000000000ULL >> (0xf + 32));
        fn_8251FA58(self->obj);
        self->obj = 0;
    }
    if (fn_825200A8(id, lbl_82196288) == 0)
        self->obj = fn_8251F720(id, 0);
}
