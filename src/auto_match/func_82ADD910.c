extern int fn_82ADD198();
extern int fn_82ADD610();
extern int fn_82B81D80();


void fn_82ADD910(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  
  uVar5 = *(unsigned int *)(param_2 + 0x10);
  uVar1 = *(unsigned int *)(param_2 + 8);
  uVar10 = (unsigned __int64)uVar5 & 0xffff;
  iVar4 = fn_82ADD610();
  uVar6 = ((unsigned __int64)(uVar5 >> 0x10) & 7) + uVar10;
  uVar7 = 0;
  uVar9 = 0;
  uVar5 = 1;
  if (uVar10 < uVar6) {
    uVar8 = 0;
    do {
      if ((uVar5 & uVar1 >> 1 & 0xf) != 0) {
        uVar3 = fn_82ADD198(param_1,uVar10);
        uVar2 = (*(unsigned int *)(iVar4 + 0xc0) >> 0xe & 0xff) >>
                ((unsigned int)((*(unsigned __int64 *)(((unsigned int)uVar3 >> 2 & 0x1ffffff8) + *(int *)(param_1 + 0x2b4))
                         >> ((uVar3 & 0x7fffffff) * 2 + (uVar3 & 0x7fffffe0) * -2 & 0x7f) &
                        0xffffffff) << 1) & 6) & 3;
        uVar9 = 1 << uVar2 | uVar9;
        uVar7 = uVar7 & ~(3 << (uVar8 & 0x3f)) | uVar2 << (uVar8 & 0x3f);
        uVar8 = uVar8 + 2;
      }
      uVar10 = uVar10 + 1;
      uVar5 = uVar5 << 1;
    } while ((uVar10 & 0xffffffff) < uVar6);
  }
  fn_82B81D80(param_2,*(unsigned int *)(iVar4 + 0xc0) >> 0x12 & 0x3f0 | uVar9 & 0xf,uVar7);
  return;
}

