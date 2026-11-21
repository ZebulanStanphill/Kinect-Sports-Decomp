typedef struct Header_82823848 {
    int count;    /* 0x0 */
    unsigned pos; /* 0x4 */
} Header_82823848;

typedef struct Buffer_82823848 {
    Header_82823848 *header; /* 0x00 */
    int pad4;                /* 0x04 */
    unsigned f8;             /* 0x08 */
    char padc[8];            /* 0x0c */
    unsigned f14;            /* 0x14 */
    unsigned capacity;       /* 0x18 */
    unsigned start;          /* 0x1c */
    unsigned end;            /* 0x20 */
    unsigned f24;            /* 0x24 */
    unsigned longest;        /* 0x28 */
} Buffer_82823848;

extern int fn_82823728(char *records, Buffer_82823848 *b, unsigned length, unsigned *size);

int fn_82823848(char *records, Buffer_82823848 *b, int type, int length, unsigned *size)
{
    unsigned char *rec;
    int result;
    unsigned arg;
    int span;

    if (*size + 5 > b->capacity) {
        return 1;
    }
    if (b->header->count > 0) {
        rec = (unsigned char *)(b->header->count * 5 + records);
        if (rec[-5] == type) {
            *(int *)(rec - 4) += length;
            goto update;
        }
    }
    arg = 0;
    if (type == 1 || type == 2) {
        arg = length;
    }
    result = fn_82823728(records, b, arg, size);
    if (result != 0) {
        return result;
    }
    rec = (unsigned char *)(b->header->count * 5 + records);
    rec[0] = type;
    *(int *)(rec + 1) = length;
    b->header->count++;
    *size += 5;
update:
    switch (type) {
    case 0:
        span = b->end - b->start;
        if (span > 0) {
            if (b->longest > (unsigned)span) {
                span = b->longest;
            }
            b->longest = span;
        }
        b->start += length;
        b->end += length;
        break;
    case 1:
        b->header->pos += length;
        b->start += length;
        b->end += length;
        break;
    case 2:
        b->header->pos += length;
        b->end += length;
        break;
    case 3:
        b->start += length;
        break;
    }
    return 0;
}
