extern int fn_82FF1488();
extern int fn_82FF53A8();
extern int fn_82FF5750();
extern int fn_82FF5B50();
extern unsigned int lbl_832642F4;


unsigned __int64 fn_83038288(int *param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  char cVar3;
  
  uVar1 = fn_82FF1488();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  if (param_1[0x16] != 0) {
    iVar2 = fn_82FF5B50(lbl_832642F4,param_1[0x16],param_1 + 3);
    if (iVar2 == 1) {
      cVar3 = fn_82FF53A8(lbl_832642F4,param_1[0x16]);
      if (cVar3 == '\0') {
        (**(int (***)())(*param_1 + 0x38))(param_1,0xe,0xffffffffffffffff);
      }
      else {
        fn_82FF5750(lbl_832642F4,param_1[0x16],param_1 + 3);
        param_1[0x16] = 0;
LAB_8303833c:
        if ((*(unsigned char *)(param_1 + 0x18) & 0x80) != 0) {
          *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_1 + 0x18) & 0x7f;
          *(unsigned char *)(param_1 + 0x36) = *(unsigned char *)(param_1 + 0x36) & 0x1f | 0x40;
        }
      }
    }
    else {
      if (iVar2 != 0x1c) {
        param_1[0x16] = 0;
      }
      if (iVar2 == 0x18) goto LAB_8303833c;
    }
  }
  if (param_1[0x17] != 0) {
    iVar2 = fn_82FF5B50(lbl_832642F4,param_1[0x17],param_1 + 3);
    if (iVar2 == 1) {
      cVar3 = fn_82FF53A8(lbl_832642F4,param_1[0x17]);
      if (cVar3 == '\0') {
        (**(int (***)())(*param_1 + 0x38))(param_1,0xe,0xffffffffffffffff);
        goto LAB_8303841c;
      }
      fn_82FF5750(lbl_832642F4,param_1[0x17],param_1 + 3);
      param_1[0x17] = 0;
    }
    else {
      if (iVar2 != 0x1c) {
        param_1[0x17] = 0;
      }
      if (iVar2 != 0x18) goto LAB_8303841c;
    }
    if ((*(unsigned char *)(param_1 + 0x18) & 0x40) != 0) {
      if ((*(unsigned char *)(param_1 + 0x36) & 0xe0) == 0) {
        *(unsigned char *)(param_1 + 0x36) = *(unsigned char *)(param_1 + 0x36) & 0x1f | 0x20;
      }
      *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_1 + 0x18) & 0xbf;
    }
  }
LAB_8303841c:
  if ((((*(unsigned char *)(param_1 + 0x36) & 0xe0) == 0) && (param_1[0x4c] != 0)) && (param_1[0x17] == 0)) {
    *(unsigned char *)(param_1 + 0x36) = *(unsigned char *)(param_1 + 0x36) & 0x1f | 0x20;
  }
  return uVar1;
}

