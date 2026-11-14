typedef struct Item_8234B400 { char pad[0x10]; char key[0x20]; float value; } Item_8234B400;
extern void fn_8234B0C8(void *self, void *key, float value);

void fn_8234B400(void *self, Item_8234B400 **item)
{
    fn_8234B0C8(self, (*item)->key, (*item)->value);
}
