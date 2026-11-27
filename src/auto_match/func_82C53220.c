void *memset(void *dst, int value, unsigned int size);

typedef struct Planes_82C53220 {
    unsigned char *plane0;  /* 0x000: aligned start inside buffer0 */
    unsigned char *plane1;  /* 0x004 */
    unsigned char *plane2;  /* 0x008 */
    unsigned char *buffer0; /* 0x00c */
    unsigned char *buffer1; /* 0x010 */
    unsigned char *buffer2; /* 0x014 */
    int size0;              /* 0x018 */
    int size1;              /* 0x01c */
    char pad020[0x234];     /* 0x020 */
    int width;              /* 0x254 */
    int border;             /* 0x258 */
    char pad25C[0x24];      /* 0x25c */
    int current;            /* 0x280 */
    int unk284;             /* 0x284 */
} Planes_82C53220;

/* The empty string: the allocator's unused name argument. */
extern char lbl_82196582[];

extern void *fn_82C56398(void *heap, unsigned int size, const char *name);

int fn_82C53220(void *heap, Planes_82C53220 *planes, int width, int height, int border)
{
    unsigned char *buffer;
    unsigned char *start;
    int size;
    int misalign;

    memset(planes, 0, sizeof(Planes_82C53220));
    size = (border + 0x10) * 2 + width;
    planes->size0 = size;
    buffer = fn_82C56398(heap, size, lbl_82196582);
    planes->buffer0 = buffer;
    if (buffer == 0) {
        return -9;
    }
    memset(buffer, 0, size);
    size = height + border + 0x20;
    planes->size1 = size;
    planes->plane0 = (unsigned char *)((unsigned int)(buffer + border + 0x1f) & ~0x1f);
    buffer = fn_82C56398(heap, size, lbl_82196582);
    planes->buffer1 = buffer;
    if (buffer == 0) {
        return -9;
    }
    memset(buffer, 0x80, size);
    start = buffer + (border >> 1);
    misalign = (unsigned int)start & 0x1f;
    if (misalign != 0) {
        misalign = 0x20 - misalign;
    }
    planes->plane1 = start + misalign;
    buffer = fn_82C56398(heap, size, lbl_82196582);
    planes->buffer2 = buffer;
    if (buffer == 0) {
        return -9;
    }
    memset(buffer, 0x80, size);
    start = buffer + (border >> 1);
    misalign = (unsigned int)start & 0x1f;
    if (misalign != 0) {
        misalign = 0x20 - misalign;
    }
    planes->plane2 = start + misalign;
    planes->border = border;
    planes->width = width;
    planes->current = -1;
    return 0;
}
