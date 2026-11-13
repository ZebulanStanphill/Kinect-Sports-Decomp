extern int fn_82681728();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82720748();


void fn_827AE240(unsigned __int64 param_1,int param_2,unsigned char param_3)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int aiStack_30 [12];
  
  uVar4 = *(int *)(param_2 + 8) + 0x10;
  puVar6 = (unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_2 + 8) = uVar4;
  if (*(unsigned int *)(param_2 + 0x10) <= uVar4) {
    fn_826826A8(puVar6);
  }
  puVar1 = (unsigned char *)*puVar6;
  if (puVar1 != (unsigned char *)0x0) {
    puVar1[4] = param_3;
    *puVar1 = 2;
  }
  lVar5 = param_1 + 0x10;
  if ((param_1 & 0xffffffff) == 0) {
    lVar5 = 0;
  }
  uVar4 = *puVar6;
  iVar2 = *(int *)(param_2 + 0xc);
  uVar3 = *(unsigned int *)(param_2 + 0x1c);
  fn_82681728(aiStack_30,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff8200ebf0);
  fn_82720748(param_2,lVar5,aiStack_30,1,
                    (__int64)((int)(uVar4 - iVar2) >> 4) + ((unsigned __int64)uVar3 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_30[0] + 8) - 1;
  *(int *)(aiStack_30[0] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_30[0]);
  }
  fn_82696330(*puVar6);
  uVar4 = *puVar6;
  *puVar6 = uVar4 - 0x10;
  if (uVar4 - 0x10 < *(unsigned int *)(param_2 + 0xc)) {
    fn_826827F8(puVar6);
  }
  return;
}

