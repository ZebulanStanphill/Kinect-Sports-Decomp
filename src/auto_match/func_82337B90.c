typedef struct Item_82337B90 { char pad[0x2c]; int id; } Item_82337B90;
typedef struct Sub_82337B90 { char pad[0xc]; int key; } Sub_82337B90;
typedef struct Self_82337B90 { char pad[0x2c]; int id; char pad2[0x1a0 - 0x30]; Sub_82337B90 *sub; } Self_82337B90;
extern Item_82337B90 *fn_8242C1B8(int key);

unsigned char fn_82337B90(Self_82337B90 *self)
{
    Item_82337B90 *p = fn_8242C1B8(self->sub->key);
    if (p == 0) return 0;
    return self->id == p->id;
}
