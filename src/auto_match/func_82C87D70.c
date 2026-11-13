typedef unsigned char bool;
#define false 0
extern int fn_82C4E5E8();
extern unsigned int lbl_820FD7A8;
extern unsigned int lbl_820FD7C8;


bool fn_82C87D70(int param_1,int param_2)

{
  unsigned __int64 *puVar1;
  int iVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar7 = 3;
  lVar6 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  if ((uVar5 & 0xffffffff) < 3) {
    do {
      if ((uVar5 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar5;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      lVar6 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar7 & 0x3f)) +
              lVar6;
      *puVar1 = *puVar1 << (uVar5 & 0x7f);
      if ((__int64)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar5 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar4 - uVar7);
  *puVar1 = uVar5 << (uVar7 & 0x7f);
  if ((__int64)(uVar4 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  iVar2 = (int)(((uVar5 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar6 & 0x3fffffff) << 2);
  if (param_2 == 0) {
    bVar3 = *(int *)(param_1 + 0x5514) != *(int *)(&lbl_820FD7C8 + iVar2) ||
            *(int *)(param_1 + 0x5510) != *(int *)(&lbl_820FD7A8 + iVar2);
  }
  else {
    bVar3 = false;
    *(unsigned int *)(param_1 + 0x5510) = *(unsigned int *)(&lbl_820FD7A8 + iVar2);
    *(unsigned int *)(param_1 + 0x5514) = *(unsigned int *)(&lbl_820FD7C8 + iVar2);
  }
  return bVar3;
}

