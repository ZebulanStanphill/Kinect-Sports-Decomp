extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826A7398();
extern int fn_826B32D0();
extern int fn_8273CA78();
extern int fn_8273EA00();


void fn_8273EF40(int param_1)

{
  char cVar6;
  unsigned __int64 uVar1;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar7;
  
  cVar6 = fn_82695468(param_1,0x2a);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edc0,0,0);
  }
  else {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
      uVar1 = fn_826B32D0(*(int *)(param_1 + 0x18),*(unsigned int *)(iVar4 + 0x2a0),iVar4 + 0xc,
                                0,0xffffffffffffffff);
      fn_8273CA78(uVar7,*(unsigned int *)(param_1 + 0x18),uVar1);
      iVar4 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
      piVar5 = (int *)(**(int (***)())(*(int *)(iVar4 + 8) + 0xc))((int *)(iVar4 + 8),0x25);
      if (piVar5 != (int *)0x0) {
        iVar4 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
        uVar2 = (**(int (***)())(*(int *)(iVar4 + 8) + 0xc))((int *)(iVar4 + 8),10);
        uVar3 = (**(int (***)())(*piVar5 + 8))(piVar5,uVar7 + 0x30,uVar7 + 0x34,uVar2);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar2);
        }
        fn_8273EA00(uVar7,*(unsigned int *)(param_1 + 0x18),uVar3);
        if ((uVar3 & 0xffffffff) != 0) {
          fn_8267C498(uVar3);
        }
        fn_8267C4F0(piVar5);
      }
      if ((uVar1 & 0xffffffff) != 0) {
        fn_826824B0(uVar1);
      }
    }
  }
  return;
}

