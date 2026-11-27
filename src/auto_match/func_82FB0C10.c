typedef struct LoopInfo_82FB0C10 {
    unsigned int id;    /* 0x00 */
    unsigned int flags; /* 0x04 */
    double start;       /* 0x08; milliseconds */
    double loopStart;   /* 0x10 */
    double preLoop;     /* 0x18 */
    double loopLength;  /* 0x20 */
} LoopInfo_82FB0C10;

typedef struct LoopItem_82FB0C10 {
    unsigned int id;    /* 0x00 */
    unsigned int flags; /* 0x04 */
    int start;          /* 0x08; samples */
    int length;         /* 0x0c */
    int period;         /* 0x10 */
    int offset;         /* 0x14 */
} LoopItem_82FB0C10;

typedef struct Track_82FB0C10 {
    char pad00[0x98];
    char items[1]; /* 0x98 */
} Track_82FB0C10;

extern LoopItem_82FB0C10 *fn_82FB1B58(void *list);

/* Times arrive in milliseconds and are kept in samples at 48 kHz. */
int fn_82FB0C10(Track_82FB0C10 *self, const LoopInfo_82FB0C10 *info)
{
    double length = info->preLoop + info->loopLength - info->loopStart;
    LoopItem_82FB0C10 *item;

    if (length > 0.0) {
        item = fn_82FB1B58(self->items);
        if (item == 0) {
            return 2;
        }
        item->id = info->id;
        item->flags = info->flags;
        item->start = (int)((info->start + info->loopStart) * 48.0);
        item->length = (int)(length * 48.0);
        item->period = (int)(info->loopLength * 48.0);
        item->offset = (int)(info->loopStart * 48.0) % item->period;
        if (item->offset < 0) {
            item->offset += item->period;
        }
    }
    return 1;
}
