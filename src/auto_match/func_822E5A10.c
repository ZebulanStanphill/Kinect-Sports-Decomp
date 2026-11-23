typedef struct Mode_822E5A10 {
    char pad0[0x54];
    unsigned int category; /* 0x54 */
    char pad58[0x120];
    int mode; /* 0x178 */
} Mode_822E5A10;

typedef struct State_822E5A10 {
    char pad0[0x1bc];
    Mode_822E5A10 *config; /* 0x1bc */
    char pad1C0[0x4c];
    void *left;  /* 0x20c */
    void *right; /* 0x210 */
    int side;    /* 0x214 */
    char pad218[0x60];
    int enabled; /* 0x278 */
} State_822E5A10;

extern const float lbl_831D14D8[64];
extern void fn_822E6008(State_822E5A10 *self, void *target);
extern void *fn_822E64E0(State_822E5A10 *self, float scale, int left, int unused, int both, int primary);
extern void fn_822E7C78(State_822E5A10 *self);

void fn_822E5A10(State_822E5A10 *self)
{
    unsigned int category = self->config->category;
    int active;
    int both;

    if (category <= 1)
        goto inactive;
    if (category <= 5)
        goto enable;
    if (category <= 7)
        goto inactive;
    if (category == 16) {
    inactive:
        active = 0;
    } else {
    enable:
        active = 1;
    }

    both = self->config->mode == 2;
    if (active && self->left == 0 && self->right == 0) {
        if (both) {
            self->right = fn_822E64E0(self, lbl_831D14D8[4], 0, 0, both, 1);
            self->left = fn_822E64E0(self, lbl_831D14D8[4], 1, 0, both, 0);
        } else if (category == 3 && self->enabled != 0) {
            if (self->side != 0) {
                fn_822E6008(self, 0);
                self->right = 0;
                self->left = fn_822E64E0(self, lbl_831D14D8[4], 1, 0, 0, 1);
            } else {
                fn_822E6008(self, 0);
                self->left = 0;
                self->right = fn_822E64E0(self, lbl_831D14D8[4], 0, 0, 0, 1);
            }
            fn_822E7C78(self);
        }
    }
}
