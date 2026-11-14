typedef struct Target_8304E2F8 Target_8304E2F8;
typedef struct TargetVtbl_8304E2F8 {
    void *slots[7];
    int (*start)(Target_8304E2F8 *self);
} TargetVtbl_8304E2F8;
struct Target_8304E2F8 {
    TargetVtbl_8304E2F8 *vt;
};

typedef struct Obj_8304E2F8 {
    char pad0[0x28];
    Target_8304E2F8 *target;    /* 0x28 */
    char pad2c[0x18];
    unsigned int id;            /* 0x44 */
} Obj_8304E2F8;

extern int fn_8304DD90(Obj_8304E2F8 *self, unsigned int *id);
extern int fn_8304DE60(Obj_8304E2F8 *self, unsigned int id);

int fn_8304E2F8(Obj_8304E2F8 *self, int mode, unsigned char query)
{
    if (mode == 1) {
        unsigned int id;
        if (query == 0) {
            id = self->id;
        } else {
            unsigned int found;
            int r = fn_8304DD90(self, &found);
            if (r != 1)
                return r;
            id = found;
        }
        if (fn_8304DE60(self, id) != 1)
            return 2;
    }
    return self->target->vt->start(self->target);
}
