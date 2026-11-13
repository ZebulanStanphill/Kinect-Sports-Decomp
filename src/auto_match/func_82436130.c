typedef struct Handle_82436130 {
    int value;
} Handle_82436130;

typedef struct Ctx_82436130 {
    char pad[0x208];
    int f208;
} Ctx_82436130;

typedef struct Owner_82436130 {
    char pad[0x40];
    Ctx_82436130 *ctx;
} Owner_82436130;

typedef struct Data_82436130 {
    char pad[0x194];
    int table;
} Data_82436130;

typedef struct Item_82436130 {
    char pad[0x74];
    int active;
    char pad2[0x1a0 - 0x78];
    Data_82436130 *data;
} Item_82436130;

extern Handle_82436130 lbl_831D37A4;
extern int fn_82340CC8(int *table, int key);

Handle_82436130 *fn_82436130(Handle_82436130 *out, Owner_82436130 *owner, Item_82436130 *item)
{
    if (item->active != 0) {
        out->value = fn_82340CC8(&item->data->table, owner->ctx->f208);
    } else {
        *out = lbl_831D37A4;
    }
    return out;
}
