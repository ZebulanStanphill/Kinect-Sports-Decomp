typedef struct Def_827F6790 {
    int f0;
    int width;              /* 0x04 */
    int height;             /* 0x08 */
} Def_827F6790;

typedef struct Obj_827F6790 {
    void *vt;               /* 0x000 */
    char pad4[0x1c];
    Def_827F6790 *def;      /* 0x020 */
    char pad24[0x120];
    char sub[0x94];         /* 0x144 */
    int f1d8;               /* 0x1d8 */
} Obj_827F6790;

extern char lbl_8201DDE0[];
extern void fn_827F4248(Obj_827F6790 *self, void *sub, const char *name, int a, int b);
extern void fn_827F4100(void *sub, void *source);
extern void fn_827F6538(Obj_827F6790 *self, int width, int height, float x, float y, int flags);

Obj_827F6790 *fn_827F6790(Obj_827F6790 *self, Def_827F6790 *def, void *source, const char *name, float x, float y,
                          int flags)
{
    fn_827F4248(self, self->sub, name, 0, 0);
    self->def = def;
    self->vt = lbl_8201DDE0;
    fn_827F4100(self->sub, source);
    self->f1d8 = 0;
    fn_827F6538(self, def->width, def->height, x, y, flags);
    return self;
}
