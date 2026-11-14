typedef struct Target_82591730 {
    char pad0[0x190];
    unsigned int value;
    float scale;
    char pad198[0x1a9 - 0x198];
    unsigned char enabled[1];
} Target_82591730;

typedef struct Owner_82591730 {
    int x0;
    Target_82591730 *target;
} Owner_82591730;

int fn_82591730(Owner_82591730 *self, unsigned int prop, unsigned int value)
{
    switch (prop) {
    case 0:
        if (self->target != 0) {
            self->target->value = value;
            return 1;
        }
        break;
    case 0x14:
        if (self->target != 0) {
            self->target->enabled[value] = 0;
        }
        break;
    case 1:
        if (self->target != 0) {
            self->target->scale = *(float *)&value;
        }
        /* fall through */
    case 0x13:
        if (self->target != 0) {
            self->target->enabled[value] = 1;
        }
        break;
    }
    return 0;
}
