/* Advances a fade value and refreshes the state when it changed or a refresh is pending. */
typedef struct Self_822984D0 {
    char pad0[0x48];
    int shownState; /* 0x48 */
    int state;      /* 0x4c */
    int field50;
    int pending; /* 0x54 */
    int field58;
    int fading; /* 0x5c */
    char pad60[0x80 - 0x60];
    float fade; /* 0x80 */
} Self_822984D0;

extern const double lbl_821954B0[];
extern const float lbl_8327F880[];
extern const float lbl_821916FC;
extern void fn_82298280(Self_822984D0 *self);

int fn_822984D0(Self_822984D0 *self)
{
    float limit = ((const float *)lbl_821954B0)[0x7d];
    int pending;
    int refresh;

    if (self->fade < limit) {
        self->fade += lbl_8327F880[5];
        if (self->fade >= limit) {
            self->fade = limit;
        }
    }
    pending = self->pending;
    switch (self->state) {
    case 11:
    case 12:
    case 13:
        refresh = 1;
        break;
    case 0:
        if (self->fading != 0) {
            refresh = (self->fade >= lbl_821916FC) | pending;
            break;
        }
    default:
        refresh = (self->state != self->shownState) | pending;
        break;
    }
    if (refresh != 0) {
        fn_82298280(self);
    }
    self->pending = 0;
    return 0;
}
