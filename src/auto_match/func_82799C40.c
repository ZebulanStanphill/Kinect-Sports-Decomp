typedef struct Item_82799C40 {
    unsigned int flags;
    char pad4[0x12];
    unsigned short childX;
    union {
        int x;
        struct {
            unsigned short pad18;
            unsigned short childY;
        } c;
    } u;
    char pad1c[0xa];
    unsigned short y;
} Item_82799C40;

float fn_82799C40(Item_82799C40 *item)
{
    unsigned int child = item->flags >> 31;
    int x = child ? item->childX : item->u.x;
    float y = child ? (float)item->u.c.childY : (float)item->y;
    return (float)x - y;
}
