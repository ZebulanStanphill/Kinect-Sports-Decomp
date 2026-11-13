extern int fn_82681728();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_82696330();
extern int fn_82720748();


void fn_8271ABA0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  int aiStack_30 [12];
  
  uVar3 = *(int *)(param_2 + 8) + 0x10;
  puVar5 = (unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_2 + 8) = uVar3;
  if (*(unsigned int *)(param_2 + 0x10) <= uVar3) {
    fn_826826A8(puVar5);
  }
  if (*puVar5 != 0) {
    fn_82695520(*puVar5,param_3);
  }
  lVar4 = param_1 + 0x10;
  if ((param_1 & 0xffffffff) == 0) {
    lVar4 = 0;
  }
  uVar3 = *puVar5;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(unsigned int *)(param_2 + 0x1c);
  fn_82681728(aiStack_30,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff8200eb44);
  fn_82720748(param_2,lVar4,aiStack_30,1,
                    (__int64)((int)(uVar3 - iVar1) >> 4) + ((unsigned __int64)uVar2 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_30[0] + 8) - 1;
  *(int *)(aiStack_30[0] + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8(aiStack_30[0]);
  }
  fn_82696330(*puVar5);
  uVar3 = *puVar5;
  *puVar5 = uVar3 - 0x10;
  if (uVar3 - 0x10 < *(unsigned int *)(param_2 + 0xc)) {
    fn_826827F8(puVar5);
  }
  return;
}

