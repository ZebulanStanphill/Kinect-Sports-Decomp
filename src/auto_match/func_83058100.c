extern int _blkmov();
extern int fn_8305B988();
extern int fn_8305BB28();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217E368;
extern unsigned int lbl_8217E36C;


void fn_83058100(unsigned int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  float *pfVar3;
  unsigned int *puVar4;
  
  puVar4 = param_1 + 3;
  *(unsigned int *)(param_1[2] + 0xc) = lbl_8217E36C;
  iVar2 = fn_8305BB28((double)*param_1,puVar4);
  *(float *)(param_1[2] + 8) = (float)(__int64)iVar2;
  *(unsigned int *)(param_1[2] + 0x30) = lbl_8217E368;
  iVar2 = fn_8305B988((double)*param_1,puVar4);
  *(float *)(param_1[2] + 0x34) = (float)(__int64)iVar2;
  iVar2 = fn_8305B988((double)*param_1,puVar4);
  uVar1 = param_1[2];
  pfVar3 = (float *)(uVar1 + 0xe44);
  if (0 < iVar2) {
    *pfVar3 = lbl_82002AE0 / (float)(__int64)iVar2;
    _blkmov(uVar1 + 0xe48,pfVar3,iVar2 * 4 + -4);
  }
  return;
}

