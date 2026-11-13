extern unsigned int *auStack_30;
extern int fn_8295E918();


int fn_82940730(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int uVar5;
  unsigned int uVar6;
  unsigned int auStack_30;
  
  if ((unsigned)param_1[0xd] == 0) {
    uVar5 = 0x80004001;
  }
  else if (*(unsigned *)(param_1[0x41] + 0xc) == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    iVar2 = *(int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]);
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1[0x41] + 0xc) * uVar6 * 4 +
                               *(int *)(param_1[0x41] + 8)) * 4 + param_1[5]);
      if ((((*(unsigned *)(iVar3 + 4) != *(unsigned *)(iVar2 + 4)) ||
           (*(unsigned *)(iVar3 + 8) != *(unsigned *)(iVar2 + 8))) ||
          (*(unsigned *)(iVar3 + 0xc) != *(unsigned *)(iVar2 + 0xc))) ||
         (*(unsigned *)(iVar3 + 0x10) != *(unsigned *)(iVar2 + 0x10))) {
        uVar4 = *(unsigned int *)(*(int *)(*(int *)(iVar3 + 0x14) * 4 + param_1[5]) + 0xc) & 0x7ff;
        auStack_30 = uVar4 | 0xb0001000;
        uVar1 = *(unsigned int *)(*(int *)(*(int *)(iVar3 + 0x14) * 4 + param_1[5]) + 0x10);
        switch(uVar1) {
         case 3: auStack_30 |= 0xff0000; break;
         case 2: auStack_30 |= 0xaa0000; break;
         case 1: auStack_30 |= 0x550000; break;
         case 0: auStack_30 |= 0; break; default: break;
        }
        if (*(int *)(iVar3 + 0x18) == 0) {
          auStack_30 = auStack_30 | 0xd000000;
        }
        uVar5 = (*(int (**)())(*param_1 + 0x23c))
                          (param_1,(int)*(int *)(param_1[0x41] + 0xc) * (int)(int)uVar6,
                           *(int *)(param_1[0x41] + 0xc),&auStack_30);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    uVar5 = fn_8295E918(param_1);
  }
  return uVar5;
}

