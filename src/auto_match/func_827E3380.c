extern int fn_827D7460();
extern int fn_827D98C0();


void fn_827E3380(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puVar5;
  
  puVar5 = (unsigned int *)(param_1 + 0x34);
  iVar4 = param_1 + 0x18;
  fn_827D7460(param_2,iVar4,*(unsigned int *)(param_1 + 0x30),puVar5,
                    (unsigned int *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 8),0);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    (**(int (***)())(param_1 + 0x40))(iVar4,0xffffffffffffffff,0,*(unsigned int *)(param_1 + 8));
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 8);
    uVar3 = fn_827D98C0(*puVar5);
    (**(int (***)())(param_1 + 0x40))(iVar4,uVar3,iVar1,uVar2);
    (**(int (***)())(*(int *)*puVar5 + 0x30))((int *)*puVar5,*(unsigned int *)(param_1 + 0x3c));
  }
  return;
}

