typedef struct Self_829EC5E8 {
    char pad0[8];
    void *data;             /* 0x08 */
    char padc[8];
    unsigned short count;   /* 0x14 */
    char pad16[0x16];
    unsigned short *ids;    /* 0x2c */
} Self_829EC5E8;

unsigned short fn_829EC5E8(Self_829EC5E8 *self)
{
    unsigned short id = 0;

    if (self->data != 0 && self->count != 0)
        id = *self->ids;
    return id;
}
