extern unsigned int *auStack_40;
extern int fn_82681728();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82720748();


void fn_82729B90(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  int aiStack_50 [4];
  unsigned char auStack_40 [64];
  
  iVar4 = (**(int (***)())(*param_1 + 0x5c))();
  uVar3 = fn_82695520(auStack_40,param_1);
  puVar7 = (unsigned int *)(iVar4 + 8);
  uVar6 = *(int *)(iVar4 + 8) + 0x10;
  *(unsigned int *)(iVar4 + 8) = uVar6;
  if (*(unsigned int *)(iVar4 + 0x10) <= uVar6) {
    fn_826826A8(puVar7);
  }
  if (*puVar7 != 0) {
    fn_82695DA0(*puVar7,uVar3);
  }
  fn_82696330(auStack_40);
  uVar6 = *(unsigned int *)(iVar4 + 0x1c);
  uVar1 = *puVar7;
  iVar2 = *(int *)(iVar4 + 0xc);
  fn_82681728(aiStack_50,(unsigned __int64)*(unsigned int *)(iVar4 + 0x78) + 0x254,0xffffffff820111d0);
  fn_82720748(iVar4,param_1 + 0x1a,aiStack_50,1,
                    (__int64)((int)(uVar1 - iVar2) >> 4) + ((unsigned __int64)uVar6 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_50[0] + 8) - 1;
  *(int *)(aiStack_50[0] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_50[0]);
  }
  fn_82696330(*puVar7);
  uVar6 = *puVar7;
  *puVar7 = uVar6 - 0x10;
  if (uVar6 - 0x10 < *(unsigned int *)(iVar4 + 0xc)) {
    fn_826827F8(puVar7);
  }
  return;
}

