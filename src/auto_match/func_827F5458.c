typedef unsigned char bool;
extern int fn_827F3A60();
extern int fn_827F3BA8();
extern int fn_827F3BD8();
extern int fn_827F3C28();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern int fn_827F3EB0();
extern int fn_827F69E0();
extern int fn_82F68CC0();


void fn_827F5458(int *param_1)

{
  bool bVar1;
  unsigned short uVar2;
  short sVar9;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int (**pcVar10)();
  
  sVar9 = fn_827F3C30();
  if (sVar9 == 1) {
    fn_827F3C48(param_1,0);
    iVar7 = fn_827F3BD8();
    iVar8 = fn_827F3BA8(param_1);
    if (iVar8 == iVar7) {
      return;
    }
    fn_827F3C48(param_1,0);
    uVar3 = fn_827F3A60();
    fn_827F3C48(param_1,0);
    uVar4 = fn_827F3BD8();
    uVar5 = fn_827F3BA8(param_1);
    fn_82F68CC0(uVar5,uVar4,uVar3);
    return;
  }
  iVar7 = fn_827F3EB0(param_1);
  if (iVar7 != 0) {
    fn_827F3C48(param_1,1);
    uVar3 = fn_827F3C28();
    lVar6 = fn_827F69E0(uVar3,0);
    *(unsigned char *)(param_1 + 0x37) = *(unsigned char *)(param_1 + 0x37) & 0xbf | (lVar6 != 0) << 6;
  }
  uVar2 = *(unsigned short *)(param_1 + 8);
  if (uVar2 == 0) {
    if (param_1[0x10] == 0) {
      if (param_1[0xf] == 0) {
        pcVar10 = *(int (***)())(*param_1 + 0x1c);
      }
      else {
        pcVar10 = *(int (***)())(*param_1 + 0x20);
      }
    }
    else if (param_1[0xf] == 0) {
      pcVar10 = *(int (***)())(*param_1 + 0x14);
    }
    else {
      pcVar10 = *(int (***)())(*param_1 + 0x18);
    }
    goto LAB_827f56a0;
  }
  if (uVar2 == 1) {
    if (param_1[0x10] != 0) {
      if (param_1[0xf] == 0) {
        pcVar10 = *(int (***)())(*param_1 + 0x24);
      }
      else {
        pcVar10 = *(int (***)())(*param_1 + 0x28);
      }
      goto LAB_827f56a0;
    }
    bVar1 = param_1[0xf] == 0;
    iVar7 = *param_1;
  }
  else {
    if (uVar2 < 3) {
      iVar7 = *param_1;
      if ((*(unsigned char *)(param_1 + 0x37) & 0x40) == 0) {
        if (param_1[0xf] != 0) {
          pcVar10 = *(int (***)())(iVar7 + 0x40);
        }
        else {
          pcVar10 = *(int (***)())(iVar7 + 0x3c);
        }
      }
      else if (param_1[0xf] != 0) {
        pcVar10 = *(int (***)())(iVar7 + 0x38);
      }
      else {
        pcVar10 = *(int (***)())(iVar7 + 0x34);
      }
      goto LAB_827f56a0;
    }
    if (uVar2 != 3) {
      if (uVar2 < 5) {
        if (param_1[0xf] == 0) {
          pcVar10 = *(int (***)())(*param_1 + 0x4c);
        }
        else {
          pcVar10 = *(int (***)())(*param_1 + 0x50);
        }
      }
      else {
        if (uVar2 != 5) {
          return;
        }
        if (param_1[0xf] == 0) {
          pcVar10 = *(int (***)())(*param_1 + 0x54);
        }
        else {
          pcVar10 = *(int (***)())(*param_1 + 0x58);
        }
      }
      goto LAB_827f56a0;
    }
    bVar1 = param_1[0xf] == 0;
    iVar7 = *param_1;
    if ((*(unsigned char *)(param_1 + 0x37) & 0x40) == 0) {
      if (bVar1) {
        pcVar10 = *(int (***)())(iVar7 + 0x44);
      }
      else {
        pcVar10 = *(int (***)())(iVar7 + 0x48);
      }
      goto LAB_827f56a0;
    }
  }
  if (bVar1) {
    pcVar10 = *(int (***)())(iVar7 + 0x2c);
  }
  else {
    pcVar10 = *(int (***)())(iVar7 + 0x30);
  }
LAB_827f56a0:
  (*pcVar10)(param_1);
  return;
}

