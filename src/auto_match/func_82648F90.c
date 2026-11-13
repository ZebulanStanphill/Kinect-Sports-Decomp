extern int fn_82645110();
extern int fn_82647258();
extern int fn_8264F660();


void fn_82648F90(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  
  iVar1 = *param_1;
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      iVar5 = param_1[1];
      if (iVar5 != 8) {
        if (iVar5 == 9) {
          iVar5 = param_1[param_1[0x25] + 6];
          if ((param_1[6] == 0) || ((*(unsigned char *)(param_1 + 5) & 0x80) != 0)) {
            *(unsigned char *)(param_1 + 5) = *(unsigned char *)(param_1 + 5) & 0x7f;
            *(unsigned int *)(iVar5 + 0x10) = 0xfffffeed;
            *(unsigned int *)(iVar5 + 0x14) = 0xfffffeed;
          }
          else {
            uVar2 = *(unsigned int *)(iVar1 + 0x30);
            if (*(unsigned int *)(iVar1 + 0x38) < uVar2) {
              uVar2 = fn_82645110(iVar1);
            }
            *(unsigned int *)(uVar2 + 4) = 0xc0013d00;
            uVar3 = ((iVar5 + 0x10U >> 0x14) + 0x200 & 0x1000) + (iVar5 + 0x10U & 0x1fffffff) | 2;
            *(unsigned int *)(uVar2 + 8) = uVar3;
            *(unsigned int *)(uVar2 + 0xc) = 0xfffffeed;
            uVar4 = ((iVar5 + 0x14U >> 0x14) + 0x200 & 0x1000) + (iVar5 + 0x14U & 0x1fffffff) | 2;
            *(unsigned int *)(uVar2 + 0x10) = 0xc0013d00;
            *(unsigned int *)(uVar2 + 0x14) = uVar4;
            *(unsigned int *)(uVar2 + 0x18) = 0xfffffeed;
            *(unsigned int *)(uVar2 + 0x1c) = 0xc0043c00;
            *(unsigned int *)(uVar2 + 0x20) = 0x13;
            *(unsigned int *)(uVar2 + 0x24) = uVar3;
            *(unsigned int *)(uVar2 + 0x28) = 0xfffffeed;
            *(unsigned int *)(uVar2 + 0x2c) = 0xffffffff;
            *(unsigned int *)(uVar2 + 0x30) = 0x100;
            *(unsigned int *)(uVar2 + 0x34) = 0xc0043c00;
            *(unsigned int *)(uVar2 + 0x38) = 0x13;
            *(unsigned int *)(uVar2 + 0x3c) = uVar4;
            *(unsigned int *)(uVar2 + 0x40) = 0xfffffeed;
            *(unsigned int *)(uVar2 + 0x44) = 0xffffffff;
            *(unsigned int *)(uVar2 + 0x48) = 0x100;
            *(unsigned int **)(iVar1 + 0x30) = (unsigned int *)(uVar2 + 0x48);
          }
          fn_8264F660(iVar1,param_1,0);
        }
        else if (iVar5 == 10) {
          if ((*(unsigned char *)(iVar1 + 0x2ac0) & 0x80) != 0) {
            fn_82647258(iVar1);
          }
          uVar2 = *(unsigned int *)(iVar1 + 0x30);
          if (*(unsigned int *)(iVar1 + 0x38) < uVar2) {
            uVar2 = fn_82645110(iVar1);
          }
          *(unsigned int *)(uVar2 + 4) = 0xc0015a00;
          *(unsigned int *)(uVar2 + 8) = 0x1a;
          *(unsigned int *)(uVar2 + 0xc) =
               (((unsigned int)param_1[7] >> 0x14) + 0x200 & 0x1000) + (param_1[7] & 0x1ffffffeU) | 1;
          *(unsigned int **)(iVar1 + 0x30) = (unsigned int *)(uVar2 + 0xc);
          *(unsigned char *)(iVar1 + 0x2abf) = *(unsigned char *)(iVar1 + 0x2abf) & 0x7f;
        }
        *(unsigned char *)(param_1 + 4) = 1;
      }
      param_1[6] = *(int *)(iVar1 + 0x2a9c);
      *(unsigned char *)(param_1 + 5) = *(unsigned char *)(param_1 + 5) | 0x40;
    }
  }
  else {
    if ((*(unsigned char *)(iVar1 + 0x2abc) & 0x20) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x327c);
    }
    param_1[0x25] = iVar5;
    if (param_1[1] == 9) {
      fn_8264F660(iVar1,param_1,1);
    }
    else if (param_1[1] == 10) {
      if ((*(unsigned char *)(iVar1 + 0x2ac0) & 0x80) != 0) {
        fn_82647258(iVar1);
      }
      uVar2 = *(unsigned int *)(iVar1 + 0x30);
      if (*(unsigned int *)(iVar1 + 0x38) < uVar2) {
        uVar2 = fn_82645110(iVar1);
      }
      *(unsigned int *)(uVar2 + 4) = 0xc0004600;
      *(unsigned int *)(uVar2 + 8) = 0x19;
      *(unsigned int **)(iVar1 + 0x30) = (unsigned int *)(uVar2 + 8);
      *(unsigned char *)(iVar1 + 0x2abf) = *(unsigned char *)(iVar1 + 0x2abf) | 0x80;
    }
    *(unsigned char *)(param_1 + 4) = 2;
  }
  return;
}

