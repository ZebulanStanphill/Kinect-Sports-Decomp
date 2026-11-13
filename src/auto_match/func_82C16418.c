extern int fn_82C038C8();


unsigned __int64 fn_82C16418(__int64 *param_1)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned short *puVar12;
  unsigned int uVar13;
  unsigned __int64 uVar11;
  unsigned int uVar14;
  short sVar15;
  unsigned int uVar16;
  unsigned char *apbStack_50 [8];
  
  apbStack_50[0] = (unsigned char *)0x0;
  sVar15 = 0;
  if (param_1 == (__int64 *)0x0) {
    return 2;
  }
  iVar8 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + *param_1,2,apbStack_50);
  if (iVar8 != 2) {
    return 3;
  }
  *(short *)(param_1 + 0x3e) = (short)*(unsigned int *)((int)param_1 + 0x1ac);
  *(unsigned char *)((int)param_1 + 500) = *apbStack_50[0] & 0x7f;
  *(unsigned char *)((int)param_1 + 0x1f5) = apbStack_50[0][1];
  cVar1 = *(char *)((int)param_1 + 0x1c5);
  if (cVar1 == '\x01') {
    iVar8 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + *param_1 + 2,1,
                         apbStack_50);
    if (iVar8 != 1) {
      return 3;
    }
    *(unsigned int *)(param_1 + 0x3f) = (unsigned int)*apbStack_50[0];
  }
  else if (cVar1 == '\x02') {
    iVar8 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + *param_1 + 2,2,
                         apbStack_50);
    if (iVar8 != 2) {
      return 3;
    }
    *(unsigned int *)(param_1 + 0x3f) = (unsigned int)apbStack_50[0][1] * 0x100 + (unsigned int)*apbStack_50[0];
  }
  else if (cVar1 == '\x03') {
    iVar8 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + *param_1 + 2,4,
                         apbStack_50);
    if (iVar8 != 4) {
      return 3;
    }
    *(unsigned int *)(param_1 + 0x3f) =
         (((unsigned int)apbStack_50[0][3] * 0x100 + (unsigned int)apbStack_50[0][2]) * 0x100 +
         (unsigned int)apbStack_50[0][1]) * 0x100 + (unsigned int)*apbStack_50[0];
  }
  lVar10 = (unsigned __int64)*(unsigned char *)((int)param_1 + 0x1c4) + 2;
  iVar8 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + lVar10 + *param_1,1,
                       apbStack_50);
  if (iVar8 != 1) {
    return 3;
  }
  bVar2 = *apbStack_50[0];
  *(unsigned int *)(param_1 + 0x40) = 0xffffffff;
  *(unsigned char *)((int)param_1 + 0x204) = bVar2;
  if (bVar2 == 1) {
    *(unsigned int *)((int)param_1 + 0x1fc) = 0;
    uVar6 = *(unsigned int *)(param_1 + 0x3f);
    *(unsigned char *)((int)param_1 + 0x20d) = 1;
    *(unsigned int *)(param_1 + 0x3f) = 0;
    *(unsigned int *)(param_1 + 0x40) = uVar6;
    iVar8 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + lVar10 + *param_1 + 1,
                         1,apbStack_50);
    if (iVar8 != 1) {
      return 3;
    }
    *(unsigned int *)((int)param_1 + 0x214) = (unsigned int)*apbStack_50[0];
    if (*(int *)(param_1 + 0x38) == 0) {
      sVar15 = 0;
    }
    else {
      iVar8 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + lVar10 + *param_1 +
                                   2,2,apbStack_50);
      if (iVar8 != 2) {
        return 3;
      }
      sVar15 = (unsigned short)apbStack_50[0][1] * 0x100 + (unsigned short)*apbStack_50[0];
    }
  }
  else if (7 < bVar2) {
    iVar8 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + lVar10 + *param_1 + 1,
                         8,apbStack_50);
    if (iVar8 != 8) {
      return 3;
    }
    *(unsigned int *)((int)param_1 + 0x1fc) =
         (((unsigned int)apbStack_50[0][3] * 0x100 + (unsigned int)apbStack_50[0][2]) * 0x100 +
         (unsigned int)apbStack_50[0][1]) * 0x100 + (unsigned int)*apbStack_50[0];
    bVar2 = apbStack_50[0][7];
    bVar3 = apbStack_50[0][6];
    bVar4 = apbStack_50[0][5];
    bVar5 = apbStack_50[0][4];
    *(unsigned char *)((int)param_1 + 0x20d) = 0;
    *(unsigned int *)(param_1 + 0x40) =
         (((unsigned int)bVar2 * 0x100 + (unsigned int)bVar3) * 0x100 + (unsigned int)bVar4) * 0x100 + (unsigned int)bVar5;
    if (*(int *)(param_1 + 0x45) != 0) {
      uVar14 = 0;
      puVar12 = (unsigned short *)((int)param_1 + 0xf4);
      do {
        if (*puVar12 == (unsigned short)*(unsigned char *)((int)param_1 + 500)) break;
        uVar14 = uVar14 + 1;
        puVar12 = puVar12 + 0x12;
      } while (uVar14 < 4);
      if (uVar14 == 4) {
        return 6;
      }
      uVar16 = *(unsigned char *)((int)param_1 + 0x204) - 8;
      uVar9 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + lVar10 + *param_1 +
                                   9,uVar16,apbStack_50);
      if (uVar9 != uVar16) {
        return 3;
      }
      uVar9 = 0xf8;
      do {
        iVar8 = uVar14 * 0x24 + uVar9;
        uVar13 = (unsigned int)*(unsigned short *)(iVar8 + (int)param_1);
        if (uVar13 == 0xffff) {
          if (uVar16 < 2) {
            return 3;
          }
          pbVar7 = apbStack_50[0] + 1;
          uVar16 = uVar16 - 2;
          bVar2 = *apbStack_50[0];
          apbStack_50[0] = apbStack_50[0] + 2;
          uVar13 = (unsigned int)*pbVar7 * 0x100 + (unsigned int)bVar2;
        }
        if (uVar16 < uVar13) {
          return 3;
        }
        if (*(int *)((int)param_1 + iVar8 + 4) != 0) {
          lVar10 = 0;
          if (8 < uVar13) {
            return 1;
          }
          if (uVar13 != 0) {
            uVar14 = 0;
            do {
              pbVar7 = apbStack_50[0] + uVar14;
              uVar14 = uVar14 + 1 & 0xffff;
              lVar10 = (unsigned __int64)*pbVar7 + lVar10 * 0x100;
            } while (uVar14 < uVar13);
          }
          param_1[0x4b] = lVar10;
          break;
        }
        uVar9 = uVar9 + 8;
        apbStack_50[0] = apbStack_50[0] + uVar13;
      } while (uVar9 < 0x118);
    }
  }
  lVar10 = (unsigned __int64)*(unsigned char *)((int)param_1 + 0x204) + (unsigned __int64)*(unsigned char *)((int)param_1 + 0x1c4) +
           3;
  *(short *)((int)param_1 + 0x1f2) = (short)lVar10;
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((unsigned __int64)*(unsigned int *)((int)param_1 + 0x1cc) == 0) {
      lVar10 = ((unsigned __int64)*(unsigned int *)((int)param_1 + 0x14) -
               (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1dc)) - lVar10;
    }
    else {
      lVar10 = ((unsigned __int64)*(unsigned int *)((int)param_1 + 0x1cc) -
               (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1dc)) - lVar10;
    }
    uVar11 = lVar10 - (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac);
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x1e6);
    if (cVar1 == '\x01') {
      iVar8 = fn_82C038C8(param_1,lVar10 + (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + *param_1,1,
                           apbStack_50);
      if (iVar8 != 1) {
        return 3;
      }
      uVar11 = (unsigned __int64)*apbStack_50[0];
    }
    else if (cVar1 == '\x02') {
      iVar8 = fn_82C038C8(param_1,lVar10 + (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + *param_1,2,
                           apbStack_50);
      if (iVar8 != 2) {
        return 3;
      }
      uVar11 = (unsigned __int64)apbStack_50[0][1] * 0x100 + (unsigned __int64)*apbStack_50[0];
    }
    else if (cVar1 == '\x03') {
      iVar8 = fn_82C038C8(param_1,lVar10 + (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + *param_1,4,
                           apbStack_50);
      if (iVar8 != 4) {
        return 3;
      }
      uVar11 = (((unsigned __int64)apbStack_50[0][3] * 0x100 + (unsigned __int64)apbStack_50[0][2]) * 0x100 +
               (unsigned __int64)apbStack_50[0][1]) * 0x100 + (unsigned __int64)*apbStack_50[0];
    }
    else {
      uVar11 = 0;
    }
  }
  if (sVar15 == 0) {
    sVar15 = (short)uVar11;
  }
  *(short *)((int)param_1 + 0x206) = (short)uVar11;
  *(short *)((int)param_1 + 0x20a) = sVar15;
  lVar10 = (unsigned __int64)*(unsigned char *)((int)param_1 + 0x1e7) + (uVar11 & 0xffff) +
           (unsigned __int64)*(unsigned short *)((int)param_1 + 0x1f2);
  *(short *)((int)param_1 + 0x1f2) = (short)lVar10;
  uVar14 = ((unsigned int)lVar10 & 0xffff) + *(int *)((int)param_1 + 0x1ac);
  *(unsigned int *)((int)param_1 + 0x1ac) = uVar14;
  if ((uVar14 <= *(unsigned int *)((int)param_1 + 0x14)) &&
     ((uVar14 != *(unsigned int *)((int)param_1 + 0x14) ||
      (*(int *)((int)param_1 + 0x1ec) - 1U <= *(unsigned int *)((int)param_1 + 0x21c))))) {
    return 0;
  }
  return 6;
}

