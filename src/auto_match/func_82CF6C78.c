extern void __debugbreak(void);


void fn_82CF6C78(int param_1)

{

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int lVar5;
  
  iVar2 = 0;
  lVar5 = 0x23;
  do {
    iVar4 = iVar2 << 4;
    if (iVar4 <= 0x10) {
      iVar3 = 1;
    }
    else if (iVar4 <= 0x20) {
      iVar3 = 2;
    }
    else if (iVar4 <= 0x30) {
      iVar3 = 3;
    }
    else if (iVar4 <= 0x40) {
      iVar3 = 4;
    }
    else if (iVar4 <= 0x60) {
      iVar3 = 5;
    }
    else if (iVar4 <= 0x80) {
      iVar3 = 6;
    }
    else if (iVar4 <= 0xa0) {
      iVar3 = 7;
    }
    else if (iVar4 <= 0xc0) {
      iVar3 = 8;
    }
    else if (iVar4 <= 0x100) {
      iVar3 = 9;
    }
    else if (iVar4 <= 0x140) {
      iVar3 = 10;
    }
    else if (iVar4 <= 0x200) {
      iVar3 = 0xb;
    }
    else if (iVar4 <= 0x220) {
      iVar3 = 0xc;
    }
    else if (iVar4 <= 0x400) {
      iVar3 = 0xd;
    }
    else if (iVar4 <= 0x800) {
      iVar3 = 0xe;
    }
    else if (iVar4 <= 0x1000) {
      iVar3 = 0xf;
    }
    else if (iVar4 <= 0x2000) {
      iVar3 = 0x10;
    }
    else {
      __debugbreak();
      iVar3 = -1;
    }
    *(char *)(param_1 + 0xd8 + iVar2) = (char)iVar3;
    iVar2 = iVar2 + 1;
    *(int *)((iVar3 + 0x25) * 4 + param_1) = iVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar2 = 0x400;
  piVar1 = (int *)(param_1 + 0xf8);
  lVar5 = 8;
  do {
    if (iVar2 <= 0x10) {
      iVar4 = 1;
    }
    else if (iVar2 <= 0x20) {
      iVar4 = 2;
    }
    else if (iVar2 <= 0x30) {
      iVar4 = 3;
    }
    else if (iVar2 <= 0x40) {
      iVar4 = 4;
    }
    else if (iVar2 <= 0x60) {
      iVar4 = 5;
    }
    else if (iVar2 <= 0x80) {
      iVar4 = 6;
    }
    else if (iVar2 <= 0xa0) {
      iVar4 = 7;
    }
    else if (iVar2 <= 0xc0) {
      iVar4 = 8;
    }
    else if (iVar2 <= 0x100) {
      iVar4 = 9;
    }
    else if (iVar2 <= 0x140) {
      iVar4 = 10;
    }
    else if (iVar2 <= 0x200) {
      iVar4 = 0xb;
    }
    else if (iVar2 <= 0x220) {
      iVar4 = 0xc;
    }
    else if (iVar2 <= 0x400) {
      iVar4 = 0xd;
    }
    else if (iVar2 <= 0x800) {
      iVar4 = 0xe;
    }
    else if (iVar2 <= 0x1000) {
      iVar4 = 0xf;
    }
    else if (iVar2 <= 0x2000) {
      iVar4 = 0x10;
    }
    else {
      __debugbreak();
      iVar4 = -1;
    }
    piVar1 = piVar1 + 1;
    *piVar1 = iVar4;
    *(int *)((iVar4 + 0x25) * 4 + param_1) = iVar2;
    iVar2 = iVar2 + 0x400;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

