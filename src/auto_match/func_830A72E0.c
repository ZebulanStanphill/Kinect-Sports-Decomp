typedef struct Entry_830A72E0 {
    float first;  /* 0x00 */
    float second; /* 0x04 */
    int pad[3];   /* 0x08 */
} Entry_830A72E0;

typedef struct Source_830A72E0 {
    unsigned char modes; /* 0x00 */
    unsigned char pad[3];
    Entry_830A72E0 entries[3]; /* 0x04 */
} Source_830A72E0;

typedef struct Target_830A72E0 {
    float values[8]; /* 0x00 */
} Target_830A72E0;

void fn_830A72E0(int index, int slot, Source_830A72E0 *sources, Target_830A72E0 *targets)
{
    Source_830A72E0 *source = &sources[index];
    Target_830A72E0 *target = &targets[index];

    float value;

    if (((source->modes >> (slot * 2)) & 3) == 1) {
        value = source->entries[slot].first;
    } else {
        value = source->entries[slot].second;
    }
    target->values[slot + 4] = value;
}
