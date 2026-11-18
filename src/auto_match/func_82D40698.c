typedef struct Value_82D40698 Value_82D40698;

typedef struct ValueVtbl_82D40698 {
    void *slot0;                           /* 0x0 */
    int (*GetLevel)(Value_82D40698 *self); /* 0x4 */
} ValueVtbl_82D40698;

struct Value_82D40698 {
    ValueVtbl_82D40698 *vt; /* 0x0 */
};

typedef struct Item_82D40698 {
    int pad0[3];
    int type;             /* 0xc */
    Value_82D40698 value; /* 0x10 */
} Item_82D40698;

typedef struct Handle_82D40698 {
    Item_82D40698 *item; /* 0x0 */
} Handle_82D40698;

unsigned char *fn_82D40698(unsigned char *result, Handle_82D40698 *handle)
{
    unsigned char ok;

    if (handle->item == 0) {
        *result = 0;
        return result;
    }
    ok = 1;
    if (handle->item->type == 9)
        if (handle->item->value.vt->GetLevel(&handle->item->value) > 100)
            ok = 0;
    if (handle->item->type == 0x18)
        if (handle->item->value.vt->GetLevel(&handle->item->value) > 100)
            ok = 0;
    if (handle->item->type == 7)
        if (handle->item->value.vt->GetLevel(&handle->item->value) > 100)
            ok = 0;
    if (handle->item->type == 0xf)
        ok = 0;
    *result = ok;
    return result;
}
