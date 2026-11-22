typedef struct Caption_822A06C8 {
    int unk0;        /* 0x00 */
    int movie;       /* 0x04 */
    int unk8;        /* 0x08 */
    int state;       /* 0x0C */
    float remaining; /* 0x10 */
    int canHide;     /* 0x14 */
    int hidden;      /* 0x18 */
} Caption_822A06C8;

extern void fn_82672C20(int movie, const char *path, int arg0, int arg1);

void fn_822A06C8(Caption_822A06C8 *self, float elapsed)
{
    float remaining;

    /* The original tests the timer's bits, not its float value. */
    if (self->state == 2 && *(unsigned int *)&self->remaining != 0) {
        remaining = self->remaining - elapsed;
        remaining = -remaining >= 0.0f ? 0.0f : remaining;
        self->remaining = remaining;
        if (remaining == 0.0f) {
            if (self->hidden == 0 && self->canHide != 0) {
                fn_82672C20(self->movie, "_root.caption.HideCaption", 0, 0);
                self->hidden = 1;
            }
            self->state = 0;
        }
    }
}
