extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B106A0();
extern int fn_82B841E8();
extern int fn_82B8A3A0();
extern unsigned int lbl_821AAD20;


void fn_82B10858(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  int iVar4;
  double dVar5;
  
  if ((param_4 & 0xffffffff) == 0) {
    if (*(int *)(param_1 + 0x150) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x11bd);
    }
  }
  else {
    fn_82AA65B0(param_1,0xe38);
  }
  param_4 = 0xf - param_4;
  if (param_3 == 0) {
    param_3 = fn_82B841E8(param_1,param_2,0,0x75,0,0);
    uVar1 = param_3 & 0xfffffffe;
    *(unsigned int *)(param_3 + 8) = *(unsigned int *)(param_3 + 8) | 0x2000000;
    *(unsigned int *)(uVar1 + 0x28) = *(unsigned int *)(param_2 + 0x24);
    *(unsigned int *)((*(unsigned int *)(param_2 + 0x24) & 0xfffffffe) + 0x24) = uVar1 + 0x28;
    *(unsigned int *)(uVar1 + 0x24) = param_2 + 0x24U | 1;
    *(unsigned int *)(param_2 + 0x24) = uVar1;
  }
  dVar5 = (double)lbl_821AAD20;
  uVar2 = fn_82B8A3A0(dVar5,dVar5,dVar5,param_1,1);
  puVar3 = (unsigned int *)fn_82AD17B0(param_1,uVar2);
  *puVar3 = (unsigned int)((((0x8da691691448U >> (param_4 & 0x7f)) >> (param_4 & 0x7f)) >> (param_4 & 0x7f)
                   & 7) << 0x19) | *puVar3 & 0xf1ffffff;
  fn_82AD1270(puVar3,0);
  *puVar3 = *puVar3 & 0xffffe01f;
  iVar4 = fn_82B106A0(param_1,param_2,puVar3,puVar3);
  puVar3 = (unsigned int *)fn_82AD17B0(param_1,iVar4);
  *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(iVar4 + 8) | 0x20;
  *puVar3 = (unsigned int)((param_4 & 0xffffffff) << 0xd) & 0x1e000 | 0x407c0000 | *puVar3 & 0xfe7c1fff;
  fn_82AD1978(param_3,puVar3);
  return;
}

