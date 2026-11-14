typedef struct Info_824486C0 {
    char pad[0x14];
    float start;            /* 0x14 */
    float step;             /* 0x18 */
    unsigned int count;     /* 0x1c */
} Info_824486C0;

typedef struct Self_824486C0 {
    char pad[0x48];
    Info_824486C0 *info;    /* 0x48 */
} Self_824486C0;

int fn_824486C0(Self_824486C0 *self, float value)
{
    unsigned int i;

    for (i = 0; i < self->info->count; i++) {
        if (value < self->info->step * (float)i + self->info->start)
            return i;
    }
    return -1;
}
