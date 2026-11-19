typedef struct Target_824FD748 {
    char pad0[0x18];
    float a0; /* 0x18 */
    float a1; /* 0x1c */
    int pad20;
    float b0; /* 0x24 */
    float b1; /* 0x28 */
    int pad2c;
    float c0; /* 0x30 */
    float c1; /* 0x34 */
    int pad38;
    float d0; /* 0x3c */
    float d1; /* 0x40 */
    int pad44;
    float e0; /* 0x48 */
    float e1; /* 0x4c */
    int pad50;
    float f0; /* 0x54 */
    float f1; /* 0x58 */
} Target_824FD748;

typedef struct Message_824FD748 {
    int type; /* 0x00 */
    int pad4;
    int arg0; /* 0x08 */
    int arg1; /* 0x0c */
} Message_824FD748;

typedef struct Object_824FD748 {
    char pad0[0xb80];
    void *animation;         /* 0xb80 */
    Target_824FD748 *target; /* 0xb84 */
} Object_824FD748;

extern void fn_824FD870(Object_824FD748 *self);
extern void fn_824FDB18(Object_824FD748 *self, int arg0, int arg1);
extern float *fn_8251F720(void *key, int flags);
extern void fn_8251FA58(void);
extern void fn_825925D8(Object_824FD748 *self, Message_824FD748 *message);
extern void fn_827F62A8(void *animation, float time, unsigned char flag);

void fn_824FD748(Object_824FD748 *self, Message_824FD748 *message)
{
    float *values;
    Target_824FD748 *target;

    switch (message->type) {
    case 0xd:
        fn_824FD870(self);
        fn_824FDB18(self, message->arg0, message->arg1);
        break;
    case 0x10:
        values = fn_8251F720(&message->arg0, 0);
        if (values != 0) {
            target = self->target;
            target->a0 = values[0];
            target->a1 = values[1];
            target->b0 = values[2];
            target->b1 = values[3];
            target->c0 = values[4];
            target->c1 = values[5];
            target->d0 = values[6];
            target->d1 = values[7];
            target->e0 = values[8];
            target->e1 = values[9];
            target->f0 = values[10];
            target->f1 = values[11];
            fn_8251FA58();
        }
        break;
    case 0x45:
        fn_824FD870(self);
        break;
    case 0x49:
        if (self->animation != 0) {
            fn_827F62A8(self->animation, *(float *)&message->arg0, 0);
        }
        break;
    }
    fn_825925D8(self, message);
}
