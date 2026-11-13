extern unsigned int *auStack_30;
extern int fn_8225F160();
extern int fn_82350888();
extern int fn_82355ED8();
extern int fn_82460070();
extern int fn_8249ABC0();
extern int fn_82534820();
extern int fn_82536590();
extern unsigned int lbl_832765BC;


void fn_82356A48(int param_1,int param_2,int param_3)

{
  char cVar2;
  int iVar1;
  unsigned int auStack_30;
  
  if (*(int *)(param_1 + 8) != 9) {
    return;
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      *(unsigned int *)(param_1 + 0x34c) = 0;
      goto LAB_82356b1c;
    }
    if (*(int *)(param_1 + 0x37c) == 0) {
      if (lbl_832765BC != 0) {
        auStack_30 = 0;
        fn_82460070(lbl_832765BC,&auStack_30);
        cVar2 = fn_82534820(auStack_30);
        if (cVar2 != '\0') {
          fn_82536590(&auStack_30,0);
        }
      }
      *(unsigned int *)(param_1 + 0x37c) = 1;
    }
    iVar1 = fn_8225F160();
    if ((*(int *)(param_1 + 0x34c) + 1 < *(int *)(iVar1 + 0x5c)) &&
       (iVar1 = fn_8225F160(), *(int *)(iVar1 + 8) != 1)) {
      *(int *)(param_1 + 0x34c) = *(int *)(param_1 + 0x34c) + 1;
      goto LAB_82356b1c;
    }
    *(unsigned int *)(param_1 + 0x34c) = 0;
    iVar1 = *(int *)(param_1 + 0x344) + 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x348);
  }
  *(int *)(param_1 + 0x344) = iVar1;
LAB_82356b1c:
  iVar1 = fn_8249ABC0();
  *(unsigned int *)(iVar1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x348) <= *(int *)(param_1 + 0x344)) {
    if (*(int *)(param_1 + 8) == 0xd) {
      return;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = 0xd;
    fn_82355ED8(param_1);
    return;
  }
  if (((lbl_832765BC == 0) || (iVar1 = fn_8225F160(), *(int *)(iVar1 + 8) != 2)) &&
     ((*(int **)(param_1 + 0x18) == (int *)0x0 ||
      (iVar1 = (**(int (***)())(**(int **)(param_1 + 0x18) + 0x58))(), iVar1 == 0)))) {
    if ((*(int *)(param_1 + 0x3a0) == 0) && (iVar1 = fn_8225F160(), *(int *)(iVar1 + 8) != 2))
    {
      fn_82350888(param_1,6);
      return;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x3a4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0xb) {
    *(unsigned int *)(param_1 + 0x39c) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = 0xb;
  }
  return;
}

