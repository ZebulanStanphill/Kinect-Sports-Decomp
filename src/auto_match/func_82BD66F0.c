typedef unsigned char bool;
#define true 1
extern int fn_82F68CC0();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BD66F0(__int64 param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  int *piVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int *piVar15;
  char in_RESERVE;
  unsigned char in_cr0;
  
  lVar10 = param_1 + 0x54;
  do {
    puVar11 = (unsigned int *)lVar10;
    uVar1 = *puVar11;
    if (uVar1 != 1) {
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar10);
        *puVar11 = uVar4;
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(2,0,lVar10);
      *puVar11 = uVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  uVar13 = 0;
  if (((uVar1 == 1) && (iVar5 = (int)param_1, uVar13 = param_3, *(int *)(iVar5 + 0xc) != 0)) &&
     (bVar6 = (*(unsigned int *)(iVar5 + 0xd0) & 0xf0000) == 0, in_cr0 = bVar6 << 1, !bVar6)) {
    param_1 = param_1 + 0x50;
    uVar13 = 0;
    uVar7 = KfAcquireSpinLock(param_1);
    piVar15 = *(int **)(iVar5 + 0x40);
    piVar12 = (int *)(iVar5 + 0x40);
    for (uVar14 = 0; (piVar15 != (int *)0x0 && ((uVar14 & 0xffffffff) < (param_3 & 0xffffffff)));
        uVar14 = ((unsigned __int64)*(unsigned int *)(iVar2 + 0xc) - (unsigned __int64)*(unsigned int *)(iVar2 + 4)) + uVar14) {
      iVar2 = *piVar15;
      piVar15 = (int *)piVar15[1];
    }
    KfReleaseSpinLock(param_1,uVar7);
    if ((param_3 & 0xffffffff) <= (uVar14 & 0xffffffff)) {
      piVar15 = (int *)*piVar12;
      while (((piVar15 != (int *)0x0 && ((uVar13 & 0xffffffff) < (param_3 & 0xffffffff))) &&
             (*puVar11 != 3))) {
        iVar2 = *piVar15;
        uVar8 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc) - (unsigned __int64)*(unsigned int *)(iVar2 + 4);
        uVar14 = param_3 - uVar13;
        if ((uVar8 & 0xffffffff) <= (param_3 - uVar13 & 0xffffffff)) {
          uVar14 = uVar8;
        }
        fn_82F68CC0((unsigned __int64)*(unsigned int *)(iVar2 + 8) + (unsigned __int64)*(unsigned int *)(iVar2 + 4),
                     uVar13 + param_2,uVar14);
        iVar2 = *piVar15;
        uVar9 = *(unsigned int *)(iVar2 + 4) + uVar14;
        uVar8 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc);
        if ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 0xc)) {
          uVar8 = uVar9;
        }
        *(int *)(iVar2 + 4) = (int)uVar8;
        if ((uVar8 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(*piVar15 + 0xc)) {
          uVar7 = KfAcquireSpinLock(param_1);
          piVar3 = (int *)*piVar12;
          if (piVar3 != (int *)0x0) {
            if (piVar3 == *(int **)(iVar5 + 0x44)) {
              *(unsigned int *)(iVar5 + 0x44) = 0;
            }
            *piVar12 = piVar3[1];
            piVar3[1] = 0;
          }
          if (piVar15 == piVar3) {
            piVar15[1] = 0;
            if (*(int *)(iVar5 + 0x4c) == 0) {
              *(int **)(iVar5 + 0x48) = piVar15;
            }
            else {
              *(int **)(*(int *)(iVar5 + 0x4c) + 4) = piVar15;
            }
            *(int **)(iVar5 + 0x4c) = piVar15;
          }
          KfReleaseSpinLock(param_1,uVar7);
          piVar15 = (int *)*piVar12;
        }
        uVar13 = uVar14 + uVar13;
      }
    }
  }
  do {
    uVar14 = (unsigned __int64)*puVar11;
    if (*puVar11 != 3) {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar14,0,lVar10);
        *puVar11 = uVar1;
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(0,0,lVar10);
      *puVar11 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  do {
    if ((int)uVar14 == 3) {
      return uVar13;
    }
    do {
      uVar1 = *puVar11;
      if (uVar1 != 2) {
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar10);
          *puVar11 = uVar4;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(1,0,lVar10);
        *puVar11 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 == 2) {
      return uVar13;
    }
    if (uVar1 == 1) {
      return uVar13;
    }
    if (uVar1 == 0) {
      return uVar13;
    }
    do {
      uVar14 = (unsigned __int64)*puVar11;
      if (*puVar11 != 3) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar14,0,lVar10);
          *puVar11 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(0,0,lVar10);
        *puVar11 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  } while( true );
}

