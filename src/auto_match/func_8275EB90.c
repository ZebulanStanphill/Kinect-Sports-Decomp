typedef struct Block_8275EB90 {
    struct Block_8275EB90 *next;
    int size; /* 0x4 */
} Block_8275EB90;

typedef struct Pool_8275EB90 {
    int unk0;
    char *begin;           /* 0x4 */
    char *cur;             /* 0x8 */
    int unkc;
    int unk10;
    unsigned short offset; /* 0x14 */
} Pool_8275EB90;

void fn_8275EB90(Pool_8275EB90 *self)
{
    Block_8275EB90 *block = (Block_8275EB90 *)(self->cur - self->offset);

    if (self->begin - (char *)block - 8 < block->size)
        return;
    block = block->next;
    { char **pBegin = &self->begin; *pBegin = block ? (char *)block + 8 : 0; }
    if (block) {
        self->cur = self->begin;
        self->offset = self->cur - (char *)block;
    }
}
