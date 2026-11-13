typedef struct Target_8260EFC8 {
    char pad[0x28];
    int flag;       /* 0x28 */
} Target_8260EFC8;
typedef struct Inner_8260EFC8 {
    char pad[0xb8];
    Target_8260EFC8 *target;    /* 0xb8 */
} Inner_8260EFC8;
typedef struct Obj_8260EFC8 {
    char pad[0x60];
    Inner_8260EFC8 **inner;     /* 0x60 */
} Obj_8260EFC8;

void fn_8260EFC8(Obj_8260EFC8 *self, int a1, int a2, int a3, int state)
{
    Target_8260EFC8 *target = (*self->inner)->target;

    if (state == 0) {
        target->flag = 1;
    } else if (state == 1 || state == 3) {
        target->flag = 0;
    }
}
