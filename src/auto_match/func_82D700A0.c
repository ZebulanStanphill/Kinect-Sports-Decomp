typedef struct Id_82D700A0 {
    unsigned int hi; /* 0x0 */
    unsigned int lo; /* 0x4 */
} Id_82D700A0;

typedef struct Record_82D700A0 {
    unsigned char type; /* 0x0 */
    unsigned char pad1[2];
    unsigned char size; /* 0x3 */
    Id_82D700A0 id;     /* 0x4 */
} Record_82D700A0;

typedef struct Block_82D700A0 {
    int size; /* 0x0 */
    int pad4[3];
    unsigned char data[1]; /* 0x10 */
} Block_82D700A0;

typedef struct Owner_82D700A0 {
    Block_82D700A0 **blocks;
} Owner_82D700A0;

static __forceinline unsigned char SameId_82D700A0(const Id_82D700A0 *a, const Id_82D700A0 *b)
{
    return a->lo == b->lo && a->hi == b->hi;
}

/* Walks the records of every block until one with the given id is found; a record of type 1 ends the walk. */
Record_82D700A0 *fn_82D700A0(Owner_82D700A0 *self, Id_82D700A0 id, void **out)
{
    Block_82D700A0 **blocks = self->blocks;
    Block_82D700A0 *block = *blocks;
    Record_82D700A0 *record = (Record_82D700A0 *)block->data;
    unsigned char *end = block->data + block->size;
    void *data;

    for (;;) {
        switch (record->type) {
        case 0:
            goto next;
        case 2:
        case 3:
        case 6:
        case 10:
        case 11:
        case 14:
            data = (unsigned char *)record + 0x10;
            break;
        case 4:
        case 5:
        case 12:
        case 13:
            data = (unsigned char *)record + 0x20;
            break;
        default:
            goto checkEnd;
        case 1:
            return 0;
        }
        if (SameId_82D700A0(&record->id, &id)) {
            *out = data;
            return record;
        }
    next:
        record = (Record_82D700A0 *)((unsigned char *)record + record->size);
    checkEnd:
        if ((unsigned char *)record >= end) {
            block = *++blocks;
            record = (Record_82D700A0 *)block->data;
            end = block->data + block->size;
        }
    }
}
