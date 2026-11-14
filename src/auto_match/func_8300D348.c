typedef struct Info_8300D348 {
    char pad[0x12];
    unsigned char flags;    /* 0x12 */
} Info_8300D348;

typedef struct Item_8300D348 {
    char pad[0x70];
    Info_8300D348 *info;    /* 0x70 */
} Item_8300D348;

typedef struct Set_8300D348 {
    char pad[0x3c];
    unsigned char ids[0x11];    /* 0x3c */
    unsigned char count;        /* 0x4d */
} Set_8300D348;

extern unsigned int lbl_83264604;

unsigned int fn_8300D348(Set_8300D348 *self, Item_8300D348 *item)
{
    unsigned int mask = item->info->flags & lbl_83264604;
    unsigned int result = 0;
    unsigned char i;

    for (i = 0; i < self->count; i++) {
        if (((1 << self->ids[i]) & mask) != 0)
            result |= 1 << i;
    }
    return result;
}
