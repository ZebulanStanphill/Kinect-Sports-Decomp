typedef struct Item_827D9B68 { int f0, f4, f8; int fc; } Item_827D9B68;
typedef struct Sp_827D9B68 { Item_827D9B68 *px; void *rep; } Sp_827D9B68;

extern void fn_822315A0(void *rep);

unsigned char fn_827D9B68(Item_827D9B68 *self, Sp_827D9B68 *other)
{
    unsigned char r = self->fc < other->px->fc;
    if (other->rep != 0)
        fn_822315A0(other->rep);
    return r;
}
