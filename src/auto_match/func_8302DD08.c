extern int fn_82FAB9C0();
extern int fn_8302C600();
extern int fn_8302C9C8();
extern int fn_8302CB50();
extern int fn_8302CE08();
extern int fn_8302D178();
extern int fn_8302D5C8();
extern unsigned int lbl_832642E0;


unsigned __int64
fn_8302DD08(int param_1,unsigned __int64 param_2,unsigned short *param_3,unsigned int *param_4,unsigned int *param_5,
             short *param_6)

{
  unsigned char bVar1;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar5;
  char acStack_60 [96];
  
  *param_4 = 0;
  uVar3 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0xc))();
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 == 1) {
    if (*param_6 < 1) {
      return 0;
    }
    if ((*(unsigned char *)(param_6 + 1) & 0x40) == 0) {
      *param_6 = *param_6 + -1;
    }
    uVar2 = 0;
  }
  else {
    bVar1 = *(unsigned char *)(param_1 + 0x11f);
    acStack_60[0] = '\x01';
    if ((((bVar1 & 8) == 0) && (*param_5 == 0)) && ((bVar1 & 0xe0) == 0x20)) {
      iVar4 = fn_8302CE08(param_1,param_2);
      if ((iVar4 == 0) || (uVar3 = fn_8302C600(param_1), uVar3 == 0)) {
        return 0;
      }
      *(unsigned int *)(uVar3 + 4) = *(unsigned int *)(iVar4 + 4);
      *(unsigned int *)(uVar3 + 8) = *(unsigned int *)(iVar4 + 8);
      *(unsigned char *)(uVar3 + 0xc) = *(unsigned char *)(iVar4 + 0xc);
      *(unsigned short *)(uVar3 + 0xe) = *(unsigned short *)(iVar4 + 0xe);
      uVar2 = fn_8302CB50(param_1,uVar3,acStack_60,param_6);
      *param_5 = uVar3;
    }
    else if ((bVar1 & 0xe0) == 0x20) {
      if (*param_5 == 0) {
        uVar3 = fn_8302C600(param_1);
        *param_5 = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
        iVar4 = *(int *)(param_1 + 0x10c);
        if (iVar4 != 0) {
          *(unsigned short *)(uVar3 + 0xe) = *(unsigned short *)(iVar4 + 0xe);
          *(unsigned short *)(iVar4 + 0xe) = 0xffff;
        }
      }
      uVar3 = *param_5;
      uVar2 = fn_8302CB50(param_1,uVar3,acStack_60,param_6);
      if ((*(unsigned char *)(param_1 + 0x11f) & 8) == 0) {
        fn_8302D178(param_1,uVar3,param_2);
      }
    }
    else {
      uVar5 = (unsigned __int64)*param_5;
      if (uVar5 == 0) {
        uVar5 = fn_8302C9C8(param_1,uVar3 & 0xffff);
        if ((uVar5 & 0xffffffff) == 0) {
          return 0;
        }
        *param_5 = (unsigned int)uVar5;
      }
      uVar2 = fn_8302D5C8(param_1,uVar5,acStack_60,param_6);
    }
    if (acStack_60[0] == '\0') {
      return 0;
    }
    *param_3 = (short)uVar2;
  }
  uVar2 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),uVar2);
  *param_4 = (int)uVar2;
  uVar2 = fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,uVar2);
  return uVar2;
}

