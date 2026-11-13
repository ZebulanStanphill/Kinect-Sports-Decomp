extern int fn_82A29A38();
extern unsigned int lbl_83160520;


void fn_82AAC9C0(unsigned __int64 param_1,unsigned int param_2,int *param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  
  puVar1 = (unsigned int *)*param_3;
  if ((param_2 != 0x34) && (param_2 != 7)) {
    fn_82A29A38();
  }
  param_2 = param_2 & 0xffff;
  if ((param_1 & 0xf000000) == 0xd000000) {
    param_2 = param_2 | 0x10000;
  }
  param_1 = param_1 & 0xff0000;
  *puVar1 = param_2;
  puVar6 = puVar1 + 1;
  if (param_1 == 0xe40000) {
    *puVar6 = 0x40020;
  }
  else {
    iVar2 = *(int *)(&lbl_83160520 + ((unsigned int)((param_1 >> 0x12) << 2) & 0xc));
    uVar3 = *(unsigned int *)(&lbl_83160520 + ((unsigned int)param_1 >> 0xe & 0xc));
    iVar4 = *(int *)(&lbl_83160520 + ((unsigned int)((param_1 >> 0x14) << 2) & 0xc));
    iVar5 = *(int *)(&lbl_83160520 + ((unsigned int)(param_1 >> 0x14) & 0xc));
    *puVar6 = 0x440020;
    puVar6 = puVar1 + 2;
    *puVar6 = iVar5 << 0xc | iVar4 << 8 | iVar2 << 4 | uVar3;
  }
  puVar6[1] = 0x410000;
  puVar6[2] = 0x4444;
  *param_3 = (int)(puVar6 + 3);
  return;
}

