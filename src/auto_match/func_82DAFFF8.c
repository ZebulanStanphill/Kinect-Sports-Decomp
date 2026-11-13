extern unsigned int *auStack_28;
extern int fn_82CE5410();
extern int fn_82DAFBC0();
extern int fn_83081B28();


int fn_82DAFFF8(int param_1)

{
  int iVar1;
  int *piVar3;
  int uVar2;
  int aiStack_30 [2];
  unsigned char auStack_28 [8];
  
  iVar1 = *(int *)(param_1 + 0x4c);
  piVar3 = (int *)fn_82CE5410();
  { int old = *piVar3;
  *piVar3 = (iVar1 * 4 + 0x7fU & 0xffffff80) + old;
  aiStack_30[0] = old; }
  fn_83081B28(auStack_28,aiStack_30,*(unsigned int *)(param_1 + 0x4c));
  uVar2 = fn_82DAFBC0(param_1,auStack_28);
  iVar1 = aiStack_30[0];
  piVar3 = (int *)fn_82CE5410();
  *piVar3 = iVar1;
  return uVar2;
}

