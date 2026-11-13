extern unsigned int *auStack_40;
extern int fn_8267C4F0();
extern int fn_82681D00();
extern int fn_82683F88();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern int fn_826B4808();
extern int fn_82705520();


unsigned __int64 fn_82708B98(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar4;
  int *piVar5;
  int aiStack_50 [4];
  unsigned char auStack_40 [64];
  
  if (*(int *)(param_1 + 0x68) != 0) {
    if ((param_2 & 0xffffffff) != 0) {
      iVar3 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
      aiStack_50[0] = fn_82694700((unsigned __int64)*(unsigned int *)(iVar3 + 0x78) + 0x254,param_2);
      *(int *)(aiStack_50[0] + 8) = *(int *)(aiStack_50[0] + 8) + 1;
      auStack_40[0] = 0;
      fn_82681D00(param_1,param_3,auStack_40);
      uVar2 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
      iVar3 = (int)param_4;
      uVar1 = fn_826B4808(uVar2,aiStack_50,auStack_40,0,iVar3 == 0);
      if ((((uVar1 & 0xff) == 0) && (iVar3 != 0)) || (iVar3 == 2)) {
        fn_82705520(param_1,aiStack_50,auStack_40,param_4);
      }
      fn_82696330(auStack_40);
      lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_50[0] + 8) - 1;
      *(int *)(aiStack_50[0] + 8) = (int)lVar4;
      if (lVar4 != 0) {
        return uVar1;
      }
      fn_826944C8(aiStack_50[0]);
      return uVar1;
    }
    piVar5 = (int *)(param_1 + 8);
    iVar3 = (**(int (***)())(*piVar5 + 0xc))(piVar5,4);
    if (iVar3 != 0) {
      fn_8267C4F0();
      uVar1 = (**(int (***)())(*piVar5 + 0xc))(piVar5,4);
      fn_82683F88(uVar1 + 0xc,0xffffffff8200e020);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar1);
      }
    }
  }
  return 0;
}

