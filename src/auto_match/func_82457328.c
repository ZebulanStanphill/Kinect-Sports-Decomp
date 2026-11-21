/* Picks one of five level entries by a 0..1 fraction (the float thresholds come from
   a shared LTCG constant pool, lbl_82193AD8 - 0x2324 .. + 0x22c). */
typedef struct Meter_82457328 {
    int levels[5];
    char pad14[4];
    void *target;
    int shown;
} Meter_82457328;

extern void fn_825077E8(void *target, int *level, int flag);

void fn_82457328(Meter_82457328 *self, float fraction)
{
    int *level;

    if (self->target != 0 && self->shown == 0) {
        if (fraction < 0.25f)
            level = &self->levels[4];
        else if (fraction < 0.4f)
            level = &self->levels[3];
        else if (fraction < 0.6f)
            level = &self->levels[2];
        else if (fraction < 0.75f)
            level = &self->levels[1];
        else
            level = &self->levels[0];
        fn_825077E8(self->target, level, 1);
        self->shown = 1;
    }
}
