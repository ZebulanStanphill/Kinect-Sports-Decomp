typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_825C0078 Obj_825C0078;

typedef struct Contact_825C0078 {
    char pad0[0x24];
    int handle; /* 0x24 */
    char pad28[0x40 - 0x28];
} Contact_825C0078;

typedef struct Target_825C0078 {
    Contact_825C0078 *contacts; /* 0x00 */
    char pad4[0x2c - 0x4];
    int contactCount; /* 0x2c */
    char pad30[0x50 - 0x30];
    int busy; /* 0x50 */
} Target_825C0078;

typedef struct Record_825C0078 {
    __vector4 position; /* 0x00 */
    char pad10[0xac - 0x10];
    int arg; /* 0xac */
} Record_825C0078;

typedef struct Pool_825C0078 {
    char *records;             /* 0x00 */
    int pad4;                  /* 0x04 */
    int pad8;                  /* 0x08 */
    unsigned short recordSize; /* 0x0c */
    char padE[0x14 - 0xe];
    char *elements; /* 0x14 */
    char pad18[0x20 - 0x18];
    unsigned short elementSize; /* 0x20 */
} Pool_825C0078;

typedef struct Element_825C0078 {
    unsigned int flags;   /* 0x00 */
    float strength;       /* 0x04 */
    Obj_825C0078 *source; /* 0x08 */
} Element_825C0078;

typedef struct Tuning_825C0078 {
    char pad0[0x14];
    int ignoreOwn;     /* 0x14 */
    int checkContacts; /* 0x18 */
    char pad1C[0x8c - 0x1c];
    float minimumA; /* 0x8c */
    float scaleA;   /* 0x90 */
    float scaleB;   /* 0x94 */
    float scaleC;   /* 0x98 */
} Tuning_825C0078;

extern Tuning_825C0078 lbl_831D4558;

extern int fn_825BFD70(Obj_825C0078 *self, Target_825C0078 *target, int arg, __vector4 value);

int fn_825C0078(Target_825C0078 *self, Pool_825C0078 *pool, Obj_825C0078 *source, Element_825C0078 *element,
                float threshold)
{
    unsigned int flags;
    float strength;
    Record_825C0078 *record;
    int handle;
    int i;

    flags = element->flags;
    if (flags & 2) {
        return 0;
    }
    strength = element->strength;
    if (flags & 8) {
        if (strength < lbl_831D4558.minimumA) {
            return 0;
        }
        strength = lbl_831D4558.scaleA * strength;
    } else if (flags & 0x10) {
        strength = lbl_831D4558.scaleB * strength;
    } else if (flags & 0x10000) {
        strength = lbl_831D4558.scaleC * strength;
    }
    if (strength < threshold) {
        return 0;
    }
    if (lbl_831D4558.ignoreOwn != 0 && element->source == source) {
        return 0;
    }
    if ((flags & 1) && self->busy != 0) {
        return 0;
    }
    record = (Record_825C0078 *)(pool->records +
                                 ((char *)element - pool->elements) / pool->elementSize * pool->recordSize);
    handle = fn_825BFD70(source, self, record->arg, record->position);
    if (handle <= -1) {
        return 0;
    }
    if (self->contacts == 0) {
        return 0;
    }
    if (lbl_831D4558.checkContacts == 0) {
        return 0;
    }
    for (i = 0; i < self->contactCount; i++) {
        if (self->contacts[i].handle == handle) {
            return 0;
        }
    }
    return 0;
}
