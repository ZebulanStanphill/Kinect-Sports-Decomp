#define true 1
extern unsigned int *auStack_30;
extern int fn_82B18218();


void fn_82B196F0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned char auStack_30;
  
  uVar5 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar5 & 1) != 0) || (uVar5 == 0)) {
      uVar5 = *(unsigned int *)(param_1 + 4);
      uVar2 = -(unsigned int)((uVar5 & 1) == 0) & uVar5;
      if ((*(unsigned int *)((-(unsigned int)((uVar5 & 1) == 0) & uVar5) + 0x14) & 1) == 0) {
        uVar2 = *(unsigned int *)(uVar2 + 0x14);
        uVar3 = -(unsigned int)((uVar2 & 1) == 0);
        iVar4 = (-(unsigned int)((uVar5 & 1) == 0) & uVar5) + 0x10;
      }
      else {
        uVar3 = -(unsigned int)((uVar5 & 1) == 0) & uVar5;
        if ((*(unsigned int *)(uVar2 + 0x1c) & 1) == 0) {
          uVar2 = *(unsigned int *)(uVar3 + 0x1c);
          uVar3 = -(unsigned int)((uVar2 & 1) == 0);
          iVar4 = (-(unsigned int)((uVar5 & 1) == 0) & uVar5) + 0x18;
        }
        else {
          uVar2 = *(unsigned int *)(uVar3 + 0x24);
          uVar3 = -(unsigned int)((uVar2 & 1) == 0);
          iVar4 = (-(unsigned int)((uVar5 & 1) == 0) & uVar5) + 0x20;
        }
      }
      uVar3 = uVar3 & uVar2;
      while( true ) {
        if (uVar3 == 0) {
          return;
        }
        do {
          if ((*(unsigned int *)(uVar3 + 8) >> 0x1a & 1) != 0) {
            *(unsigned int *)(uVar3 + 8) = *(unsigned int *)(uVar3 + 8) & 0xfbffffff;
          }
          uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 0x28);
        } while (((uVar3 & 1) == 0) && (uVar3 != 0));
        uVar5 = *(unsigned int *)(param_1 + 4);
        if (iVar4 == (-(unsigned int)((uVar5 & 1) == 0) & uVar5) + 0x20) break;
        if ((iVar4 == (-(unsigned int)((uVar5 & 1) == 0) & uVar5) + 0x18) ||
           ((*(unsigned int *)((-(unsigned int)((uVar5 & 1) == 0) & uVar5) + 0x1c) & 1) != 0)) {
          uVar5 = -(unsigned int)((uVar5 & 1) == 0) & uVar5;
          iVar4 = uVar5 + 0x20;
          uVar3 = *(unsigned int *)(uVar5 + 0x24);
        }
        else {
          uVar5 = -(unsigned int)((uVar5 & 1) == 0) & uVar5;
          iVar4 = uVar5 + 0x18;
          uVar3 = *(unsigned int *)(uVar5 + 0x1c);
        }
        if ((uVar3 & 1) != 0) {
          return;
        }
      }
      return;
    }
    if (*(int *)(uVar5 + 0x2c) == param_2) {
      auStack_30 = 0;
      fn_82B18218(param_1,*(unsigned int *)(uVar5 + 0x50),&auStack_30);
      if ((*(unsigned int *)(uVar5 + 0x14) & 1) == 0) {
        uVar2 = *(unsigned int *)(uVar5 + 0x14);
        iVar4 = uVar5 + 0x10;
      }
      else if ((*(unsigned int *)(uVar5 + 0x1c) & 1) == 0) {
        uVar2 = *(unsigned int *)(uVar5 + 0x1c);
        iVar4 = uVar5 + 0x18;
      }
      else {
        uVar2 = *(unsigned int *)(uVar5 + 0x24);
        iVar4 = uVar5 + 0x20;
      }
      uVar2 = -(unsigned int)((uVar2 & 1) == 0) & uVar2;
      do {
        if (uVar2 == 0) break;
        do {
          if ((*(unsigned int *)(uVar2 + 8) >> 0x1a & 1) != 0) {
            *(unsigned int *)(uVar2 + 8) = *(unsigned int *)(uVar2 + 8) & 0xfbffffff;
            *(unsigned int *)(*(int *)(uVar2 + 0x20) + 8) =
                 *(unsigned int *)(*(int *)(uVar2 + 0x20) + 8) & 0xfbffffff;
          }
          uVar2 = *(unsigned int *)((uVar2 & 0xfffffffe) + 0x28);
        } while (((uVar2 & 1) == 0) && (uVar2 != 0));
        iVar1 = uVar5 + 0x20;
        if (iVar4 == iVar1) break;
        if ((iVar4 == uVar5 + 0x18) || ((*(unsigned int *)(uVar5 + 0x1c) & 1) != 0)) {
          uVar2 = *(unsigned int *)(uVar5 + 0x24);
        }
        else {
          uVar2 = *(unsigned int *)(uVar5 + 0x1c);
          iVar1 = uVar5 + 0x18;
        }
        iVar4 = iVar1;
      } while ((uVar2 & 1) == 0);
    }
    uVar5 = *(unsigned int *)((uVar5 & 0xfffffffe) + 4);
  } while( true );
}

