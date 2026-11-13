typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDAA0();
extern int fn_82AD11D0();
extern int fn_82AD2680();
extern int fn_82B8F618();


/* WARNING: Type propagation algorithm not settling */

unsigned __int64
fn_82AD49F0(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,unsigned int param_6,
             unsigned int *param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  char cVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  
  uVar1 = *(unsigned int *)(param_2 + 0x4c);
  uVar13 = 0;
  uVar10 = *(unsigned int *)(param_1 + 4);
  uVar7 = 0;
  uVar8 = 0;
  uVar15 = param_6;
  while ((uVar6 = uVar10, (uVar6 & 1) == 0 && (uVar6 != 0))) {
    uVar14 = uVar8;
    if ((*(int *)(uVar6 + 0x2c) != param_5) &&
       (uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff,
       (*(unsigned int *)(((**(unsigned int **)(uVar6 + 0x28) & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) +
                  ((int)(uVar4 >> 5) + 1) * 4 + (int)*(unsigned int **)(uVar6 + 0x28)) &
       1 << ((unsigned int)uVar4 & 0x1f)) != 0)) {
      if (((*(unsigned int *)(uVar6 + 0x24) & 1) == 0) &&
         (uVar10 = *(unsigned int *)(uVar6 + 0x20) & 0xfffffffe, uVar10 != 0x28)) {
        uVar10 = *(unsigned int *)(uVar10 - 0x20) >> 7 & 0x7f;
        if ((uVar10 == 0x56) ||
           ((((uVar10 == 0x57 || (uVar10 == 0x59)) || (uVar10 == 0x5a)) ||
            ((uVar10 == 0x54 || (bVar5 = false, uVar10 == 0x55)))))) {
          bVar5 = true;
        }
        if (bVar5) {
          uVar13 = 1;
        }
      }
      for (piVar2 = *(int **)(uVar6 + 0xc); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff;
        puVar3 = *(unsigned int **)(*piVar2 + 0x28);
        if (((*(unsigned int *)(((*puVar3 & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) + ((int)(uVar4 >> 5) + 1) * 4
                       + (int)puVar3) & 1 << ((unsigned int)uVar4 & 0x1f)) == 0) &&
           (uVar4 = (unsigned __int64)*(unsigned int *)(*piVar2 + 0x30) & 0x7ffff,
           (1 << ((unsigned int)uVar4 & 0x1f) &
           *(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar6 + 0x28))) == 0)) {
          fn_82AD2680(param_1,uVar6);
        }
      }
      cVar9 = fn_82B8F618(uVar6,param_2);
      if (cVar9 == '\0') {
        if ((uVar1 >> 0x16 & 1) == 0) {
          puVar3 = (unsigned int *)(uVar6 & 0xfffffffe);
          param_6 = param_6 & 0xfffffffe;
          *(unsigned int *)(puVar3[1] & 0xfffffffe) = *puVar3;
          *(unsigned int *)(*puVar3 & 0xfffffffe) = puVar3[1];
          puVar3[1] = *(unsigned int *)(param_6 + 4);
          *(unsigned int **)(*(unsigned int *)(param_6 + 4) & 0xfffffffe) = puVar3 + 1;
          *puVar3 = param_6 + 4;
          *(unsigned int **)(param_6 + 4) = puVar3;
          *(int *)(uVar6 + 0x2c) = param_5;
          param_6 = uVar6;
        }
      }
      else {
        puVar3 = (unsigned int *)(uVar6 & 0xfffffffe);
        uVar10 = uVar15 & 0xfffffffe;
        *(unsigned int *)(puVar3[1] & 0xfffffffe) = *puVar3;
        *(unsigned int *)(*puVar3 & 0xfffffffe) = puVar3[1];
        puVar3[1] = *(unsigned int *)(uVar10 + 4);
        *(unsigned int **)(*(unsigned int *)(uVar10 + 4) & 0xfffffffe) = puVar3 + 1;
        *puVar3 = uVar10 + 4;
        *(unsigned int **)(uVar10 + 4) = puVar3;
        if (uVar15 == param_6) {
          param_6 = uVar6;
        }
        *(unsigned int *)(uVar6 + 0x2c) = param_4;
        uVar15 = uVar6;
      }
      if (((cVar9 != '\0') || ((*(unsigned int *)(uVar6 + 0x4c) >> 0x16 & 1) == 0)) &&
         (((*(unsigned int *)(uVar6 + 0x24) & 1) != 0 ||
          (((*(unsigned int *)(uVar6 + 0x20) & 0xfffffffe) == 0x28 ||
           (cVar9 = fn_82ABDAA0(), cVar9 == '\0')))))) {
        uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff;
        uVar10 = (unsigned int)(uVar4 << 1) & 0x1e;
        uVar10 = (*(unsigned int *)((((unsigned int)(((unsigned __int64)**(unsigned int **)(uVar6 + 0x28) & 0x7ffff) + 0x1f >> 3) &
                             0x1ffffffc) + ((int)(uVar4 >> 4) + 1) * 2) * 2 +
                           (int)*(unsigned int **)(uVar6 + 0x28)) &
                  (2 << ((int)(((unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff) << 1) + 1U & 0x1f))
                  - 1U & -1 << uVar10) >> uVar10;
        if ((uVar10 == 3) || (iVar12 = 0, uVar10 == param_3)) {
          iVar12 = 1;
        }
        for (uVar10 = *(unsigned int *)(uVar6 + 0x1c); ((uVar10 & 1) == 0 && (uVar10 != 0));
            uVar10 = *(unsigned int *)((uVar10 & 0xfffffffe) + 0x28)) {
          cVar9 = fn_82AD11D0(uVar10);
          if (cVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdd5);
          }
        }
        *(int *)(uVar6 + 0x70) = param_2;
        *(unsigned int *)(uVar6 + 0x30) = *(unsigned int *)(uVar6 + 0x30) | 0x800000;
        *(unsigned int *)(uVar6 + 0x4c) = iVar12 << 0x17 | *(unsigned int *)(uVar6 + 0x4c) & 0xff7fffff | 0x400000;
      }
      uVar14 = uVar6;
      if (uVar8 != 0) {
        *(unsigned int *)(uVar8 + 0x30) = *(unsigned int *)(uVar8 + 0x30) | 0x8000000;
      }
    }
    if (uVar7 == 0) {
      uVar10 = *(unsigned int *)(param_1 + 4);
      uVar11 = -(unsigned int)((uVar10 & 1) == 0) & uVar10;
    }
    else {
      uVar10 = *(unsigned int *)((uVar7 & 0xfffffffe) + 4);
      uVar11 = -(unsigned int)((uVar10 & 1) == 0) & uVar10;
    }
    uVar8 = uVar14;
    if (uVar6 == uVar11) {
      uVar10 = *(unsigned int *)((uVar6 & 0xfffffffe) + 4);
      uVar7 = uVar6;
    }
  }
  *param_7 = param_6;
  uVar1 = *(unsigned int *)((uVar15 & 0xfffffffe) + 4);
  *param_8 = -(unsigned int)((uVar1 & 1) == 0) & uVar1;
  return uVar13;
}

