extern int fn_822315A0();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_8288B760();
extern int fn_828AB870();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_83297810;


void fn_82247108(int *param_1)

{
  int iVar1;
  char cVar3;
  __int64 lVar2;
  unsigned __int64 uVar4;
  int iStack_20;
  int iStack_1c;
  
  cVar3 = fn_8288B760();
  if (cVar3 != '\0') {
    iVar1 = param_1[0x21];
    lVar2 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_828AB870(lVar2 + 0x48,iVar1);
  }
  if (*(char *)(*(int *)(param_1[0xd] + 0x38) + 0x26) != '\0') {
    iVar1 = param_1[4];
    uVar4 = (unsigned __int64)lbl_83297810;
    if (uVar4 == 0) {
      uVar4 = fn_82511928();
    }
    fn_82513A80(&iStack_20,uVar4,iVar1);
    *(unsigned char *)(iStack_20 + 0x44) = 1;
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  return;
}

