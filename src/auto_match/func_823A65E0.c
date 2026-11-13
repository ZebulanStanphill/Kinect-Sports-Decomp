extern int fn_82399BA0();
extern int fn_82536070();
extern int fn_82536590();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82193B00;


void fn_823A65E0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x2e0);
  iVar3 = fn_82399BA0();
  if (((iVar3 == 0) ||
      (iVar3 = *(int *)(param_1 + 8), *(int *)(iVar3 + 0x1b4) != *(int *)(iVar3 + 0x1b8))) ||
     (*(int *)(iVar3 + 0x1c4) != *(int *)(iVar3 + 0x1c8))) {
    if (*(int *)(iVar1 + 0x68) != 0) {
      uVar4 = 0xffffffff821b34ac;
      if (*(int *)(param_1 + 0x3c) == 0) {
        iVar3 = *(int *)(param_1 + 8);
        if (((*(int *)(iVar3 + 0xa0) == 0) || (*(int *)(*(int *)(iVar3 + 0xa0) + 0x40) != 1)) &&
           (*(int *)(iVar3 + 0xbd4) == 0)) {
          fn_82536070(0xffffffff821b34b4,0xffffffff821b34ac);
          fn_82536590(iVar3 + 0xbc8,0);
          *(unsigned int *)(iVar3 + 0xbd4) = 1;
        }
        *(unsigned int *)(param_1 + 0x3c) = 1;
      }
      iVar3 = *(int *)(param_1 + 8);
      fVar2 = *(float *)(iVar1 + 0x94) / *(float *)(iVar1 + 0x90);
      if (fVar2 <= lbl_82193B00) {
        if (fVar2 <= lbl_8218E8E8) {
          iVar1 = *(int *)(iVar3 + 0xa0);
          if (fVar2 <= lbl_821917B4) {
            if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) {
              return;
            }
            if (*(int *)(iVar3 + 0xbd4) == 0) {
              return;
            }
          }
          else {
            if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) {
              return;
            }
            if (*(int *)(iVar3 + 0xbd4) == 0) {
              return;
            }
            uVar4 = 0xffffffff821b34c4;
          }
        }
        else {
          if ((*(int *)(iVar3 + 0xa0) != 0) && (*(int *)(*(int *)(iVar3 + 0xa0) + 0x40) == 1)) {
            return;
          }
          if (*(int *)(iVar3 + 0xbd4) == 0) {
            return;
          }
          uVar4 = 0xffffffff821b34cc;
        }
      }
      else {
        if ((*(int *)(iVar3 + 0xa0) != 0) && (*(int *)(*(int *)(iVar3 + 0xa0) + 0x40) == 1)) {
          return;
        }
        if (*(int *)(iVar3 + 0xbd4) == 0) {
          return;
        }
        uVar4 = 0xffffffff821b34d4;
      }
      fn_82536070(0xffffffff821b34b4,uVar4);
    }
  }
  else if (*(int *)(param_1 + 0x3c) != 0) {
    if (((*(int *)(iVar3 + 0xa0) == 0) || (*(int *)(*(int *)(iVar3 + 0xa0) + 0x40) != 1)) &&
       (*(int *)(iVar3 + 0xbd4) != 0)) {
      fn_82536590(iVar3 + 0xbcc,0);
      *(unsigned int *)(iVar3 + 0xbd4) = 0;
    }
    *(unsigned int *)(param_1 + 0x3c) = 0;
  }
  return;
}

