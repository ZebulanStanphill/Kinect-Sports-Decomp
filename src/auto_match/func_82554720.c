typedef struct Owner_82554720 {
    char pad0[0x114];
    void *dependency; /* 0x114 */
} Owner_82554720;

typedef struct Self_82554720 {
    char pad0[0x18c];
    unsigned int count;     /* 0x18c */
    Owner_82554720 **items; /* 0x190 */
    char pad194[4];
    void **tweens;         /* 0x198 */
    unsigned char *states; /* 0x19c */
} Self_82554720;

extern int fn_8255FA88(void *dependency);
extern unsigned char fn_827F22D0(Owner_82554720 *item);
extern void fn_827F5730(void *tween, float target, float speed);
extern void fn_8255F788(Owner_82554720 *item, float t);
extern void fn_827F5708(void *tween, float value);
extern void fn_827F0670(Self_82554720 *self, float time);

void fn_82554720(Self_82554720 *self, float time)
{
    unsigned int i;

    for (i = 1; i < self->count; i++) {
        unsigned char state = self->states[i];
        if (state & 2) {
            if (self->items[i]->dependency != 0 && fn_8255FA88(self->items[i]->dependency) == 0) {
                continue;
            }
            if (i != 0) {
                fn_827F5730(self->tweens[i - 1], 0.0f, 1.0f);
                fn_8255F788(self->items[i], 1.0f);
                self->states[i] = 1;
            }
        } else if (state & 1) {
            if (fn_827F22D0(self->items[i])) {
                fn_8255F788(self->items[i], 0.0f);
                if (i != 0) {
                    fn_827F5708(self->tweens[i - 1], 0.0f);
                }
                self->states[i] = 0;
            }
        }
    }
    fn_827F0670(self, time);
}
