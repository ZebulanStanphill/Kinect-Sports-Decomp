typedef struct Target_82404638 Target_82404638;

typedef struct TargetVtbl_82404638 {
    void *slot0;
    void (*setValue)(Target_82404638 *self, float value); /* 0x4 */
} TargetVtbl_82404638;

struct Target_82404638 {
    TargetVtbl_82404638 *vt;
};

typedef struct Owner_82404638 {
    char pad0[0x38];
    int handle; /* 0x38 */
} Owner_82404638;

typedef struct Holder_82404638 {
    char pad0[0x10];
    Target_82404638 *target; /* 0x10 */
} Holder_82404638;

typedef struct Self_82404638 {
    char pad0[0x34];
    Owner_82404638 *owner; /* 0x34 */
    char pad38[0x88 - 0x38];
    Holder_82404638 holder; /* 0x88 */
} Self_82404638;

extern int fn_82897BD0(int handle);
extern int fn_8287FD98(void);
extern float fn_8287D518(int a, int b);
extern void fn_82F63108(void);

void fn_82404638(Self_82404638 *self, float time)
{
    int item;
    float remaining;
    Holder_82404638 *holder;

    if (self->holder.target != 0) {
        item = fn_82897BD0(self->owner->handle);
        remaining = time - (fn_8287D518(fn_8287FD98(), item) / 2.0f) * 0.001f;
        holder = &self->holder;
        if (holder->target == 0) {
            fn_82F63108();
        }
        holder->target->vt->setValue(holder->target, -remaining >= 0.0f ? 0.0f : remaining);
    }
}
