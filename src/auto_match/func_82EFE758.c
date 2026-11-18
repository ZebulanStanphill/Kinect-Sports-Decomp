typedef struct State_82EFE758 {
    char pad0[0x2a4];
    int level; /* 0x2a4 */
    char pad2a8[0x868 - 0x2a8];
    int step; /* 0x868 */
    char pad86c[0x1f58 - 0x86c];
    int busy; /* 0x1f58 */
} State_82EFE758;

/* Raises the level: by the configured step, or by 3, 2 or 1 depending on how high it already is.
   Only the larger steps can pass the maximum of 31. */
void fn_82EFE758(State_82EFE758 *self)
{
    int level = self->level;

    if (self->step != -1) {
        level += self->step;
    } else if (level > 18 || self->busy != 0) {
        level += 3;
    } else if (level > 10) {
        level += 2;
    } else {
        if (level > 2) {
            level++;
        }
        self->level = level;
        return;
    }
    if (level > 31) {
        level = 31;
    }
    self->level = level;
}
