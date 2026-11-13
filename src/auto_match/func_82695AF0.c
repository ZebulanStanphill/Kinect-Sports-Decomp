extern int fn_8267BE38();
extern int fn_82681F28();
extern int fn_82682070();
extern int fn_82682298();
extern int fn_826824B0();


void fn_82695AF0(char *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int *apiStack_20 [4];
  
  cVar4 = *param_1;
  if (cVar4 == '\b') {
    if (*(int *)(param_1 + 4) != 0) {
      fn_826824B0();
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_826824B0();
    }
    return;
  }
  if ((cVar4 != '\x06') || (piVar3 = *(int **)(param_1 + 4), piVar3 == (int *)0x0)) {
    if (cVar4 != '\t') {
      return;
    }
    piVar3 = *(int **)(param_1 + 4);
  }
  if ((piVar3[2] & 0xfffffffU) != 0) {
    uVar6 = (unsigned __int64)(unsigned int)piVar3[2] - 1;
    piVar3[2] = (unsigned int)uVar6;
    if ((uVar6 & 0xfffffff) == 0) {
      (**(int (***)())*piVar3)(piVar3,0);
      uVar5 = piVar3[2];
      piVar3[2] = uVar5 & 0x8fffffff;
      if ((int)uVar5 < 0) {
        piVar1 = (int *)piVar3[1];
        uVar5 = piVar3[3];
        if (uVar5 + 1 == *piVar1) {
          fn_82681F28();
        }
        else {
          *(unsigned int *)(*(int *)((uVar5 >> 8 & 0xfffffc) + piVar1[3]) + (uVar5 & 0x3ff) * 4) =
               piVar1[4] << 1 | 1;
          *(int *)(piVar3[1] + 0x10) = piVar3[3];
        }
      }
      (**(int (***)())(*piVar3 + 4))(piVar3);
      fn_8267BE38(piVar3);
    }
    else if ((uVar6 & 0x70000000) != 0x30000000) {
      uVar5 = (unsigned int)uVar6 & 0x8fffffff;
      piVar3[2] = uVar5 | 0x30000000;
      if ((uVar6 & 0x8fffffff) >> 0x1f == 0) {
        piVar1 = (int *)piVar3[1];
        uVar5 = uVar5 | 0xb0000000;
        iVar2 = piVar1[4];
        if (iVar2 == -1) {
          iVar2 = *piVar1;
          piVar3[2] = uVar5;
          piVar3[3] = iVar2;
          *(unsigned char *)(piVar1 + 6) = *(unsigned char *)(piVar1 + 6) | 1;
          apiStack_20[0] = piVar3;
          cVar4 = fn_82682070(piVar3[1],apiStack_20);
          *(unsigned char *)(piVar3[1] + 0x18) = *(unsigned char *)(piVar3[1] + 0x18) & 0xfe;
          if (cVar4 == '\0') {
            cVar4 = fn_82682298(piVar3[1],0);
            *(unsigned char *)(piVar3[1] + 0x18) = *(unsigned char *)(piVar3[1] + 0x18) | 1;
            if ((cVar4 == '\0') ||
               (apiStack_20[0] = piVar3, cVar4 = fn_82682070(piVar3[1],apiStack_20),
               cVar4 == '\0')) {
              piVar3[3] = -1;
              piVar3[2] = piVar3[2] & 0xfffffff;
            }
            *(unsigned char *)(piVar3[1] + 0x18) = *(unsigned char *)(piVar3[1] + 0x18) & 0xfe;
          }
        }
        else {
          piVar3[2] = uVar5;
          piVar3[3] = iVar2;
          uVar5 = piVar1[4];
          iVar2 = *(int *)(*(int *)((uVar5 >> 8 & 0xfffffc) + piVar1[3]) + (uVar5 & 0x3ff) * 4);
          *(int **)(*(int *)((uVar5 >> 8 & 0xfffffc) + piVar1[3]) + (uVar5 & 0x3ff) * 4) = piVar3;
          *(int *)(piVar3[1] + 0x10) = iVar2 >> 1;
        }
      }
    }
  }
  return;
}

