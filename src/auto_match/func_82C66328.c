extern int fn_82C4E470();
extern int fn_82C4E5E8();


void fn_82C66328(int param_1,unsigned int *param_2,int param_3,__int64 param_4)

{
  char cVar1;
  unsigned __int64 *puVar2;
  __int64 *plVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int uVar9;
  int iVar8;
  
  puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar8 = (int)((*puVar2 >> (0x40U - param_4 & 0x7f) & 0xffffffff) << 1);
  fn_82C4E470(puVar2,*(unsigned char *)(iVar8 + param_3));
  cVar1 = *(char *)(iVar8 + param_3 + 1);
  if (cVar1 == -1) {
    *(unsigned int *)((int)puVar2 + 0x14) = 3;
  }
  puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
  if (*(int *)((int)puVar2 + 0x14) == 0) {
    uVar6 = (unsigned __int64)cVar1;
    if (cVar1 == '\0') {
      *param_2 = 0;
      **(unsigned int **)(param_1 + 0x6e4) = 0;
      return;
    }
    uVar4 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
    lVar7 = 0;
    iVar8 = 0;
    uVar5 = uVar4 + 0x10;
    if (cVar1 < '\t') {
      if ((uVar6 & 0xffffffff) < 0x21) {
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          do {
            iVar8 = (int)lVar7;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar6 = uVar6 - uVar5;
            *(int *)(puVar2 + 1) = (int)(uVar4 - uVar5);
            lVar7 = (unsigned __int64)
                    (unsigned int)((int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar6 & 0x3f)) + lVar7;
            iVar8 = (int)lVar7;
            *puVar2 = *puVar2 << (uVar5 & 0x7f);
            if ((__int64)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar4 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
            uVar5 = uVar4 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
        }
        *(int *)(puVar2 + 1) = (int)(uVar4 - uVar6);
        uVar9 = (int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) + iVar8;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((__int64)(uVar4 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
      }
      else {
        uVar9 = 0;
      }
      uVar9 = uVar9 & 0xff;
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
        *param_2 = 0;
        if ((1 << ((int)cVar1 - 1U & 0x3f) & uVar9) == 0) {
          **(int **)(param_1 + 0x6e4) = -(0xff >> (8U - (int)cVar1 & 0x3f) & ~uVar9);
          return;
        }
        **(unsigned int **)(param_1 + 0x6e4) = uVar9;
        return;
      }
    }
    else {
      if ((uVar6 & 0xffffffff) < 0x21) {
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar6 = uVar6 - uVar5;
            *(int *)(puVar2 + 1) = (int)(uVar4 - uVar5);
            lVar7 = (unsigned __int64)
                    (unsigned int)((int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar6 & 0x3f)) + lVar7;
            *puVar2 = *puVar2 << (uVar5 & 0x7f);
            if ((__int64)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar4 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
            uVar5 = uVar4 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
        }
        *(int *)(puVar2 + 1) = (int)(uVar4 - uVar6);
        uVar5 = (*puVar2 >> (0x40 - uVar6 & 0x7f) & 0xffffffff) + lVar7;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((__int64)(uVar4 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
      }
      else {
        uVar5 = 0;
      }
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
        *param_2 = 0;
        if (((unsigned int)(1 << ((int)cVar1 - 1U & 0x3f)) & uVar5) == 0) {
          **(int **)(param_1 + 0x6e4) = -(0xffff >> (0x10U - (int)cVar1 & 0x3f) & ~(unsigned int)uVar5);
        }
        else {
          **(unsigned int **)(param_1 + 0x6e4) = (unsigned int)uVar5;
        }
        plVar3 = *(__int64 **)(param_1 + 0x54);
        uVar9 = *(unsigned int *)(plVar3 + 1);
        *plVar3 = *plVar3 << 1;
        *(int *)(plVar3 + 1) = (int)((unsigned __int64)uVar9 - 1);
        if (-1 < (__int64)((unsigned __int64)uVar9 - 1)) {
          return;
        }
        fn_82C4E5E8();
        return;
      }
    }
  }
  *param_2 = 1;
  **(unsigned int **)(param_1 + 0x6e4) = 0;
  return;
}

