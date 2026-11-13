extern int fn_82A29A38();


void fn_82AACB10(int *param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned int *param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  if (param_2 != -0xfefc) {
    fn_82A29A38();
  }
  iVar1 = *param_1;
  puVar2 = (unsigned int *)*param_5;
  uVar3 = *(unsigned int *)(iVar1 + 4);
  *puVar2 = 0x47;
  *(unsigned int *)(param_4 + 0x9c) = 1;
  if ((uVar3 >> 0x14 & 0x700) != 0 || (uVar3 & 0x1800) != 0) {
    fn_82A29A38();
  }
  puVar2[1] = 0x580000;
  puVar2[2] = 0x101;
  puVar2[3] = uVar3 & 0x7ff | 0x440000;
  puVar2[4] = 0x203210;
  *param_5 = puVar2 + 5;
  *param_1 = iVar1 + 8;
  return;
}

