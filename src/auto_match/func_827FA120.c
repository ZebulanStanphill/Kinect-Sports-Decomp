typedef struct Def_827FA120 { char pad[0x1c]; float value; } Def_827FA120;
typedef struct Obj_827FA120 { Def_827FA120 *def; char pad[0xa0]; char sub[4]; } Obj_827FA120;
extern void fn_82800B90(void *sub, float x, float y);

void fn_827FA120(Obj_827FA120 *self, float x)
{
    fn_82800B90(self->sub, x, self->def->value);
}
