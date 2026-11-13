extern void fn_82E6FAE0(void *self, void *a, int b, char *c, char *d, int e, int f, int g, int h);
extern char lbl_8214C020[];
extern char lbl_82154AE8[];
extern char lbl_8215EEB0[];

typedef struct Obj_82E700E0 {
    char *vt;
    int pad[0x19];
    __int64 f68;
    unsigned char f70;
    short f72;
    int f74;
    __int64 f78;
    unsigned short f80;
} Obj_82E700E0;

Obj_82E700E0 *fn_82E700E0(Obj_82E700E0 *self, void *a, int b, int e, int f, int g, int h)
{
    fn_82E6FAE0(self, a, b, lbl_8214C020, lbl_82154AE8, e, f, g, h);
    self->vt = lbl_8215EEB0;
    self->f68 = -1;
    self->f70 = 0;
    self->f72 = 0;
    self->f78 = 0;
    self->f74 = 0;
    self->f80 = 0xffff;
    return self;
}
