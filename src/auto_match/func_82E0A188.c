typedef struct Info_82E0A188 {
    char pad00[0x20];
    int width;      /* 0x20 */
    int height;     /* 0x24 */
} Info_82E0A188;

typedef struct Obj_82E0A188 Obj_82E0A188;
typedef struct ObjVt_82E0A188 {
    void *slots[15];
    int (*apply)(Obj_82E0A188 *self, int a, int b); /* 0x3c */
} ObjVt_82E0A188;

struct Obj_82E0A188 {
    ObjVt_82E0A188 *vt;
    char pad04[0x18];
    Info_82E0A188 *info;    /* 0x1c */
};

int fn_82E0A188(Obj_82E0A188 *self)
{
    Info_82E0A188 *info = self->info;
    int a = info->width;
    int b = info->height;

    if (a >= 0 && b >= 0) {
        return self->vt->apply(self, a, b);
    }
    return 0;
}
