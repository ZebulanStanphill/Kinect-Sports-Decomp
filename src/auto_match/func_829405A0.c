unsigned int fn_829405A0(int param_1,unsigned int *param_2,int param_3)

{
  int bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = *param_2 & 0xfff00000;
  if (*(unsigned int *)(*(int *)(*(int *)((*param_2 & 0xfffff) * param_3 * 4 + param_2[2]) * 4 +
                       *(int *)(param_1 + 0x14)) + 0x6c) != 0x11) return 0;
  {
    if (uVar2 == 0x30000000) {
      if ((unsigned int)param_3 == 0) return 1;
    } else {
      switch (uVar2) {
        case 0x73800000:
        case 0x10f00000:
        case 0x73500000:
        case 0x73600000:
        case 0x73700000:
        case 0x74400000:
        case 0x74500000:
        case 0x74600000:
        case 0x74700000: return 1;
      }
    }
  }
  return 0;
}
