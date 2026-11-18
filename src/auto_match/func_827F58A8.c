typedef struct Tween_827F5730 {
    char pad0[0x20];
    short column;   /* 0x20 */
    short row;      /* 0x22 */
    float target;   /* 0x24 */
    float delta;    /* 0x28 */
    float velocity; /* 0x2c */
    float elapsed;  /* 0x30 */
} Tween_827F5730;

extern void fn_827F5730(Tween_827F5730 *self, float target, float speed);

void fn_827F58A8(Tween_827F5730 *self, int index, float target, float speed)
{
    self->row = index / 6;
    self->column = index % 6;
    fn_827F5730(self, target, speed);
}
