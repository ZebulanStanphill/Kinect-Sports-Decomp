typedef struct Desc_82954828 { int pad; unsigned flags; } Desc_82954828;
typedef struct Item_82954828 { int pad; unsigned f4; int pad2; unsigned fc; unsigned f10; } Item_82954828;
typedef struct Obj_82954828 { char pad[0x10]; Desc_82954828 **descs; Item_82954828 **items; } Obj_82954828;
typedef struct Arg_82954828 { char pad[0x14]; int f14; int f18; } Arg_82954828;

int fn_82954828(Obj_82954828 *param_1, Arg_82954828 *param_2, unsigned *param_3)
{
  unsigned uVar4 = 0;
  Item_82954828 *it;
  unsigned v;

  if (param_2->f14 != -1) {
    it = param_1->items[param_2->f14];
    if ((param_1->descs[it->f4]->flags & 8) != 0) {
      v = it->fc & 0x7ff;
      uVar4 = v | 0xb0001000;
      v = it->f10;
      if (v >= 1) {
        if (v != 1) {
          if (v >= 3) {
            if (v == 3) uVar4 = uVar4 | 0xff0000;
          } else uVar4 = uVar4 | 0xaa0000;
        } else uVar4 = uVar4 | 0x550000;
      }
      if (param_2->f18 == 0) {
        uVar4 = uVar4 | 0xd000000;
      }
    }
  }
  if (param_3 != 0) {
    *param_3 = uVar4;
  }
  return 0;
}
