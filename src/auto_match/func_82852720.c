extern unsigned int *auStack_80;
extern int fn_826310E0();
extern int fn_827F9658();
extern int fn_8280CB70();
extern int fn_8280CC30();
extern int fn_8280CD18();


void fn_82852720(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned char auStack_80 [64];
  
  uVar1 = param_1[0x1a4c];
  uVar2 = *param_1;
  fn_827F9658((unsigned __int64)*(unsigned int *)(param_2 + 4) * 0x34 + (unsigned __int64)param_1[0x1b],
                  ((unsigned __int64)*(unsigned int *)(param_2 + 4) & 0x3ffffff) * 0x40 + (unsigned __int64)param_1[0x1a],
                  param_1 + uVar1 * 0x34 + 0x5c);
  fn_8280CB70((unsigned __int64)uVar2 + 0x40,param_1 + uVar1 * 0x34 + 0x5c,param_1 + uVar1 * 0x34 + 0x4c);
  lVar4 = (unsigned __int64)*param_1 + 0x40;
  lVar5 = (unsigned __int64)*param_1 + 0x80;
  uVar2 = param_1[0x1a4c];
  if (param_1[0x23] != 0xffff) {
    fn_8280CD18(param_1 + uVar1 * 0x34 + 0x6c,auStack_80);
    uVar3 = param_1[0x23];
    fn_826310E0(param_1[1],(unsigned __int64)uVar3,auStack_80,3,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar3 + 2 & 0xffffffff) >> 2) - (unsigned __int64)(uVar3 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar3 >> 2) & 0x7f));
  }
  if (param_1[0x21] != 0xffff) {
    fn_8280CD18(lVar5,auStack_80);
    uVar3 = param_1[0x21];
    fn_826310E0(param_1[1],(unsigned __int64)uVar3,auStack_80,4,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar3 + 3 & 0xffffffff) >> 2) - (unsigned __int64)(uVar3 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar3 >> 2) & 0x7f));
  }
  if (param_1[0x22] != 0xffff) {
    fn_8280CC30(lVar4,param_1 + uVar1 * 0x34 + 0x6c,auStack_80);
    uVar1 = param_1[0x22];
    fn_826310E0(param_1[1],(unsigned __int64)uVar1,auStack_80,3,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar1 + 2 & 0xffffffff) >> 2) - (unsigned __int64)(uVar1 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar1 >> 2) & 0x7f));
  }
  if (param_1[0x48] != 0xffff) {
    fn_8280CC30(lVar5,param_1 + uVar2 * 0x34 + 0x4c,(unsigned __int64)*param_1 + 0xc0);
    uVar1 = param_1[0x48];
    fn_826310E0(param_1[1],(unsigned __int64)uVar1,(unsigned __int64)*param_1 + 0xc0,4,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar1 + 3 & 0xffffffff) >> 2) - (unsigned __int64)(uVar1 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar1 >> 2) & 0x7f));
  }
  if (param_1[0x24] != 0xffff) {
    fn_8280CD18(lVar4,auStack_80);
    uVar1 = param_1[0x24];
    fn_826310E0(param_1[1],(unsigned __int64)uVar1,auStack_80,3,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((unsigned __int64)uVar1 + 2 & 0xffffffff) >> 2) - (unsigned __int64)(uVar1 >> 2) & 0x7f)) >>
                 ((unsigned __int64)(uVar1 >> 2) & 0x7f));
  }
  return;
}

