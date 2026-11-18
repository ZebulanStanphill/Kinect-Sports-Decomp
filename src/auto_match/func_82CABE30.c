typedef struct Buffers_82CABE30 {
    char pad0[0x14];
    char *headEnd;   /* 0x14 */
    char *bodyStart; /* 0x18 */
    char *head;      /* 0x1c */
    int pad20;
    char *table;      /* 0x24 */
    char *tableEnd;   /* 0x28 */
    char *tableStart; /* 0x2c */
    char *extra;      /* 0x30 */
    int pad34;
} Buffers_82CABE30;

extern void *fn_82C53960(unsigned int size, int pool);
extern void fn_82CAB258(Buffers_82CABE30 **buffers);
void *memset(void *dst, int value, unsigned int size);

static __forceinline char *Allocate(char **slot, unsigned int size)
{
    *slot = (char *)fn_82C53960(size, 3);
    return *slot;
}

Buffers_82CABE30 *fn_82CABE30(void)
{
    Buffers_82CABE30 *buffers;
    Buffers_82CABE30 *created;

    created = (Buffers_82CABE30 *)fn_82C53960(0x38, 0);
    buffers = created;
    if (created == 0) {
        goto fail;
    }
    memset(created, 0, 0x38);
    Allocate(&created->head, 0x40);
    if (created->head == 0) {
        goto fail;
    }
    Allocate(&created->extra, 0x30);
    if (created->extra == 0) {
        goto fail;
    }
    {
        char **headEnd = &created->headEnd;
        *headEnd = created->head + 0x1f;
    }
    created->bodyStart = created->head + 0x20;
    {
        char **tableStart = &created->tableStart;
        *tableStart = Allocate(&created->table, 0x80) + 8;
        if (created->table == 0) {
            goto fail;
        }
        created->tableEnd = *tableStart + 0x18;
    }
    return created;
fail:
    fn_82CAB258(&buffers);
    return 0;
}
