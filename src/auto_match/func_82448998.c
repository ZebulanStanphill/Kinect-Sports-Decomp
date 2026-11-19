typedef struct Info_82448998 {
    char pad[0x14];
    float start;        /* 0x14 */
    float step;         /* 0x18 */
    unsigned int count; /* 0x1c */
} Info_82448998;

typedef struct Self_82448998 {
    char pad[0x48];
    Info_82448998 *info; /* 0x48 */
} Self_82448998;

extern void fn_82448A88(Self_82448998 *self, unsigned char row, unsigned char column, int mode);

void fn_82448998(Self_82448998 *self, float value, unsigned char row, int mode)
{
    unsigned int count = self->info->count;
    unsigned int next;
    int previous;
    float previousDistance = 0.0f;
    float nextDistance = previousDistance;
    float position;

    for (next = 0; next < self->info->count; next++) {
        position = self->info->step * (float)next + self->info->start;
        if (value < position) {
            nextDistance = position - value;
            break;
        }
    }
    for (previous = count - 1; previous >= 0; previous--) {
        position = self->info->step * (float)previous + self->info->start;
        if (value > position) {
            previousDistance = value - position;
            break;
        }
    }
    if (next >= count) {
        fn_82448A88(self, row, (unsigned char)previous, mode);
    } else {
        if (previous >= 0 && previousDistance < nextDistance) {
            next = previous;
        }
        fn_82448A88(self, row, (unsigned char)next, mode);
    }
}
