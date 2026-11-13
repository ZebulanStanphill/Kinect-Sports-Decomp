typedef struct Info_82E0A1C0 {
    char pad00[0x20];
    int width;      /* 0x20 */
    int height;     /* 0x24 */
} Info_82E0A1C0;

typedef struct Obj_82E0A1C0 Obj_82E0A1C0;
typedef struct ObjVt_82E0A1C0 {
    void *slots[15];
    int (*apply)(Obj_82E0A1C0 *self, int a, int b); /* 0x3c */
} ObjVt_82E0A1C0;

struct Obj_82E0A1C0 {
    ObjVt_82E0A1C0 *vt;
    char pad04[0x18];
    Info_82E0A1C0 *info;    /* 0x1c */
    char pad20[0x58];
    void *override;         /* 0x78 */
};

extern int fn_82E16E28(void *p);

int fn_82E0A1C0(Obj_82E0A1C0 *self)
{
    Info_82E0A1C0 *info;
    int a;
    int b;

    if (self->override != 0) {
        return fn_82E16E28(self->override);
    }
    info = self->info;
    a = info->width;
    b = info->height;
    if (a >= 0 && b >= 0) {
        return self->vt->apply(self, a, b);
    }
    return 0;
}
