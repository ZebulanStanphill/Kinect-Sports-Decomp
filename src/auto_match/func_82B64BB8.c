extern int fn_8265C9E0();
extern int fn_8265CA20();


unsigned __int64 fn_82B64BB8(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  unsigned int *puVar12;
  int iVar13;
  unsigned int *puVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned __int64 uVar21;
  
  if (*(char *)((int)param_1 + 0xb) == '\x02') {
    lVar10 = ((unsigned __int64)*(unsigned int *)(*param_1 + 0x68) & 0xfffffff) << 4;
    if (0xfffffff < *(unsigned int *)(*param_1 + 0x68)) {
      lVar10 = -1;
    }
    iVar11 = fn_8265C9E0(lVar10);
    if (iVar11 != 0) {
      lVar10 = ((unsigned __int64)*(unsigned int *)(param_1[1] + 0x68) & 0xfffffff) << 4;
      if (0xfffffff < *(unsigned int *)(param_1[1] + 0x68)) {
        lVar10 = -1;
      }
      puVar12 = (unsigned int *)fn_8265C9E0(lVar10);
      if (puVar12 != (unsigned int *)0x0) {
        if ((*(int *)(param_1[1] + 0x10) != 0) && (*(int *)(*param_1 + 0x10) != 0)) {
          *(unsigned int *)(param_1[1] + 0x10) = 0;
          *(unsigned int *)(*param_1 + 0x10) = 0;
        }
        iVar1 = *param_1;
        uVar15 = 0;
        iVar13 = param_1[1];
        uVar17 = 0;
        uVar2 = *(unsigned int *)(iVar1 + 0x68);
        uVar3 = *(unsigned int *)(iVar1 + 0x6c);
        uVar4 = *(unsigned int *)(iVar13 + 0x68);
        uVar5 = *(unsigned int *)(iVar1 + 0x70);
        uVar6 = *(unsigned int *)(iVar13 + 0x6c);
        uVar7 = *(unsigned int *)(iVar13 + 0x70);
        trapWord(6,(unsigned __int64)uVar4,0);
        trapWord(6,(unsigned __int64)uVar6,0);
        trapWord(6,(unsigned __int64)uVar7,0);
        if (*(int *)(iVar13 + 0x70) != 0) {
          do {
            uVar21 = 0;
            uVar18 = 0;
            uVar16 = 0xffffffffffffffff;
            if (*(int *)(iVar13 + 0x6c) != 0) {
              do {
                uVar19 = 0;
                uVar20 = 0;
                if (((uVar16 ^ uVar21) & 0xffff0000) != 0) {
                  (**(int (***)())(*(int *)*param_1 + 4))
                            ((int *)*param_1,(uVar21 & 0xffffffff) >> 0x10,
                             (uVar15 & 0xffffffff) >> 0x10,iVar11);
                  uVar16 = uVar21;
                }
                puVar14 = puVar12;
                if (*(int *)(param_1[1] + 0x68) != 0) {
                  do {
                    uVar8 = (unsigned int)((uVar19 & 0xffffffff) >> 0xc) & 0xffff0;
                    uVar20 = uVar20 + 1;
                    iVar1 = uVar8 + iVar11;
                    uVar19 = uVar19 + (((unsigned __int64)uVar2 & 0xffff) << 0x10) / (unsigned __int64)uVar4;
                    *puVar14 = *(unsigned int *)(uVar8 + iVar11);
                    puVar14[1] = *(unsigned int *)(iVar1 + 4);
                    puVar14[2] = *(unsigned int *)(iVar1 + 8);
                    puVar14[3] = *(unsigned int *)(iVar1 + 0xc);
                    puVar14 = puVar14 + 4;
                  } while (uVar20 < *(unsigned int *)(param_1[1] + 0x68));
                }
                (**(int (***)())(*(int *)param_1[1] + 8))((int *)param_1[1],uVar18,uVar17,puVar12);
                iVar13 = param_1[1];
                uVar18 = uVar18 + 1;
                uVar21 = uVar21 + (((unsigned __int64)uVar3 & 0xffff) << 0x10) / (unsigned __int64)uVar6;
              } while ((uVar18 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar13 + 0x6c));
            }
            uVar17 = uVar17 + 1;
            uVar15 = uVar15 + (((unsigned __int64)uVar5 & 0xffff) << 0x10) / (unsigned __int64)uVar7;
          } while ((uVar17 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar13 + 0x70));
        }
        fn_8265CA20(iVar11);
        fn_8265CA20(puVar12);
        return 0;
      }
      fn_8265CA20(iVar11);
    }
    uVar9 = 0xffffffff8007000e;
  }
  else {
    uVar9 = 0xffffffff80004005;
  }
  return uVar9;
}

