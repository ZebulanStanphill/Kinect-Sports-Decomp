extern int fn_825089A0();
extern int fn_828807A0();
extern int fn_8288D718();
extern int fn_8288E040();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8288FAF8(int param_1,unsigned int param_2)

{
  int *piVar2;
  unsigned __int64 uVar1;
  int iVar3;
  int iVar4;
  unsigned int uStack0000001c;
  int aiStack_30;
  
  iVar4 = param_1 + 0x5c;
  uStack0000001c = param_2;
  fn_8288E040(&aiStack_30,iVar4,&stack0x0000001c);
  piVar2 = (int *)fn_825089A0();
  uVar1 = (**(int (***)())(*piVar2 + 0xc))();
  if (aiStack_30 == *(int *)(param_1 + 0x60)) {
    iVar3 = fn_828807A0(iVar4);
    if ((unsigned int *)(iVar3 + 0x10) != (unsigned int *)0x0) {
      *(unsigned int *)(iVar3 + 0x10) = param_2;
      *(unsigned __int64 *)(iVar3 + 0x18) = uVar1;
    }
    fn_8288D718(&aiStack_30,iVar4,iVar3,0);
  }
  else {
    *(unsigned __int64 *)(aiStack_30 + 0x18) = uVar1;
  }
  return;
}

