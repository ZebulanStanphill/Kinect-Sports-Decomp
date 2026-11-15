typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Target_8245FE80 {
    char pad0[0x10];    /* 0x0 */
    __vector4 position; /* 0x10 */
    float value;        /* 0x20 */
    char pad24[0xc];    /* 0x24 */
    int state;          /* 0x30 */
} Target_8245FE80;

typedef struct Entry_8245FE80 {
    char pad0[0x10];         /* 0x0 */
    __vector4 position;      /* 0x10 */
    char pad20[0x14];        /* 0x20 */
    Target_8245FE80 *target; /* 0x34 */
    char pad38[8];           /* 0x38 */
} Entry_8245FE80;

extern int lbl_831D1298[];
extern void fn_82514888(void *values);

void fn_8245FE80(char *self)
{
    Target_8245FE80 **slot;
    int count;
    int values[3];
    lbl_831D1298[32] = 3;
    slot = (Target_8245FE80 **)(*(char **)(self + 0x50) + 0x34);
    count = 2;
    do {
        Target_8245FE80 *target = *slot;
        if (target != 0) {
            __vector4 position = *(__vector4 *)((char *)slot - 0x24);
            target->state = 0;
            target->value = 0.0f;
            target->position = position;
        }
        slot = (Target_8245FE80 **)((char *)slot + 0x40);
    } while (--count != 0);
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
    fn_82514888(values);
}
