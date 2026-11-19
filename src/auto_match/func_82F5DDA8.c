typedef struct Settings_82F5DDA8 {
    int enabled;        /* 0x00 */
    float strength;     /* 0x04 */
    float direction[3]; /* 0x08 */
    int mode;           /* 0x14 */
    float range;        /* 0x18 */
    float minimum[2];   /* 0x1c */
    float maximum[2];   /* 0x24 */
} Settings_82F5DDA8;

typedef struct Obj_82F5DDA8 {
    char pad0[0x114];
    int state; /* 0x114 */
    int delay; /* 0x118 */
    char pad11c[0x13c - 0x11c];
    unsigned int x; /* 0x13c */
    unsigned int y; /* 0x140 */
    unsigned int z; /* 0x144 */
} Obj_82F5DDA8;

extern void fn_82F5E4D8(int *status);
extern void fn_82F5DD50(Obj_82F5DDA8 *self);
extern Settings_82F5DDA8 fn_82F5D418(float x, float y, float z, Obj_82F5DDA8 *self);
extern void fn_82F5DEE0(int *status, Settings_82F5DDA8 *settings);

void fn_82F5DDA8(Obj_82F5DDA8 *self, int *status)
{
    Settings_82F5DDA8 settings;

    if (self->delay > 0) {
        self->delay--;
    } else {
        switch (self->state) {
        case 1:
            fn_82F5E4D8(status);
            if (*status == 0) {
                self->delay = 10;
                self->state = 2;
            }
            break;
        case 2:
            fn_82F5DD50(self);
            settings = fn_82F5D418((float)self->x, (float)self->y, (float)self->z, self);
            fn_82F5DEE0(status, &settings);
            self->state = 3;
            break;
        case 3:
            fn_82F5E4D8(status);
            if (*status == 0) {
                self->state = 0;
            }
            break;
        }
    }
}
