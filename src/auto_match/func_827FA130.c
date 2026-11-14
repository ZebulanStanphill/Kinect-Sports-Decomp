typedef struct Def_827FA130 { char pad[0x1c]; float value; } Def_827FA130;
typedef struct Obj_827FA130 { Def_827FA130 *def; char pad[0xa0]; char sub[4]; } Obj_827FA130;
extern void fn_82800BF8(void *sub, float x, float y);

void fn_827FA130(Obj_827FA130 *self, float x)
{
    fn_82800BF8(self->sub, x, self->def->value);
}
