extern unsigned int *auStack_50;
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_8255D1B0();
extern int fn_82573650();
extern int fn_825D4FE8();
extern int fn_8262A2F0();
extern unsigned int lbl_821955AC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CB888;
extern unsigned int ltcg_pool_0_0f;


int fn_8262A108(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iVar6;
  double dVar7;
  unsigned char auStack_50 [80];
  
  puVar2 = (unsigned int *)fn_825D4FE8(param_1,param_2,0x14);
  puVar2[600] = param_3;
  puVar2[0x259] = param_4;
  iVar6 = 0;
  puVar2[0x25a] = 0;
  *puVar2 = &lbl_821CB888;
  uVar4 = lbl_821CA460;
  *(unsigned char *)(puVar2 + 0x25d) = 0;
  puVar2[0x25c] = uVar4;
  iVar3 = fn_82520158(0xffffffff821c53d4,auStack_50,0);
  if (iVar3 == 0) {
    *(unsigned int *)(param_1 + 0x96c) = 0;
  }
  else {
    uVar4 = fn_8251F720(auStack_50,0);
    *(unsigned int *)(param_1 + 0x96c) = uVar4;
  }
  uVar1 = *(unsigned int *)(param_3 + 0x8c0);
  lVar5 = 0;
  iVar3 = param_1 + 0x50;
  do {
    lVar5 = fn_82573650((unsigned __int64)uVar1 + 0x128,(unsigned __int64)uVar1 + 0x80,param_2,
                              param_3 + 0xf0,iVar3,lVar5);
    if (lVar5 == 0) break;
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + 0xc0;
    *(int *)(param_1 + 0x968) = *(int *)(param_1 + 0x968) + 1;
  } while (iVar6 < 0xc);
  fn_8255D1B0(param_3,param_1 + 0x20,param_1 + 0x18);
  dVar7 = (double)ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x1c) = lbl_821955AC;
  fn_8262A2F0(dVar7,param_1);
  return param_1;
}

