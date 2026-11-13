extern unsigned int *auStack_90;
extern int fn_82A75588();
extern int fn_82C30370();
extern int fn_82C304E0();
extern int fn_82C36130();


unsigned __int64 fn_82C36300(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  __int64 lVar4;
  unsigned int uVar5;
  short sVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  int iVar15;
  unsigned __int64 uVar16;
  unsigned int auStack_90;
  
  sVar1 = *(short *)(param_3 + 0x76);
  sVar2 = *(short *)(param_1 + 0x2d8);
  psVar3 = *(short **)(*(int *)(param_3 + 0x1a8) + 0xc);
  uVar16 = 0;
  sVar6 = *psVar3;
  uVar5 = 0;
  uVar12 = 0;
  puVar11 = (unsigned int *)(sVar6 * 4 + *(int *)(param_3 + 0x38));
  if ((((*(int *)(param_1 + 0x100) <= (int)sVar6) ||
       (*(int *)(param_1 + 0x100) < (int)*psVar3 + (int)sVar1)) || (4 < *(short *)(param_3 + 0xb6)))
     || (*(short *)(param_3 + 0xb6) < 1)) {
    return 0xffffffff80040002;
  }
  if (*(unsigned int *)(param_2 + 0x48) < 0xb) {
    switch(*(unsigned int *)(param_2 + 0x48)) {
    case 0:
      *(unsigned int *)(param_2 + 0x48) = 2;
    case 2:
      uVar16 = fn_82C30370(param_2 + 0xe0,1,&auStack_90);
      if ((int)uVar16 < 0) {
        return uVar16;
      }
      if (auStack_90 == 1) {
        *(unsigned int *)(param_2 + 0x48) = 3;
        *(unsigned int *)(param_3 + 0x1c8) = 0;
      }
      else {
        *(unsigned int *)(param_2 + 0x48) = 9;
        *(unsigned int *)(param_3 + 0x1c8) = 0xffffffff;
      }
    case 3:
      if (*(int *)(param_3 + 0x1c8) != -1) {
        lVar4 = 0;
        if (1 < ((__int64)sVar1 & 0xffffffffU)) {
          do {
            lVar4 = lVar4 + 1;
          } while (1 < (unsigned int)(int)sVar1 >> ((unsigned int)lVar4 & 0x3f));
        }
        uVar16 = fn_82C30370(param_2 + 0xe0,lVar4,&auStack_90);
        if ((int)uVar16 < 0) {
          return uVar16;
        }
        *(unsigned int *)(param_3 + 0x1c8) = auStack_90;
      }
      *(unsigned int *)(param_2 + 0x48) = 9;
      goto LAB_82c36490;
    default:
      break;
    case 9:
      goto LAB_82c36490;
    case 10:
      goto LAB_82c364d4;
    }
  }
  goto LAB_82c36844;
LAB_82c36490:
  if (*(int *)(param_1 + 0xc0) == 1) {
    uVar16 = fn_82C30370(param_2 + 0xe0,*(unsigned short *)(param_1 + 0x6e),&auStack_90);
    if ((int)uVar16 < 0) {
      return uVar16;
    }
    *(unsigned int *)(param_3 + 0xbc) = auStack_90 << 6;
  }
  *(unsigned int *)(param_2 + 0x50) = 0;
  *(unsigned int *)(param_2 + 0x48) = 10;
  *(unsigned short *)(param_1 + 0xca) = 0;
LAB_82c364d4:
  if ((*(int *)(param_1 + 0xc0) == 1) && (*(short *)(param_1 + 0xca) == 0)) {
    if (*(int *)(param_1 + 0xb8) == 1) {
      if (*(int *)(param_2 + 0x50) == 0) {
        uVar16 = fn_82C30370(param_2 + 0xe0,1,&auStack_90);
        if ((int)uVar16 < 0) {
          return uVar16;
        }
        *(unsigned int *)(param_2 + 0x50) = 1;
        *(unsigned int *)(param_2 + 0x54) = auStack_90;
      }
      else if (*(int *)(param_2 + 0x50) != 1) goto LAB_82c365dc;
      uVar16 = fn_82C30370(param_2 + 0xe0,*(unsigned short *)(param_1 + 0x6e),&auStack_90);
      if ((int)uVar16 < 0) {
        return uVar16;
      }
      uVar10 = 1 << (*(unsigned short *)(param_1 + 0x6e) & 0x3f);
      auStack_90 =
           *(int *)(param_2 + 0x54) << (*(unsigned short *)(param_1 + 0x6e) & 0x3f) | auStack_90;
      if ((uVar10 & auStack_90) != 0) {
        auStack_90 = auStack_90 | ~(uVar10 - 1);
      }
      *puVar11 = auStack_90;
    }
    else if (*(int *)(param_1 + 0xb8) == 0) {
      uVar16 = fn_82C30370(param_2 + 0xe0,*(unsigned short *)(param_1 + 0x6e),&auStack_90);
      if ((int)uVar16 < 0) {
        return uVar16;
      }
      uVar10 = 1 << (*(unsigned short *)(param_1 + 0x6e) - 1 & 0x3f);
      if ((uVar10 & auStack_90) != 0) {
        auStack_90 = auStack_90 | ~(uVar10 - 1);
      }
      *puVar11 = auStack_90;
    }
LAB_82c365dc:
    *(short *)(param_1 + 0xca) = *(short *)(param_1 + 0xca) + 1;
  }
  sVar6 = *(short *)(param_1 + 0xca);
  while ((int)sVar6 < (int)sVar1) {
    uVar10 = *(unsigned int *)(param_2 + 0x4c);
    if (uVar10 < 4) {
      if (uVar10 == 1) {
LAB_82c36644:
        uVar16 = fn_82C30370(param_2 + 0xe0,5,&auStack_90);
        if ((int)uVar16 < 0) {
          return uVar16;
        }
        if (0x20 < (int)(auStack_90 + 1)) {
          return 0xffffffff80040002;
        }
        *(unsigned int *)(param_2 + 0xcc) = auStack_90 + 1;
        *(unsigned int *)(param_2 + 0x4c) = 2;
LAB_82c36678:
        uVar5 = *(unsigned int *)(param_2 + 0xcc);
        if (0x18 < uVar5) {
          uVar16 = fn_82A75588(param_2 + 0xe0);
          if ((int)uVar16 < 0) {
            return uVar16;
          }
          uVar16 = fn_82C30370(param_2 + 0xe0,(unsigned __int64)*(unsigned int *)(param_2 + 0xcc) - 0x18,
                                 &auStack_90);
          if ((int)uVar16 < 0) {
            return uVar16;
          }
          uVar5 = 0x18;
          *(unsigned int *)(param_2 + 200) = auStack_90 * 0x1000000 + *(int *)(param_2 + 200);
        }
        uVar16 = fn_82C30370(param_2 + 0xe0,uVar5,&auStack_90);
        if ((int)uVar16 < 0) {
          return uVar16;
        }
        *(unsigned int *)(param_2 + 200) = *(int *)(param_2 + 200) + auStack_90;
LAB_82c36704:
        *(unsigned int *)(param_2 + 0x4c) = 3;
      }
      else {
        if (uVar10 == 2) goto LAB_82c36678;
        if (uVar10 == 0) {
          uVar16 = fn_82C304E0(param_2 + 0xe0,(unsigned int *)(param_2 + 200));
          if ((int)uVar16 < 0) {
            return uVar16;
          }
          if (0x1f < *(unsigned int *)(param_2 + 200)) {
            *(unsigned int *)(param_2 + 0x4c) = 1;
            goto LAB_82c36644;
          }
          goto LAB_82c36704;
        }
      }
      auStack_90 = 0;
      uVar12 = 0;
      uVar8 = 1;
      uVar7 = (unsigned __int64)
              ((unsigned int)(*(int *)(param_3 + 0xbc) + (1 << ((int)sVar2 & 0x3fU))) >>
              ((int)(short)(sVar2 + 1) & 0x3fU));
      if (1 < uVar7) {
        do {
          uVar13 = uVar12;
          uVar8 = (uVar8 & 0x7fffffff) << 1 | uVar8 >> 0x1f;
          uVar12 = uVar13 + 1;
        } while (uVar8 < uVar7);
        if (0x18 < (uVar12 & 0xffffffff)) {
          iVar14 = param_2 + 0xe0;
          uVar16 = fn_82A75588(iVar14,uVar12);
          if ((int)uVar16 < 0) {
            return uVar16;
          }
          uVar16 = fn_82C30370(iVar14,uVar13 - 0x17,&auStack_90);
          if ((int)uVar16 < 0) {
            return uVar16;
          }
          iVar15 = auStack_90 * 0x1000000;
          uVar16 = fn_82C30370(iVar14,0x18,&auStack_90);
          if ((int)uVar16 < 0) {
            return uVar16;
          }
          uVar5 = auStack_90 + iVar15;
          goto LAB_82c367cc;
        }
      }
      uVar16 = fn_82C30370(param_2 + 0xe0,uVar12,&auStack_90);
      uVar5 = auStack_90;
      if ((int)uVar16 < 0) {
        return uVar16;
      }
    }
LAB_82c367cc:
    uVar9 = (*(int *)(param_2 + 200) << ((unsigned int)uVar12 & 0x3f)) + uVar5;
    uVar10 = uVar9 >> 1;
    *(unsigned int *)(param_3 + 0xbc) =
         (*(unsigned int *)(param_3 + 0xbc) - (*(unsigned int *)(param_3 + 0xbc) >> ((int)sVar2 & 0x3fU))) + uVar9;
    if ((uVar9 & 1) != 0) {
      uVar10 = -uVar10 - 1;
    }
    puVar11[*(short *)(param_1 + 0xca)] = uVar10;
    *(unsigned int *)(param_2 + 0x4c) = 0;
    *(unsigned int *)(param_2 + 200) = 0;
    *(unsigned int *)(param_2 + 0xd0) = 0;
    sVar6 = *(short *)(param_1 + 0xca) + 1;
    *(short *)(param_1 + 0xca) = sVar6;
  }
  *(unsigned int *)(param_2 + 0x48) = 0xb;
LAB_82c36844:
  if (*(int *)(param_1 + 0xc0) == 1) {
    *(int *)(param_3 + 0x1c4) = (int)*(short *)(param_3 + 0x76);
  }
  fn_82C36130(param_2,param_3,param_3,puVar11,(__int64)sVar1);
  return uVar16;
}

