extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826A7398();
extern int fn_8273EA00();


void fn_8273F090(int param_1)

{
  char cVar5;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar6;
  
  cVar5 = fn_82695468(param_1,0x2a);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edc0,0,0);
  }
  else {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    if ((uVar6 & 0xffffffff) != 0) {
      iVar3 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
      piVar4 = (int *)(**(int (***)())(*(int *)(iVar3 + 8) + 0xc))((int *)(iVar3 + 8),0x25);
      if (piVar4 != (int *)0x0) {
        iVar3 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
        uVar1 = (**(int (***)())(*(int *)(iVar3 + 8) + 0xc))((int *)(iVar3 + 8),10);
        uVar2 = (**(int (***)())(*piVar4 + 8))(piVar4,uVar6 + 0x30,uVar6 + 0x34,uVar1);
        if ((uVar1 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar1);
        }
        fn_8273EA00(uVar6,*(unsigned int *)(param_1 + 0x18),uVar2);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_8267C498(uVar2);
        }
        fn_8267C4F0(piVar4);
      }
    }
  }
  return;
}

