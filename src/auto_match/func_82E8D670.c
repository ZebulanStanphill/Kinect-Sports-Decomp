typedef struct Block_82E8D670 { int v[7]; } Block_82E8D670;
typedef struct Obj_82E8D670 { char pad[0x348]; Block_82E8D670 block; } Obj_82E8D670;

void fn_82E8D670(Obj_82E8D670 *self, Block_82E8D670 block)
{
    self->block = block;
}
