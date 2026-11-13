extern int fn_82A29A38();
extern int fn_82AAC8C0();
extern int fn_82AAD090();


void fn_82AAF3D0(int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int * apuStack_50;
  
  if (0xffff0103 < param_2) {
    fn_82A29A38();
  }
  iVar1 = *param_1;
  puVar2 = (unsigned int *)*param_5;
  uVar3 = *(unsigned int *)(iVar1 + 4);
  uVar4 = *(unsigned int *)(iVar1 + 8);
  uVar6 = ((unsigned __int64)(uVar3 >> 0x14) & 0x700 | (unsigned __int64)uVar3 & 0x1800) >> 8;
  if (uVar6 != 3) {
    fn_82A29A38();
  }
  uVar5 = fn_82AAC8C0(uVar6,(uVar3 & 0x7ff) + 1,param_4,&apuStack_50);
  *puVar2 = 0x22;
  puVar2[1] = ((unsigned int)apuStack_50 & 0x3f) << 0x10 | 0x400000 | uVar5 & 0xffff;
  puVar2[2] = 1;
  puVar2[3] = uVar3 & 0x7ff | 0x110000;
  apuStack_50 = puVar2 + 4;
  fn_82AAD090(uVar4,0,0,param_4,&apuStack_50);
  *param_5 = apuStack_50;
  *param_1 = iVar1 + 0xc;
  return;
}

