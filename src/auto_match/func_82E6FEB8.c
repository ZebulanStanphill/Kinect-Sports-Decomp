extern void fn_82E6FAE0(void *self, void *a, int b, char *c, char *d, int e, int f, int g, int h);
extern char lbl_8202E618[];
extern char lbl_82154AD8[];
extern char lbl_8215EE70[];

typedef struct Obj_82E6FEB8 {
    char *vt;
    int pad[0x19];
    int f68;
} Obj_82E6FEB8;

Obj_82E6FEB8 *fn_82E6FEB8(Obj_82E6FEB8 *self, void *a, int b, int e, int f, int g, int h)
{
    fn_82E6FAE0(self, a, b, lbl_8202E618, lbl_82154AD8, e, f, g, h);
    self->f68 = 0;
    self->vt = lbl_8215EE70;
    return self;
}
