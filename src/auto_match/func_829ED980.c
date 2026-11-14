typedef struct Globals_829ED980 {
    char pad[0x8f4cc];
    void *heap;                 /* 0x8f4cc */
} Globals_829ED980;

typedef struct Self_829ED980 {
    char pad0[8];
    unsigned int *items;        /* 0x08 */
    unsigned int count;         /* 0x0c */
} Self_829ED980;

extern Globals_829ED980 *lbl_832179FC;
extern int fn_829ECB08(Self_829ED980 *self, const void *data, unsigned int size, int flags);
extern unsigned int fn_829ECD48(Self_829ED980 *self);
extern void *fn_82A28568(void *heap, unsigned int flags, unsigned int size);
int fn_829ED980(Self_829ED980 *self, const void *data, unsigned __int64 size)
{
    unsigned int count;
    unsigned int bytes;
    unsigned int *items;

    if (data == 0)
        return 0x80070057;
    if (size > 0xffffffff)
        return 0x80070057;
    if (fn_829ECB08(self, data, (unsigned int)size, 0) == 0)
        return 0x80004005;
    count = fn_829ECD48(self);
    self->count = count;
    if (count == 0)
        return 0x80004005;
    bytes = count * 4;
    if (count > 0x3fffffff)
        bytes = 0xffffffff;
    items = (unsigned int *)fn_82A28568(lbl_832179FC->heap, 0, bytes);
    self->items = items;
    return items != 0 ? 0 : 0x8007000e;
}
