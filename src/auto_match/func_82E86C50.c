extern int fn_82F02410();
extern int fn_82F15A98();


void fn_82E86C50(int param_1)

{
  unsigned int uVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  if (*(int *)(param_1 + 0x978) == 2) goto LAB_82e86dcc;
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x97c),1);
  if (*(int *)(param_1 + 0x97c) == 0) {
    return;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x984);
  if (uVar1 == 0xf) {
    bVar2 = 0;
    goto LAB_82e86da4;
  }
  if ((uVar1 & 5) == 0) {
LAB_82e86d14:
    if ((uVar1 & 10) != 0) {
LAB_82e86d4c:
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),2,2);
      uVar1 = *(unsigned int *)(param_1 + 0x984);
      if (uVar1 == 1) {
        bVar2 = 0;
      }
      else if (uVar1 == 2) {
        bVar2 = 1;
      }
      else {
        if (uVar1 != 4) {
          lVar4 = (unsigned __int64)uVar1 - 8;
          goto LAB_82e86d94;
        }
        bVar2 = 2;
      }
      goto LAB_82e86da4;
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),3,2);
    uVar3 = 1;
    bVar2 = *(char *)(param_1 + 0x980) == '\x01';
  }
  else {
    if ((uVar1 & 10) == 0) {
      if ((uVar1 & 5) == 0) goto LAB_82e86d14;
      goto LAB_82e86d4c;
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),1,2);
    uVar1 = *(unsigned int *)(param_1 + 0x984);
    if (uVar1 == 3) {
      bVar2 = 0;
    }
    else if (uVar1 == 6) {
      bVar2 = 1;
    }
    else if (uVar1 == 0xc) {
      bVar2 = 2;
    }
    else {
      lVar4 = (unsigned __int64)uVar1 - 9;
LAB_82e86d94:
      bVar2 = -(lVar4 == 0) & 3;
    }
LAB_82e86da4:
    uVar3 = 2;
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),bVar2,uVar3);
  if ((*(char *)(param_1 + 0x980) != '\x01') && (*(int *)(param_1 + 0x984) == 0)) {
    return;
  }
LAB_82e86dcc:
  fn_82F15A98(param_1,*(unsigned char *)(param_1 + 0x981),1);
  return;
}

