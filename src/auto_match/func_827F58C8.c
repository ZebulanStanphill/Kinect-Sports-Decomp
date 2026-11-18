typedef struct Tween_827F57E8 {
    char pad0[0x20];
    short column; /* 0x20 */
    short row;    /* 0x22 */
} Tween_827F57E8;

extern void fn_827F57E8(Tween_827F57E8 *self, float target, float duration);

void fn_827F58C8(Tween_827F57E8 *self, int index, float target, float duration)
{
    self->row = index / 6;
    self->column = index % 6;
    fn_827F57E8(self, target, duration);
}
