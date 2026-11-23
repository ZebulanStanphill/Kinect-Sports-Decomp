typedef struct Target_822EBBD8 Target_822EBBD8;

typedef struct TargetVtable_822EBBD8 {
    void *pad0[13];
    int (*current)(Target_822EBBD8 *);
    void *pad38;
    unsigned int (*count)(Target_822EBBD8 *);
} TargetVtable_822EBBD8;

struct Target_822EBBD8 {
    TargetVtable_822EBBD8 *vtable;
};

typedef struct Context_822EBBD8 {
    char pad0[0x178];
    int mode;
    char pad17c[0x164];
    Target_822EBBD8 *target;
} Context_822EBBD8;

typedef struct Entry_822EBBD8 {
    char pad0[0x2c];
    int id;
} Entry_822EBBD8;

typedef struct State_822EBBD8 {
    char pad0[12];
    Entry_822EBBD8 *entry;
    Context_822EBBD8 *context;
} State_822EBBD8;

typedef struct Settings_822EBBD8 {
    int pad0;
    float minimum;
    float chance;
    int padc;
    int skipCurrent;
} Settings_822EBBD8;

extern Settings_822EBBD8 lbl_831CD138;
extern unsigned int lbl_83265A28;
extern const float lbl_821CA45C[2];

int fn_822EBBD8(State_822EBBD8 *self)
{
    Context_822EBBD8 *context = self->context;
    int mode = context->mode;
    Target_822EBBD8 *target;
    int id;
    unsigned int count;
    float chance;

    union {
        unsigned int bits;
        float value;
    } sample;

    if (mode == 2 || mode == 1) {
        return 1;
    }
    if (lbl_831CD138.skipCurrent != 0) {
        target = context->target;
        id = self->entry->id;
        if (target->vtable->current(target) == id) {
            return 0;
        }
    }
    target = self->context->target;
    count = target->vtable->count(target);
    if (!((float)count <= lbl_831CD138.minimum)) {
    } else {
        return 0;
    }
    chance = lbl_831CD138.chance;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    sample.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    if (sample.value - lbl_821CA45C[1] >= chance) {
        return 0;
    }
    return 1;
}
