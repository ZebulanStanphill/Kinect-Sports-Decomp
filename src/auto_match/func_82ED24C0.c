extern int free();
extern int malloc();
extern int memcpy();
extern int memset();


void fn_82ED24C0(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned int uVar6;
  unsigned char *puVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned char *puVar10;
  __int64 lVar11;
  
  uVar2 = *(unsigned int *)(param_1 + 0x4020);
  uVar9 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x4024) + 1 & 0xffffffff) >> 1;
  uVar3 = ((unsigned __int64)uVar2 + 1 & 0xffffffff) >> 1;
  iVar8 = (int)uVar3 * (int)uVar9;
  puVar7 = (unsigned char *)malloc(iVar8 * 3);
  if (puVar7 != (unsigned char *)0x0) {
    puVar10 = puVar7;
    if ((int)uVar9 != 0) {
      do {
        lVar11 = uVar3 - 1;
        if (0 < (int)(uVar3 - 1)) {
          do {
            pbVar4 = param_2 + 1;
            pbVar5 = param_2 + *(int *)(param_1 + 0x4020);
            bVar1 = *param_2;
            param_2 = param_2 + 2;
            *puVar10 = (char)((int)((unsigned int)pbVar5[1] + (unsigned int)*pbVar4 + (unsigned int)bVar1 + (unsigned int)*pbVar5)
                             >> 2);
            puVar10 = puVar10 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        *puVar10 = (char)((int)((unsigned int)(param_2 + *(int *)(param_1 + 0x4020))[1] + (unsigned int)param_2[1] +
                                (unsigned int)*param_2 + (unsigned int)param_2[*(int *)(param_1 + 0x4020)]) >> 2);
        if ((unsigned int)(uVar3 << 1) == uVar2) {
          puVar10 = puVar10 + 1;
          param_2 = param_2 + 2;
        }
        uVar9 = uVar9 - 1;
        param_2 = param_2 + *(int *)(param_1 + 0x4020);
      } while (uVar9 != 0);
    }
    memcpy(puVar10,param_2,iVar8);
    memcpy(puVar10 + iVar8,param_2 + iVar8,iVar8);
    uVar2 = *(int *)(param_1 + 0x4024) + 1U >> 1;
    uVar6 = *(int *)(param_1 + 0x4020) + 1U >> 1;
    iVar8 = malloc(((__int64)(int)uVar6 * (__int64)(int)uVar2 & 0x3fffffffU) << 2);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0xc),0,((int)uVar2 >> 3) * ((int)uVar6 >> 3) * 4);
    }
    free(puVar7);
  }
  return;
}

