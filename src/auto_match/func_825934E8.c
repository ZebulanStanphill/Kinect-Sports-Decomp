typedef struct Float3_825934E8 {
    float x, y, z;
} Float3_825934E8;

typedef struct Item_825934E8 {
    unsigned int flags;         // 0x00
    Float3_825934E8 position;   // 0x04
} Item_825934E8;

extern Float3_825934E8 lbl_83297AC4;
extern unsigned int lbl_83297AD0;

const Float3_825934E8 *fn_825934E8(const Item_825934E8 *item)
{
    if (item != 0 && (item->flags & 1))
        return &item->position;
    if ((lbl_83297AD0 & 1) == 0) {
        lbl_83297AD0 |= 1;
        lbl_83297AC4.x = 0.0f;
        lbl_83297AC4.y = 0.0f;
        lbl_83297AC4.z = 0.0f;
    }
    return &lbl_83297AC4;
}
