/* Copies up to ten items of the source list into the destination: all of them
   in order when there are ten or fewer, otherwise the ten that fn_829DE7F0
   picks. The count is read into a local for the first test and read again
   through the member for the copy the index loop is bounded by (that second
   read is what makes the loop's guard a cr0 compare). */
typedef struct Item_829DEE48 {
    unsigned char data[0x590];
} Item_829DEE48;

typedef struct Source_829DEE48 {
    Item_829DEE48 items[20]; /* 0x0 */
    unsigned int count;      /* 0x6f40 */
} Source_829DEE48;

typedef struct Dest_829DEE48 {
    Item_829DEE48 items[10]; /* 0x0 */
    unsigned int count;      /* 0x37a0 */
} Dest_829DEE48;

typedef struct Ctx_829DEE48 {
    Source_829DEE48 *source; /* 0x0 */
    int pad4[3];
} Ctx_829DEE48;

void *memcpy(void *dst, const void *src, unsigned int size);
extern void fn_829DE7F0(unsigned int count, unsigned int max, Ctx_829DEE48 *ctx, unsigned int *indices);

void fn_829DEE48(Source_829DEE48 *src, Dest_829DEE48 *dst)
{
    unsigned int count = src->count;
    unsigned int indices[10];
    Ctx_829DEE48 ctx;
    unsigned int n;
    int i;

    if (count > 10) {
        ctx.source = src;
        fn_829DE7F0(count, 10, &ctx, indices);
        n = 10;
    } else {
        n = src->count;
        for (i = 0; i < (int)n; i++)
            indices[i] = i;
    }
    dst->count = n;
    for (i = 0; (unsigned int)i < n; i++)
        memcpy(&dst->items[i], &src->items[indices[i]], sizeof(Item_829DEE48));
}
