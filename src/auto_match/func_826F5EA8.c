extern unsigned int *auStack_40;
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695370();
extern int fn_82696330();
extern int fn_826B44A0();


unsigned __int64 fn_826F5EA8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  char cVar4;
  int *piVar3;
  __int64 lVar5;
  int aiStack_50 [4];
  unsigned char auStack_40 [64];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
    auStack_40[0] = 0;
    aiStack_50[0] = fn_82694700((unsigned __int64)*(unsigned int *)(iVar2 + 0x78) + 0x254,param_2);
    *(int *)(aiStack_50[0] + 8) = *(int *)(aiStack_50[0] + 8) + 1;
    cVar4 = fn_826B44A0(iVar2,aiStack_50,auStack_40,0,0,0,0);
    lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
    if ((cVar4 == '\0') ||
       (piVar3 = (int *)fn_82695370(auStack_40,iVar2), piVar3 == (int *)0x0)) {
      uVar1 = 0;
    }
    else {
      (**(int (***)())(*piVar3 + 0xf0))(piVar3,param_3,param_4);
      uVar1 = 1;
    }
    fn_82696330(auStack_40);
  }
  return uVar1;
}

