typedef struct Config_824325E8 {
    char pad00[0x18];
    float width;  /* 0x18 */
    float height; /* 0x1c */
    char pad20[0x68 - 0x20];
    float x; /* 0x68 */
    float y; /* 0x6c */
    float z; /* 0x70 */
    char pad74[0x90 - 0x74];
} Config_824325E8;

typedef struct ConfigTable_824325E8 {
    int pad00[2];
    Config_824325E8 configs[11]; /* 0x08 */
} ConfigTable_824325E8;

typedef struct State_824325E8 {
    char pad00[0x8];
    int mode; /* 0x08 */
    char pad0c[0x14 - 0x0c];
    float timer; /* 0x14 */
    float x;     /* 0x18 */
    char pad1c[0x60 - 0x1c];
    int alternate; /* 0x60 */
    char pad64[0x94 - 0x64];
    int side;                /* 0x94 */
    Config_824325E8 *config; /* 0x98 */
    int dirty;               /* 0x9c */
    int done;                /* 0xa0 */
    int visible;             /* 0xa4 */
} State_824325E8;

typedef struct Target_824325E8 {
    char pad00[0x24];
    float x; /* 0x24 */
    float y; /* 0x28 */
    float z; /* 0x2c */
} Target_824325E8;

typedef struct Node_824325E8 {
    char pad00[0x1c];
    Target_824325E8 *target; /* 0x1c */
} Node_824325E8;

typedef struct Owner_824325E8 {
    char pad00[0x94];
    Node_824325E8 *node; /* 0x94 */
} Owner_824325E8;

typedef struct Camera_824325E8 {
    char pad000[0x240];
    Owner_824325E8 *owner; /* 0x240 */
    State_824325E8 *state; /* 0x244 */
} Camera_824325E8;

extern ConfigTable_824325E8 lbl_831C7AF0;
extern int fn_8242E3E0(Owner_824325E8 *owner);

void fn_824325E8(Camera_824325E8 *self, int side)
{
    State_824325E8 *state;
    Config_824325E8 *config;
    Node_824325E8 *node;
    Target_824325E8 *target;
    float x;
    int found;
    float z;

    if (side >= 0 && side <= 1)
        self->state->side = side;
    self->state->dirty = 1;
    self->state->done = 0;
    self->state->visible = 1;
    self->state->timer = 0.0f;
    if (self->state->side != 0) {
        switch (self->state->mode) {
        case 1:
            self->state->config = &lbl_831C7AF0.configs[1];
            break;
        case 2:
            self->state->config = &lbl_831C7AF0.configs[10];
            break;
        case 3:
            self->state->config = &lbl_831C7AF0.configs[8];
            break;
        case 5:
            self->state->config = &lbl_831C7AF0.configs[4];
            break;
        default:
            self->state->config = &lbl_831C7AF0.configs[6];
            break;
        }
    } else {
        state = self->state;
        switch (state->mode) {
        case 1:
            config = &lbl_831C7AF0.configs[0];
            break;
        case 2:
            found = fn_8242E3E0(self->owner);
            state = self->state;
            if (found != 0) {
                state->config = &lbl_831C7AF0.configs[10];
                lbl_831C7AF0.configs[10].y = 5.5f;
                lbl_831C7AF0.configs[10].width = 4.5f;
                lbl_831C7AF0.configs[10].height = 4.5f;
                goto done;
            }
            config = &lbl_831C7AF0.configs[9];
            break;
        case 3:
            config = &lbl_831C7AF0.configs[7];
            break;
        case 5:
            if (state->alternate != 0) {
                config = &lbl_831C7AF0.configs[2];
            } else {
                config = &lbl_831C7AF0.configs[3];
            }
            break;
        default:
            config = &lbl_831C7AF0.configs[5];
            break;
        }
        state->config = config;
    }
done:
    self->state->side = 1 - self->state->side;
    self->state->x = self->state->config->x;
    config = self->state->config;
    node = self->owner->node;
    x = config->x;
    z = config->z;
    if (node != 0) {
        target = node->target;
        target->x = config->y;
        target->y = z;
        target->z = x;
    }
}
