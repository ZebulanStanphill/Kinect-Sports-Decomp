typedef struct Cell_825EC130 {
    int v[4];
} Cell_825EC130;

typedef struct Grid_825EC130 {
    char pad0[0x44];
    int stride;           /* 0x44 */
    int rows;             /* 0x48 */
    int pad4c;            /* 0x4C */
    Cell_825EC130 *cells; /* 0x50 */
} Grid_825EC130;

typedef struct Rec_825EC130 {
    char pad0[0x10];
    int f10; /* 0x10 */
    char pad14[0xC];
    float f20; /* 0x20 */
    char pad24[0x50];
    unsigned int id;       /* 0x74 */
    unsigned int flags[1]; /* 0x78 */
} Rec_825EC130;

typedef struct Entry_825EC130 {
    Rec_825EC130 *rec; /* 0x00 */
    int pad4;          /* 0x04 */
    int state[2];      /* 0x08 */
    int f10;           /* 0x10 */
    int pad14;         /* 0x14 */
} Entry_825EC130;

typedef struct Ctx_825EC130 {
    char pad0[8];
    int *arr; /* 0x08 */
    int padc; /* 0x0C */
    int idx;  /* 0x10 */
    char pad14[0x1C];
    Grid_825EC130 **grids; /* 0x30 */
} Ctx_825EC130;

extern Cell_825EC130 lbl_831BFC08;

extern void fn_825EBE30(Ctx_825EC130 *ctx, Entry_825EC130 *entry, unsigned int id, Cell_825EC130 *cell,
                        int *recField, float value);

void fn_825EC130(Ctx_825EC130 *ctx, int mode)
{
    int count = ctx->arr[ctx->idx + 1];
    int offset;
    int left;
    char *table;
    Entry_825EC130 *entry;
    Rec_825EC130 *rec;
    unsigned int id;
    Cell_825EC130 *cell;
    Grid_825EC130 *grid;

    if (count > 0) {
        offset = 0;
        left = count;
        do {
            table = (char *)ctx->arr[ctx->idx + 3];
            entry = (Entry_825EC130 *)(table + offset);
            rec = *(Rec_825EC130 **)(table + offset);
            if ((rec->flags[ctx->idx] & 0x400) != 0) {
                entry->state[mode] = 0;
            } else if (mode == 2 && (rec->flags[ctx->idx] & 0x100000) != 0) {
                entry->f10 = 0;
            } else if ((rec->flags[ctx->idx] & 2) != 0) {
                entry->state[mode] = 1;
            } else {
                id = rec->id;
                if (id == 0xffffffff) {
                    cell = &lbl_831BFC08;
                } else {
                    grid = ctx->grids[(id >> 24) + 0x129];
                    cell = &grid->cells[((id & 0xff) * grid->rows + ((id >> 8) & 0xff)) * grid->stride +
                                        ((id >> 16) & 0xff)];
                }
                fn_825EBE30(ctx, entry, id, cell, &rec->f10, rec->f20);
            }
            left--;
            offset += 0x18;
        } while (left != 0);
    }
}
