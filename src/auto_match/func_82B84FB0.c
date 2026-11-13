#define true 1
extern int fn_8265C990();
extern int fn_82ABDF50();
extern int fn_82ABDF50();
extern int fn_82B462A8();
extern int fn_82B46770();
extern int stricmp();
extern int memcpy();
extern int memset();


__int64 fn_82B84FB0(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar7;
  char *pcVar9;
  unsigned __int64 uVar8;
  __int64 lVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  int iVar14;

  uVar5 = *(unsigned int *)(param_1 + 0x14);
  lVar10 = (unsigned __int64)uVar5 + 1;
  uVar7 = lVar10 * 0x28;
  iVar14 = param_1 + 0x32c;
  if ((uVar7 & 0xffffffff) < 0x85) {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3bc);
    if (((*(unsigned int *)(param_1 + 0x3b8) - uVar3) + 0x1000 & 0xffffffff) < (uVar7 & 0xffffffff)) {
      iVar6 = (int)((((uVar7 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
      puVar2 = *(unsigned int **)(iVar6 + iVar14);
      if (puVar2 != (unsigned int *)0x0) {
        *(unsigned int *)(iVar6 + iVar14) = *puVar2;
                    /* WARNING: Subroutine does not return */
        memset(puVar2,0,uVar7);
      }
      uVar3 = fn_82ABDF50(iVar14);
    }
    else {
      *(unsigned int *)(param_1 + 0x3bc) = *(unsigned int *)(param_1 + 0x3bc) + (int)uVar7;
    }
  }
  else {
    uVar3 = fn_82ABDF50(iVar14);
  }
  lVar12 = (unsigned __int64)uVar5 * 0x28 + uVar3;
  memcpy(uVar3,*(unsigned int *)(param_1 + 0xc));
  puVar2 = *(unsigned int **)(param_1 + 0xc);
  uVar5 = *(int *)(param_1 + 0x14) * 0x28;
  if (uVar5 < 0x85) {
    iVar6 = ((uVar5 >> 2) - 1) * 4;
    *puVar2 = *(unsigned int *)(iVar6 + iVar14);
    *(unsigned int **)(iVar6 + iVar14) = puVar2;
  }
  else {
    puVar13 = (unsigned int *)((unsigned int)(puVar2 + -3) & 0xfffffffe);
    *(unsigned int *)(puVar13[1] & 0xfffffffe) = *puVar13;
    *(unsigned int *)(*puVar13 & 0xfffffffe) = puVar13[1];
    fn_8265C990(puVar2 + -3,0x618d0000);
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  uVar11 = (unsigned int)lVar10;
  *(unsigned int *)(param_1 + 0x14) = uVar11;
  uVar7 = (param_3 & 0x1fffffff) << 3;
  *(unsigned int *)(param_1 + 0x10) = uVar11;
  puVar13 = (unsigned int *)lVar12;
  *puVar13 = *puVar13 & 0xfffe0000 | (unsigned int)((param_3 & 0xffffffff) << 3) & 0x1fff8 | param_2 & 7;
  if (uVar7 < 0x85) {
    uVar5 = *(unsigned int *)(param_1 + 0x3bc);
    if ((((unsigned __int64)*(unsigned int *)(param_1 + 0x3b8) - (unsigned __int64)uVar5) + 0x1000 & 0xffffffff) < uVar7)
    {
      iVar6 = (int)(((param_3 & 0x1fffffff) * 2 - 1 & 0xffffffff) << 2);
      puVar2 = *(unsigned int **)(iVar6 + iVar14);
      if (puVar2 != (unsigned int *)0x0) {
        *(unsigned int *)(iVar6 + iVar14) = *puVar2;
                    /* WARNING: Subroutine does not return */
        memset(puVar2,0,uVar7);
      }
      uVar5 = fn_82ABDF50(iVar14);
    }
    else {
      *(unsigned int *)(param_1 + 0x3bc) = uVar5 + (int)uVar7;
    }
  }
  else {
    uVar5 = fn_82ABDF50(iVar14);
  }
  puVar13[7] = uVar5;
  if ((param_4 & 0xffffffff) == 0) {
    return lVar12;
  }
  do {
    uVar7 = param_4;
    uVar3 = 0;
    while( true ) {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) <= (uVar3 & 0xffffffff)) {
        uVar5 = fn_82B46770(param_1,1,uVar7,0);
        puVar13[3] = uVar5;
        return lVar12;
      }
      uVar4 = fn_82B462A8(param_1,uVar3);
      iVar6 = stricmp(uVar4,uVar7);
      uVar8 = uVar7;
      if (iVar6 == 0) break;
      uVar3 = uVar3 + 1;
    }
    do {
      pcVar9 = (char *)uVar8;
      uVar8 = uVar8 + 1;
    } while (*pcVar9 != '\0');
    uVar3 = ((uVar8 - uVar7) - 1 & 0xffffffff) + 2;
    if ((uVar3 & 0xffffffff) < 0x85) {
      param_4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3bc);
      if (((*(unsigned int *)(param_1 + 0x3b8) - param_4) + 0x1000 & 0xffffffff) < (uVar3 & 0xffffffff)) {
        iVar6 = (int)((((uVar3 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
        puVar2 = *(unsigned int **)(iVar6 + iVar14);
        if (puVar2 != (unsigned int *)0x0) {
          *(unsigned int *)(iVar6 + iVar14) = *puVar2;
                    /* WARNING: Subroutine does not return */
          memset(puVar2,0,uVar3);
        }
        param_4 = fn_82ABDF50(iVar14);
      }
      else {
        *(unsigned int *)(param_1 + 0x3bc) = *(unsigned int *)(param_1 + 0x3bc) + (int)uVar3;
      }
    }
    else {
      param_4 = fn_82ABDF50(iVar14);
    }
    iVar6 = (int)uVar7;
    *(unsigned char *)param_4 = 0x24;
    do {
      cVar1 = *(char *)uVar7;
      ((char *)uVar7)[(int)((unsigned char *)param_4 + (1 - iVar6))] = cVar1;
      uVar7 = uVar7 + 1;
    } while (cVar1 != '\0');
  } while( true );
}
