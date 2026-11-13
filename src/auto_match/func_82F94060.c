typedef struct Obj_82F94060 {
    void *vt0;
    void *vt4;
    int f8;
    int pad0c[2];
    unsigned char f14;
    char pad15[3];
    int sink;
} Obj_82F94060;

extern char lbl_8216C0FC[];
extern char lbl_8216C0F0[];
extern void fn_82F96B00(void *base);
extern void fn_82F91510(void *member);

Obj_82F94060 *fn_82F94060(Obj_82F94060 *self)
{
    fn_82F96B00(self);
    fn_82F96B00(&self->vt4);
    self->vt0 = lbl_8216C0FC;
    self->vt4 = lbl_8216C0F0;
    self->f8 = 0;
    self->f14 = 0;
    fn_82F91510(&self->sink);
    return self;
}
