extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822EFBF0();
extern int fn_8236C890();
extern int fn_823831D8();
extern int fn_823D17A0();
extern int fn_8288B760();
extern unsigned int iStack_1c;
extern unsigned int lbl_832975B0;


void fn_823D16A0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) == '\0') {
    fn_823D17A0(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
    iVar3 = *(int *)(param_1 + 0x9a0);
    if ((iVar1 != 0) && (iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x168) == 0) {
        uVar2 = *(unsigned int *)(iVar3 + 0x16c);
      }
      else {
        uVar2 = fn_8288B760();
        uVar2 = uVar2 & 0xff;
      }
      if ((uVar2 != 0) && (iVar3 = fn_8236C890(param_1), iVar3 == 0)) {
        if (((*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x54)) ||
            (*(int *)(param_1 + 0x58) == 0)) && (*(int *)(param_1 + 0x54) != 0x11)) {
          puVar4 = (unsigned int *)fn_822EFBF0(auStack_20,iVar1);
          fn_823831D8((unsigned __int64)*(unsigned int *)*puVar4 + 0x5b0);
          if (iStack_1c != 0) {
            fn_822315A0();
          }
        }
      }
    }
  }
  return;
}

