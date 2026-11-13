extern int fn_82C4E470();
extern int fn_82C4E5E8();


void fn_82C64E00(int param_1,unsigned int *param_2,int param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned __int64 *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  
  puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar7 = (int)((*puVar2 >> (0x40U - param_4 & 0x7f) & 0xffffffff) << 1);
  fn_82C4E470(puVar2,*(unsigned char *)(iVar7 + param_3));
  bVar1 = *(unsigned char *)(iVar7 + param_3 + 1);
  if (bVar1 == 0xff) {
    *(unsigned int *)((int)puVar2 + 0x14) = 3;
  }
  puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
  if (*(int *)((int)puVar2 + 0x14) == 0) {
    uVar6 = (unsigned __int64)(char)bVar1;
    if (bVar1 == 0) {
      *param_2 = 0;
      **(unsigned int **)(param_1 + 0x6e4) = 0;
      return;
    }
    uVar4 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
    iVar7 = 0;
    uVar5 = uVar4 + 0x10;
    if (bVar1 < 0x21) {
      iVar3 = 0;
      if ((uVar5 & 0xffffffff) < (unsigned __int64)(unsigned int)(int)(char)bVar1) {
        do {
          iVar7 = iVar3;
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar6 = uVar6 - uVar5;
          *(int *)(puVar2 + 1) = (int)(uVar4 - uVar5);
          iVar7 = ((int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar6 & 0x3f)) + iVar7;
          *puVar2 = *puVar2 << (uVar5 & 0x7f);
          if ((__int64)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
          uVar5 = uVar4 + 0x10;
          iVar3 = iVar7;
        } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
      }
      *(int *)(puVar2 + 1) = (int)(uVar4 - uVar6);
      uVar8 = (int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) + iVar7;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((__int64)(uVar4 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
    }
    else {
      uVar8 = 0;
    }
    uVar8 = uVar8 & 0xff;
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
      *param_2 = 0;
      if ((1 << ((int)(char)bVar1 - 1U & 0x3f) & uVar8) != 0) {
        **(unsigned int **)(param_1 + 0x6e4) = uVar8;
        return;
      }
      **(int **)(param_1 + 0x6e4) = (uVar8 - (1 << ((int)(char)bVar1 & 0x3fU))) + 1;
      return;
    }
  }
  *param_2 = 1;
  **(unsigned int **)(param_1 + 0x6e4) = 0;
  return;
}

