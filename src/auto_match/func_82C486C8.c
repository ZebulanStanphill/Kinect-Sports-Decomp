extern int fn_82C75408(int id, int code, int value);

typedef struct Stats_82C486C8 {
    char pad0[0xb4];
    int gainA; /* 0xb4 */
    char pad1[0x4];
    int gainB; /* 0xbc */
    char pad2[0x3cfc - 0xc0];
    int current; /* 0x3cfc */
    char pad3[0x5058 - 0x3d00];
    __int64 sums[5]; /* 0x5058 */
    int counts[5];   /* 0x5080 */
} Stats_82C486C8;

void fn_82C486C8(Stats_82C486C8 *self)
{
    int i;
    int average;
    int scale;

    for (i = 1; i <= 4; i++) {
        if (self->counts[self->current] > 0x32) {
            average = (int)(self->sums[self->current] / self->counts[self->current]);
            scale = (self->gainB * self->gainA) >> 8;
            if (average >= 0x32 && scale >= 0x32) {
                fn_82C75408(i + 6, 0x77, average / scale);
            }
        }
    }
}
