typedef struct Entry_82A05D90 {
    unsigned int flags; /* 0x0 */
    char pad4[0x1ec];
} Entry_82A05D90;

typedef struct Owner_82A05D90 {
    char pad0[0x4f0];
    Entry_82A05D90 entries[1]; /* 0x4f0 */
} Owner_82A05D90;

int fn_82A05D90(Owner_82A05D90 *self, int *indices, unsigned int count)
{
    unsigned int total = 0;
    unsigned int i;
    unsigned int average;
    for (i = 0; i < count; i++) {
        if ((self->entries[indices[i]].flags & 3) != 0) {
            total += 1;
        } else {
            total += 2;
        }
    }
    average = (unsigned int)((float)total / (float)count + 0.5f);
    if (average >= 2) {
        return 2;
    }
    return average >= 1;
}
