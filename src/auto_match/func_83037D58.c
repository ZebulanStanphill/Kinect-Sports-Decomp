typedef struct Block_83037D58 {
    char *data;        /* 0x0 */
    unsigned int used; /* 0x4 */
} Block_83037D58;

typedef struct Writer_83037D58 {
    Block_83037D58 *begin;    /* 0x00 */
    Block_83037D58 *end;      /* 0x04 */
    Block_83037D58 *capacity; /* 0x08 */
    unsigned int maxBlocks;   /* 0x0c */
    unsigned int allocated;   /* 0x10 */
    int unknown14;            /* 0x14 */
    unsigned int current;     /* 0x18 */
    unsigned int used;        /* 0x1c */
    unsigned char failed;     /* 0x20 */
} Writer_83037D58;

extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC8DC;
extern void *fn_82A1DDC0(void *destination, const void *source, unsigned int count);
extern char *fn_82FA5060(unsigned int heap, unsigned int size);
extern void fn_82FA5190(unsigned int heap, char *block);
extern Block_83037D58 *fn_83037F70(Writer_83037D58 *self, unsigned int index);

int fn_83037D58(Writer_83037D58 *self, const void *source, unsigned int count)
{
    unsigned int index;
    unsigned int blocks;
    char *data;
    Block_83037D58 *block;

    if (lbl_831BC8DC - self->used >= count) {
        fn_82A1DDC0(self->begin[self->current].data + self->used, source, count);
        self->used = count + self->used;
    } else {
        if (self->failed) {
            return 0x34;
        }
        index = self->current + 1;
        blocks = self->end - self->begin;
        index = index < blocks ? index : 0;
        if (self->allocated == index) {
            if (blocks >= self->maxBlocks) {
                self->failed = 1;
                return 0x34;
            }
            data = fn_82FA5060(lbl_831BC768, lbl_831BC8DC);
            if (data == 0) {
                self->failed = 1;
                return 0x34;
            }
            block = fn_83037F70(self, index);
            if (block == 0) {
                self->failed = 1;
                fn_82FA5190(lbl_831BC768, data);
                return 0x34;
            }
            block->data = data;
            self->allocated++;
        } else {
            data = self->begin[index].data;
        }
        self->current = index;
        self->used = count;
        fn_82A1DDC0(data, source, count);
    }
    self->begin[self->current].used = self->used;
    return 1;
}
