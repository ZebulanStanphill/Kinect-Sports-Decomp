extern unsigned int *auStack_80;
extern int fn_826310E0();
extern int fn_8280CC30();
extern int fn_8280CD18();
extern int fn_82855BE8();


void fn_82855FC0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  __int64 lVar7;
  int iVar8;
  unsigned char auStack_80 [128];
  
  uVar5 = param_1[0x1a4c] - 1;
  param_1[0x1a4c] = uVar5;
  if (*(int *)(param_2 + 4) != 0) {
    fn_82855BE8(param_1,param_1[0x1e],param_1[0x1d]);
    iVar8 = 0;
    uVar1 = param_1[0x20];
    uVar2 = param_1[0x1f];
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        uVar4 = lVar6 + (unsigned __int64)param_1[0x26];
        uVar3 = (uVar4 & 0xffffffff) >> 2;
        fn_826310E0(param_1[1],uVar4,
                     (unsigned __int64)*(unsigned char *)(iVar8 + uVar2) * 0x40 +
                     (unsigned __int64)param_1[uVar5 * 0x34 + 0x7c],3,
                     (unsigned __int64)
                     (-0x8000000000000000 >> (((uVar4 + 2 & 0xffffffff) >> 2) - uVar3 & 0x7f)) >>
                     (uVar3 & 0x7f));
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 3;
      } while (iVar8 < (int)uVar1);
    }
    param_1[0x41] = 1;
  }
  uVar1 = param_1[0x1a4c];
  lVar6 = (unsigned __int64)*param_1 + 0x40;
  lVar7 = (unsigned __int64)*param_1 + 0x80;
  if (param_1[0x23] != 0xffff) {
    fn_8280CD18(param_1 + uVar5 * 0x34 + 0x6c,auStack_80);
    uVar2 = param_1[0x23];
    fn_826310E0(param_1[1],(unsigned __int64)uVar2,auStack_80,3,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar2 + 2 & 0xffffffff) >> 2) - (unsigned __int64)(uVar2 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar2 >> 2) & 0x7f));
  }
  if (param_1[0x21] != 0xffff) {
    fn_8280CD18(lVar7,auStack_80);
    uVar2 = param_1[0x21];
    fn_826310E0(param_1[1],(unsigned __int64)uVar2,auStack_80,4,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar2 + 3 & 0xffffffff) >> 2) - (unsigned __int64)(uVar2 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar2 >> 2) & 0x7f));
  }
  if (param_1[0x22] != 0xffff) {
    fn_8280CC30(lVar6,param_1 + uVar5 * 0x34 + 0x6c,auStack_80);
    uVar5 = param_1[0x22];
    fn_826310E0(param_1[1],(unsigned __int64)uVar5,auStack_80,3,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar5 + 2 & 0xffffffff) >> 2) - (unsigned __int64)(uVar5 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar5 >> 2) & 0x7f));
  }
  if (param_1[0x48] != 0xffff) {
    fn_8280CC30(lVar7,param_1 + uVar1 * 0x34 + 0x4c,(unsigned __int64)*param_1 + 0xc0);
    uVar5 = param_1[0x48];
    fn_826310E0(param_1[1],(unsigned __int64)uVar5,(unsigned __int64)*param_1 + 0xc0,4,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar5 + 3 & 0xffffffff) >> 2) - (unsigned __int64)(uVar5 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar5 >> 2) & 0x7f));
  }
  if (param_1[0x24] != 0xffff) {
    fn_8280CD18(lVar6,auStack_80);
    uVar5 = param_1[0x24];
    fn_826310E0(param_1[1],(unsigned __int64)uVar5,auStack_80,3,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar5 + 2 & 0xffffffff) >> 2) - (unsigned __int64)(uVar5 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar5 >> 2) & 0x7f));
  }
  return;
}

