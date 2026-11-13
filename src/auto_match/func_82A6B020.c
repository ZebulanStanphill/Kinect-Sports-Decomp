extern unsigned int *auStack_60;
extern int fn_82A1DDC0();
extern int fn_82A69D38();


unsigned __int64
fn_82A6B020(int param_1,unsigned __int64 param_2,unsigned short *param_3,unsigned int *param_4,unsigned __int64 param_5,
             unsigned short param_6,unsigned __int64 param_7)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  int iVar9;
  short sVar14;
  int iVar12;
  unsigned __int64 uVar10;
  int iVar13;
  unsigned __int64 uVar11;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned short auStack_60;
  
  auStack_60 = *param_3;
  iVar17 = 0;
  puVar2 = *(unsigned short **)(param_1 + 0x2e4);
  uVar15 = 0;
  uVar16 = ((param_5 & 0xffffffff) / (unsigned __int64)*(unsigned int *)(param_1 + 0x58)) /
           (unsigned __int64)*(unsigned short *)(param_1 + 0x22);
  if (*(int *)(param_1 + 0xb0) == 1) {
    fn_82A69D38(param_1,&auStack_60,0,0,param_7);
    if (*param_3 < auStack_60) {
      auStack_60 = *param_3 & 0xfff0;
      *param_3 = auStack_60;
    }
  }
  if (*(short *)(param_1 + 0x22) != 0) {
    iVar12 = 0;
    do {
      iVar13 = iVar12 * 0x6f0;
      sVar14 = (short)iVar12 + 1;
      iVar12 = (int)sVar14;
      *(unsigned int *)(iVar13 + *(int *)(param_1 + 0x140) + 0x1ec) = (unsigned int)auStack_60;
    } while ((int)sVar14 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x188) - (unsigned __int64)*(unsigned int *)(param_1 + 0x184) & 0xffff;
    uVar10 = (unsigned __int64)auStack_60;
    if (uVar16 <= auStack_60) {
      uVar10 = uVar16;
    }
    if (0x7ffe < (int)uVar10) {
      uVar10 = 0x7fff;
    }
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
    if (*(int *)(param_1 + 0x1cc) == 0) {
      if (*(int *)(param_1 + 0x1c0) == 0) {
        iVar12 = *(int *)(param_1 + 0x100);
      }
      else {
        iVar12 = *(int *)(param_1 + 0x100) << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
      }
    }
    else {
      iVar12 = *(int *)(param_1 + 0x100) >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
    }
    auStack_60 = (unsigned short)uVar10;
    if ((uVar10 & 0xffff) == 0) {
      *param_3 = 0;
    }
    else {
      uVar3 = *param_4;
      if (*(short *)(param_1 + 0x22) != 0) {
        uVar7 = iVar12 * 3;
        iVar13 = 0;
        do {
          iVar9 = (((int)uVar7 >> 1) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * iVar13;
          iVar6 = iVar13 * 0x6f0;
          sVar14 = (short)iVar13 + 1;
          iVar13 = (int)sVar14;
          *(int *)(iVar6 + *(int *)(param_1 + 0x140) + 0x3c) =
               ((iVar9 - (*(int *)(param_1 + 0x1d4) >> 1)) + (iVar12 >> 1) +
               *(int *)(param_1 + 0x184)) * 4 + *(int *)(param_1 + 0x144);
        } while ((int)sVar14 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
      }
      if ((*(int (***)())(param_1 + 0x1ec) != (int (**)())0x0) &&
         (uVar15 = (**(int (***)())(param_1 + 0x1ec))(param_2,&auStack_60,0,0), (int)uVar15 < 0)) {
        return uVar15;
      }
      uVar1 = *(unsigned short *)(param_1 + 0x22);
      *(unsigned short *)(param_1 + 0x22) = param_6;
      uVar15 = (**(int (***)())(param_1 + 0x1e8))(param_1,uVar3,auStack_60);
      if ((int)uVar15 < 0) {
        return uVar15;
      }
      *(unsigned short *)(param_1 + 0x22) = uVar1;
      *(unsigned int *)(param_1 + 0x184) = (unsigned int)auStack_60 + *(int *)(param_1 + 0x184);
      *param_3 = auStack_60;
      uVar7 = *(unsigned int *)(param_1 + 0x1d4);
      if ((int)uVar7 <= (int)*(unsigned int *)(param_1 + 0x184)) {
        lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x184) - (unsigned __int64)uVar7;
        iVar13 = (int)uVar7 >> 1;
        iVar9 = (int)lVar8;
        *(int *)(param_1 + 0x184) = iVar9;
        *(unsigned int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) - uVar7;
        if ((lVar8 < 0) || ((int)(iVar13 + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0)) <= iVar9)) {
          return 0xffffffff80004005;
        }
        if (*(short *)(param_1 + 0x22) != 0) {
          uVar7 = iVar12 * 3;
          do {
            uVar4 = *(unsigned int *)(param_1 + 0x184);
            lVar8 = (((__int64)
                      (int)(((int)uVar7 >> 1) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0)) *
                      (__int64)iVar17 - (__int64)iVar13) + (__int64)(iVar12 >> 1) & 0x3fffffffU)
                    * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x144);
            fn_82A1DDC0(((unsigned __int64)uVar4 & 0x3fffffff) * 4 + lVar8,
                              ((unsigned __int64)uVar4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x1d4) & 0x3fffffff
                              ) * 4 + lVar8,((__int64)iVar13 - (unsigned __int64)uVar4 & 0x3fffffff) << 2)
            ;
            sVar14 = (short)iVar17 + 1;
            iVar17 = (int)sVar14;
          } while ((int)sVar14 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
        }
      }
    }
  }
  else {
    uVar16 = uVar16 & 0xfffffff0;
    auStack_60 = 0;
    if (*(short *)(param_1 + 0x22) != 0) {
      iVar17 = *(int *)(param_1 + 0x140);
      uVar5 = 0;
      do {
        iVar12 = (int)uVar5 * 0x6f0;
        iVar17 = iVar17 + iVar12;
        uVar10 = (unsigned __int64)*(unsigned int *)(iVar17 + 0x1ec);
        if (uVar16 <= *(unsigned int *)(iVar17 + 0x1ec)) {
          uVar10 = uVar16;
        }
        if (0x7ffe < uVar10) {
          uVar10 = 0x7fff;
        }
        *(short *)((int)((uVar5 & 0xffffffff) << 1) + (int)puVar2) = (short)uVar10;
        *(unsigned int *)(iVar17 + 0x3c) = (unsigned int)*(unsigned short *)(param_1 + 0xd2) * 4 + *(int *)(iVar17 + 0x38);
        iVar17 = *(int *)(param_1 + 0x140);
        uVar7 = *(unsigned int *)(iVar17 + iVar12 + 0x1ec);
        uVar11 = (unsigned __int64)uVar7;
        uVar10 = uVar11;
        if (uVar16 <= uVar11) {
          uVar10 = uVar16;
        }
        if (uVar10 < 0x7fff) {
          if (uVar16 <= uVar11) {
            uVar7 = (unsigned int)uVar16;
          }
        }
        else {
          uVar7 = 0x7fff;
        }
        uVar10 = (unsigned __int64)*(unsigned int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x164))
                 - (unsigned __int64)*(unsigned short *)(param_1 + 0xd2);
        if ((int)uVar7 <= (int)uVar10) {
          uVar10 = uVar11;
          if (uVar16 <= uVar11) {
            uVar10 = uVar16;
          }
          if (uVar10 < 0x7fff) {
            uVar10 = uVar11;
            if (uVar16 <= uVar11) {
              uVar10 = uVar16;
            }
          }
          else {
            uVar10 = 0x7fff;
          }
        }
        sVar14 = (short)uVar5 + 1;
        auStack_60 = (unsigned short)uVar10;
        uVar5 = (unsigned __int64)sVar14;
      } while ((int)sVar14 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
    }
    if ((*(int (***)())(param_1 + 0x1ec) != (int (**)())0x0) &&
       (uVar15 = (**(int (***)())(param_1 + 0x1ec))(param_2,&auStack_60,0,0), (int)uVar15 < 0)) {
      return uVar15;
    }
    uVar15 = 0;
    *param_3 = *puVar2;
    if (*(unsigned short *)(param_1 + 0x22) != 0) {
      sVar14 = 0;
      do {
        sVar14 = sVar14 + 1;
      } while ((int)sVar14 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
    }
  }
  if (*(int *)(param_1 + 0x48) == 3) {
    *(unsigned int *)(param_1 + 0x48) = 1;
  }
  return uVar15;
}

