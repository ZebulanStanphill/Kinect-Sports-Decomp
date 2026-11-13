#define true 1
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82F691F0();


void fn_82ADE488(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned __int64 uVar8;
  unsigned int uVar11;
  int iVar12;
  
  iVar3 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x29c) << 2,0);
  uVar11 = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    puVar9 = (unsigned int *)(iVar3 + -4);
    do {
      puVar9 = puVar9 + 1;
      *puVar9 = uVar11;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(unsigned int *)(param_1 + 0x29c));
  }
  uVar10 = (unsigned int)*(unsigned short *)(param_2 + 0x12);
  for (uVar11 = param_3; uVar11 != 0; uVar11 = uVar11 - (uVar11 & ~(uVar11 - 1))) {
    *(unsigned int *)((int)(((unsigned __int64)*(unsigned short *)(param_2 + 0x12) +
                     (0x1f - LZCOUNT(uVar11 & ~(uVar11 - 1))) & 0xffffffff) << 2) + iVar3) = uVar10;
    uVar10 = uVar10 + 1;
  }
  lVar6 = (unsigned __int64)*(unsigned short *)(param_2 + 0x12) << 2;
  uVar8 = (unsigned __int64)*(unsigned short *)(param_2 + 0x12) << 1;
  for (; param_3 != 0; param_3 = param_3 - (param_3 & ~(param_3 - 1))) {
    uVar11 = (unsigned int)((uVar8 & 0xffffffff) >> 3) & 0x1ffffff8;
    uVar4 = uVar8 - (uVar8 & 0xffffffc0);
    uVar5 = (unsigned __int64)*(unsigned short *)(param_2 + 0x12) + (0x1f - LZCOUNT(param_3 & ~(param_3 - 1)));
    iVar12 = (int)((uVar5 & 0xffffffff) << 2);
    iVar1 = (int)lVar6;
    *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x2b0)) =
         *(unsigned int *)(*(int *)(param_1 + 0x2b0) + iVar12);
    uVar8 = uVar8 + 2;
    *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x2a8)) =
         *(unsigned int *)(*(int *)(param_1 + 0x2a8) + iVar12);
    iVar12 = *(int *)(param_1 + 0x2b4);
    *(unsigned __int64 *)(uVar11 + iVar12) =
         (*(unsigned __int64 *)(((unsigned int)uVar5 >> 2 & 0x1ffffff8) + iVar12) >>
          ((uVar5 & 0x7fffffff) * 2 + (uVar5 & 0x7fffffe0) * -2 & 0x7f) & 3) << (uVar4 & 0x7f) |
         *(unsigned __int64 *)(uVar11 + iVar12) & ~(3L << (uVar4 & 0x7f));
    *(int *)(*(int *)(param_1 + 0x2c4) + iVar1) = param_2;
    lVar6 = lVar6 + 4;
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    iVar12 = 0;
    do {
      uVar10 = *(unsigned int *)(iVar12 + *(int *)(param_1 + 0x2a8));
      if (uVar10 < 0xffff) {
        uVar7 = *(unsigned int *)(uVar10 * 4 + iVar3);
      }
      else {
        uVar7 = 0;
      }
      uVar11 = uVar11 + 1;
      *(unsigned int *)(iVar12 + *(int *)(param_1 + 0x2a8)) = uVar7;
      iVar12 = iVar12 + 4;
    } while (uVar11 < *(unsigned int *)(param_1 + 0x29c));
  }
  uVar2 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
  iVar3 = *(int *)(param_1 + 0x2b8);
  while( true ) {
    if (iVar3 == 0) {
      fn_82AC6808(param_1,uVar2,*(int *)(param_1 + 0x2a0) << 3,0);
      return;
    }
    if ((*(unsigned int *)(iVar3 + 0xc0) & 7) != 0) break;
    iVar3 = *(int *)(iVar3 + 200);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,*(int *)(param_1 + 0x2a0) << 3);
}

