typedef struct Owner_8235FD00 { char pad[0x620]; float f620; } Owner_8235FD00;
typedef struct Self_8235FD00 { int pad; Owner_8235FD00 *owner; } Self_8235FD00;
typedef struct Item_8235FD00 { char pad[0x24]; int f24; } Item_8235FD00;

extern const float lbl_821CA45C[2];
extern void fn_822BBB08(Item_8235FD00 *);
extern void fn_822B70F0(Item_8235FD00 *, float, int);

int fn_8235FD00(Self_8235FD00 *self, Item_8235FD00 *item)
{
    fn_822BBB08(item);
    if (item->f24 != 0) fn_822B70F0(item, self->owner->f620, 0);
    else fn_822B70F0(item, lbl_821CA45C[1], 0);
    return 1;
}
