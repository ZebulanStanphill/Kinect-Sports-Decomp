extern int fn_8265C940();
extern int fn_8265C990();


unsigned __int64 fn_82921208(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  unsigned int *puVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  
  if (*(char *)((int)param_1 + 0xb) == '\x02') {
    iVar9 = fn_8265C940(*(int *)(*param_1 + 0x68) << 4,0x24810000);
    if (iVar9 != 0) {
      iVar10 = fn_8265C940(*(int *)(param_1[1] + 0x68) << 4,0x24810000);
      if (iVar10 != 0) {
        if ((*(int *)(param_1[1] + 0x10) != 0) && (*(int *)(*param_1 + 0x10) != 0)) {
          *(unsigned int *)(param_1[1] + 0x10) = 0;
          *(unsigned int *)(*param_1 + 0x10) = 0;
        }
        iVar1 = *param_1;
        uVar14 = 0;
        iVar12 = param_1[1];
        uVar16 = 0;
        uVar2 = *(unsigned int *)(iVar1 + 0x68);
        uVar3 = *(unsigned int *)(iVar1 + 0x6c);
        uVar4 = *(unsigned int *)(iVar12 + 0x68);
        uVar5 = *(unsigned int *)(iVar1 + 0x70);
        uVar6 = *(unsigned int *)(iVar12 + 0x6c);
        uVar7 = *(unsigned int *)(iVar12 + 0x70);
        trapWord(6,(unsigned __int64)uVar4,0);
        trapWord(6,(unsigned __int64)uVar6,0);
        trapWord(6,(unsigned __int64)uVar7,0);
        if (*(int *)(iVar12 + 0x70) != 0) {
          do {
            uVar20 = 0;
            uVar17 = 0;
            uVar15 = 0xffffffffffffffff;
            if (*(int *)(iVar12 + 0x6c) != 0) {
              do {
                uVar18 = 0;
                uVar19 = 0;
                if (((uVar15 ^ uVar20) & 0xffff0000) != 0) {
                  (**(int (***)())(*(int *)*param_1 + 4))
                            ((int *)*param_1,(uVar20 & 0xffffffff) >> 0x10,
                             (uVar14 & 0xffffffff) >> 0x10,iVar9);
                  uVar15 = uVar20;
                }
                if (*(int *)(param_1[1] + 0x68) != 0) {
                  puVar13 = (unsigned int *)(iVar10 + -4);
                  do {
                    uVar19 = uVar19 + 1;
                    puVar11 = (unsigned int *)
                              (((unsigned int)((uVar18 & 0xffffffff) >> 0xc) & 0xffff0) + iVar9);
                    uVar18 = uVar18 + (((unsigned __int64)uVar2 & 0xffff) << 0x10) / (unsigned __int64)uVar4;
                    puVar13[1] = *puVar11;
                    puVar13[2] = puVar11[1];
                    puVar13[3] = puVar11[2];
                    puVar13 = puVar13 + 4;
                    *puVar13 = puVar11[3];
                  } while (uVar19 < *(unsigned int *)(param_1[1] + 0x68));
                }
                (**(int (***)())(*(int *)param_1[1] + 8))((int *)param_1[1],uVar17,uVar16,iVar10);
                iVar12 = param_1[1];
                uVar17 = uVar17 + 1;
                uVar20 = uVar20 + (((unsigned __int64)uVar3 & 0xffff) << 0x10) / (unsigned __int64)uVar6;
              } while ((uVar17 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar12 + 0x6c));
            }
            uVar16 = uVar16 + 1;
            uVar14 = uVar14 + (((unsigned __int64)uVar5 & 0xffff) << 0x10) / (unsigned __int64)uVar7;
          } while ((uVar16 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar12 + 0x70));
        }
        fn_8265C990(iVar9,0x24810000);
        fn_8265C990(iVar10,0x24810000);
        return 0;
      }
      fn_8265C990(iVar9,0x24810000);
    }
    uVar8 = 0xffffffff8007000e;
  }
  else {
    uVar8 = 0xffffffff80004005;
  }
  return uVar8;
}

