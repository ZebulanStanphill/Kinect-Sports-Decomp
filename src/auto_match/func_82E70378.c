extern void fn_82E6FAE0(void *self, void *a, int b, char *c, char *d, int e, int f, int g, int h);
extern char lbl_8214C030[];
extern char lbl_82154AF8[];
extern char lbl_8215EEF0[];

typedef struct Obj_82E70378 {
    char *vt;
    int pad[0x19];
    unsigned __int64 f68;
} Obj_82E70378;

Obj_82E70378 *fn_82E70378(Obj_82E70378 *self, void *a, int b, int e, int f, int g, int h)
{
    fn_82E6FAE0(self, a, b, lbl_8214C030, lbl_82154AF8, e, f, g, h);
    self->f68 = 0;
    self->vt = lbl_8215EEF0;
    return self;
}
