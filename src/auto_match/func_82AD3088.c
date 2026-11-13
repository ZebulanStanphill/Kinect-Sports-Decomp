typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();


/* WARNING: Type propagation algorithm not settling */

void fn_82AD3088(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,unsigned int param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  uVar9 = *(unsigned int *)(param_1 + 4);
  uVar6 = 0;
  uVar1 = param_2;
  do {
    uVar5 = uVar9;
    if (((uVar5 & 1) != 0) || (uVar5 == 0)) {
      return;
    }
    uVar2 = (unsigned __int64)*(unsigned int *)(param_3 + 0x30) & 0x7ffff;
    uVar10 = uVar1;
    if (((1 << ((unsigned int)uVar2 & 0x1f) &
         *(unsigned int *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(uVar5 + 0x28))) != 0) &&
       ((param_4 == 0 ||
        (uVar2 = (unsigned __int64)*(unsigned int *)(param_4 + 0x30) & 0x7ffff,
        (1 << ((unsigned int)uVar2 & 0x1f) & *(unsigned int *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(uVar5 + 0x28))
        ) == 0)))) {
      uVar10 = uVar5;
      if (((*(unsigned int *)(uVar5 + 0x30) >> 0x18 & 1) == (param_6 & 0xff)) &&
         (((*(unsigned int *)(uVar5 + 0x4c) >> 0x16 & 1) != 0 &&
          ((*(unsigned int *)(uVar5 + 0x4c) >> 0x17 & 1) == (param_5 & 0xff))))) {
        iVar7 = *(int *)(uVar5 + 0x70);
        if ((*(unsigned int *)(iVar7 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ad3178:
          do {
            iVar7 = *(int *)(iVar7 + 0x50);
            if (iVar7 != 0) {
              if ((*(unsigned int *)(iVar7 + 0x30) & 0x400000) != 0) goto LAB_82ad3178;
            }
          } while ((*(unsigned int *)(iVar7 + 0x30) >> 0x16 & 1) != 0);
          *(int *)(uVar5 + 0x70) = iVar7;
        }
        if (*(unsigned int *)(uVar5 + 0x70) == param_2) goto LAB_82ad32e4;
      }
      *(unsigned int *)(uVar5 + 0x70) = param_2;
      puVar3 = (unsigned int *)(uVar5 & 0xfffffffe);
      *(unsigned int *)(uVar5 + 0x4c) =
           (param_5 & 1) << 0x17 | *(unsigned int *)(uVar5 + 0x4c) & 0xff7fffff | 0x400000;
      *(unsigned int *)(uVar5 + 0x30) =
           (param_6 & 1) << 0x18 | *(unsigned int *)(uVar5 + 0x30) & 0xfeffffff | 0x800000;
      uVar1 = uVar1 & 0xfffffffe;
      *(unsigned int *)(puVar3[1] & 0xfffffffe) = *puVar3;
      *(unsigned int *)(*puVar3 & 0xfffffffe) = puVar3[1];
      puVar3[1] = *(unsigned int *)(uVar1 + 4);
      *(unsigned int **)(*(unsigned int *)(uVar1 + 4) & 0xfffffffe) = puVar3 + 1;
      *puVar3 = uVar1 + 4;
      *(unsigned int **)(uVar1 + 4) = puVar3;
      if (((*(unsigned int *)(uVar5 + 0x24) & 1) == 0) &&
         (uVar9 = *(unsigned int *)(uVar5 + 0x20) & 0xfffffffe, uVar9 != 0x28)) {
        uVar1 = *(unsigned int *)(uVar9 - 0x20) >> 7 & 0x7f;
        if (((uVar1 == 0x56) || (((uVar1 == 0x57 || (uVar1 == 0x59)) || (uVar1 == 0x5a)))) ||
           ((uVar1 == 0x54 || (bVar4 = false, uVar1 == 0x55)))) {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_82ad32d8;
        uVar1 = *(unsigned int *)(uVar9 - 0x20);
        uVar2 = (unsigned __int64)*(unsigned int *)(param_3 + 0x30) & 0x7ffff;
        iVar7 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        if ((*(unsigned int *)(*(int *)(*(int *)(iVar7 + (uVar9 - 0x38)) + 0x28) +
                      ((int)(uVar2 >> 5) + 1) * 4) & 1 << ((unsigned int)uVar2 & 0x1f)) != 0)
        goto LAB_82ad32e4;
        uVar9 = *(unsigned int *)(uVar5 + 0x30) | 0x4000000;
      }
      else {
LAB_82ad32d8:
        uVar9 = *(unsigned int *)(uVar5 + 0x30) | 0x8000000;
      }
      *(unsigned int *)(uVar5 + 0x30) = uVar9;
    }
LAB_82ad32e4:
    if (uVar6 == 0) {
      uVar9 = *(unsigned int *)(param_1 + 4);
      uVar8 = -(unsigned int)((uVar9 & 1) == 0) & uVar9;
    }
    else {
      uVar9 = *(unsigned int *)((uVar6 & 0xfffffffe) + 4);
      uVar8 = -(unsigned int)((uVar9 & 1) == 0) & uVar9;
    }
    uVar1 = uVar10;
    if (uVar5 == uVar8) {
      uVar9 = *(unsigned int *)((uVar5 & 0xfffffffe) + 4);
      uVar6 = uVar5;
    }
  } while( true );
}

