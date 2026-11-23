typedef struct Table_82876910 {
    unsigned int count; /* 0x00 */
} Table_82876910;

typedef struct Owner_82876910 {
    int unk0;                 /* 0x00 */
    unsigned short id;        /* 0x04 */
    int unk8;                 /* 0x08 */
    Table_82876910 *primary;  /* 0x0C */
    Table_82876910 *fallback; /* 0x10 */
} Owner_82876910;

typedef struct Query_82876910 {
    int unk0;               /* 0x00 */
    unsigned int noPrimary; /* 0x04 */
    int unk8;               /* 0x08 */
    int unkC;               /* 0x0C */
    unsigned char useId;    /* 0x10 */
} Query_82876910;

extern void *fn_82876858(Owner_82876910 *owner, unsigned int key, Table_82876910 *table, unsigned char useId);

void *fn_82876910(Owner_82876910 *self, unsigned int key, Query_82876910 *query)
{
    if (query->noPrimary == 0) {
        if (self->primary != 0 && self->primary->count > 0) {
            return fn_82876858(self, key, self->primary, query->useId);
        }
    }
    if (self->fallback != 0 && self->fallback->count > 0) {
        return fn_82876858(self, key, self->fallback, query->useId);
    }
    return 0;
}
