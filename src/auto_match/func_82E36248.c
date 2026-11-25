typedef struct Params_82E36248 {
    char pad0[0x28];
    int interlaced; /* 0x028 */
    char pad2c[0xc8];
    int count; /* 0x0f4 */
    char padf8[0x20];
    int mode; /* 0x118 */
    char pad11c[0x38];
    int *indices;      /* 0x154 */
    int (*levels)[29]; /* 0x158 */
} Params_82E36248;

typedef struct Encoder_82E36248 {
    Params_82E36248 *params; /* 0x0000 */
    char pad4[0x75dc];
    int adaptive; /* 0x75e0 */
    char pad75e4[0x38];
    float scale; /* 0x761c */
    char pad7620[0x1dc];
    int *selected; /* 0x77fc */
} Encoder_82E36248;

void fn_82E36248(Encoder_82E36248 *self)
{
    Params_82E36248 *params;
    int *selected;
    int (*levels)[29];
    int *indices;
    int i;
    int index;
    int target;
    float value;

    params = self->params;
    selected = self->selected;
    levels = params->levels;
    indices = params->indices;
    if (self->adaptive != 0 && params->mode == 1 && params->interlaced == 0) {
        for (i = 0; i < params->count; i++) {
            index = indices[i];
            value = (float)(*levels)[index] * self->scale;
            if (value < 0.0f) {
                target = (int)(value - 0.5f);
            } else {
                target = (int)(value + 0.5f);
            }
            for (index--; (*levels)[index] > target && index > 0; index--) {
            }
            selected[i] = index;
            levels++;
        }
    } else {
        for (i = 0; i < params->count; i++) {
            selected[i] = indices[i] - 1;
        }
    }
}
