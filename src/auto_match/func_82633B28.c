typedef struct Obj_82633B28 { char pad[0x50]; int f50; char pad2[0xc]; int f60; char pad3[8]; unsigned *f6c; int f70; } Obj_82633B28;

int fn_82633B28(Obj_82633B28 *param_1, unsigned param_2, unsigned *param_3)
{
  unsigned uVar1;
  unsigned uVar2;
  unsigned *puVar4;
  unsigned *puVar5;
  unsigned *puVar6;

  if (param_1->f50 < 0) {
    return 0;
  }
  if (param_3 != 0) {
    puVar5 = param_1->f6c;
    puVar4 = puVar5 + param_1->f70 * 2;
    for (puVar6 = puVar5; puVar6 < puVar4; puVar6 = puVar6 + 2) {
      if (((1 << (puVar6[1] >> 0xc & 0xf) & 0x607eU) != 0) && ((puVar6[1] & 0x800) == 0)) {
        uVar1 = *puVar6;
        uVar2 = uVar1 & 0xfff;
        if ((uVar2 <= param_2) && (param_2 < (uVar1 >> 0xc & 7) + uVar2)) {
          *param_3 = (unsigned)((1 << ((param_2 - uVar2) * 2) & uVar1 >> 0x10 & 0xfff) != 0);
          break;
        }
      }
    }
  }
  return param_1->f60 + param_2 * 0xc;
}
