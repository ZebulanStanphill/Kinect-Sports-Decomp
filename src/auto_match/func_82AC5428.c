typedef struct Context_82AC5428 {
    char pad0[0x44];
    unsigned int base;  /* 0x44 */
    unsigned int size;  /* 0x48 */
    unsigned int pad4C; /* 0x4C */
    unsigned int limit; /* 0x50 */
} Context_82AC5428;

typedef struct Range_82AC5428 {
    unsigned short start; /* 0x0 */
    unsigned short count; /* 0x2 */
} Range_82AC5428;

typedef struct Block_82AC5428 {
    char pad0[0x10];
    unsigned int length;  /* 0x10 */
    unsigned int data[1]; /* 0x14 */
} Block_82AC5428;

long fn_82AC5428(Block_82AC5428 *block, Context_82AC5428 *context)
{
    unsigned int section;
    unsigned int *p;
    unsigned int *end;
    unsigned short start;
    unsigned short count;
    unsigned int address;

    if (block == 0) {
        return 0;
    }
    if ((unsigned int)block < context->base) {
        return 0x80004005;
    }
    if ((unsigned int)block + 0x18 > context->size + context->base) {
        return 0x80004005;
    }
    if ((unsigned __int64)block->length + (unsigned int)block >
        (unsigned __int64)context->size + context->base) {
        return 0x80004005;
    }
    section = 0;
    p = block->data;
    end = (unsigned int *)((char *)p + (block->length & ~3));
    while (p < end) {
        count = ((Range_82AC5428 *)p)->count;
        start = ((Range_82AC5428 *)p)->start;
        p++;
        if (count == 0) {
            section++;
            if (section >= 3) {
                break;
            }
            continue;
        }
        if (section == 0) {
            if ((count & 0xF) != 0) {
                return 0x80004005;
            }
            if (p >= end) {
                return 0x80004005;
            }
            address = *p;
            p++;
            if (address >= context->limit) {
                return 0x80004005;
            }
            if ((unsigned __int64)count * 4 + address > context->limit) {
                return 0x80004005;
            }
            if (((unsigned __int64)count >> 2) + start > 0x200) {
                return 0x80004005;
            }
        } else if (section == 1) {
            if (start < 0x2320) {
                return 0x80004005;
            }
            if ((unsigned __int64)count * 4 + start > 0x23A0) {
                return 0x80004005;
            }
            p += count;
            if (p > end) {
                return 0x80004005;
            }
        } else if (section == 2) {
            if ((count & 1) != 0) {
                return 0x80004005;
            }
            if (start < 0x2300) {
                return 0x80004005;
            }
            if ((unsigned __int64)(count >> 1) * 4 + start > 0x2320) {
                return 0x80004005;
            }
            p += count;
            if (p > end) {
                return 0x80004005;
            }
        }
    }
    if (p != end) {
        return 0x80004005;
    }
    return 0;
}
