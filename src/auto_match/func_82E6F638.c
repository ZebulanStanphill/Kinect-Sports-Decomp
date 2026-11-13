typedef struct Target_82E6F638 Target_82E6F638;
typedef struct TargetVtbl_82E6F638 {
    void *slots[19];
    int (*SetTime)(Target_82E6F638 *self, unsigned __int64 time);
} TargetVtbl_82E6F638;
struct Target_82E6F638 {
    TargetVtbl_82E6F638 *vt;
};

typedef struct Obj_82E6F638 {
    char pad0[0x58];
    Target_82E6F638 *target;
} Obj_82E6F638;

int fn_82E6F638(Obj_82E6F638 *self, unsigned int ms)
{
    if (self->target == 0) {
        return 0xc00d36bb;
    }
    if (ms == 0) {
        return 0x80070057;
    }
    return self->target->vt->SetTime(self->target, ms * 10000);
}
