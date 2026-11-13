#define _iStack00000010 ((*(unsigned __int64*)&iStack00000010))
#define _iStack00000018 ((*(unsigned __int64*)&iStack00000018))
#define _iStack00000020 ((*(unsigned __int64*)&iStack00000020))
extern int fn_828C4690();
extern unsigned int iStack00000010;
extern unsigned int iStack00000018;
extern unsigned int iStack00000020;
extern unsigned int uStack00000024;


void fn_828C4710(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  int iStack00000010;
  int iStack00000018;
  int iStack00000020;
  unsigned int uStack00000024;
  
  iStack00000010 = (int)(param_1 >> 0x20);
  iVar3 = iStack00000010;
  uVar6 = param_1 >> 2 & 0x3fffffff;
  uVar5 = uVar6;
  if (*(unsigned int *)(iStack00000010 + 8) <= uVar6) {
    uVar5 = uVar6 - *(unsigned int *)(iStack00000010 + 8);
  }
  iStack00000018 = (int)(param_2 >> 0x20);
  iVar4 = iStack00000018;
  uVar8 = param_2 >> 2 & 0x3fffffff;
  uVar7 = uVar8;
  if (*(unsigned int *)(iStack00000018 + 8) <= uVar8) {
    uVar7 = uVar8 - *(unsigned int *)(iStack00000018 + 8);
  }
  piVar1 = (int *)(iStack00000018 + 4);
  piVar2 = (int *)(iStack00000010 + 4);
  _iStack00000010 = param_1;
  _iStack00000018 = param_2;
  _iStack00000020 = param_3;
  if (*(unsigned int *)(*(int *)(*(int *)((int)((uVar7 & 0xffffffff) << 2) + *piVar1) +
                        (int)((param_2 & 3) << 2)) + 8) <
      *(unsigned int *)(*(int *)(*(int *)((int)((uVar5 & 0xffffffff) << 2) + *piVar2) +
                        (int)((param_1 & 3) << 2)) + 8)) {
    fn_828C4690(param_2,param_1);
  }
  uVar5 = uVar8;
  if (*(unsigned int *)(iVar4 + 8) <= uVar8) {
    uVar5 = uVar8 - *(unsigned int *)(iVar4 + 8);
  }
  uVar9 = uStack00000024 >> 2;
  if (*(unsigned int *)(iStack00000020 + 8) <= uVar9) {
    uVar9 = uVar9 - *(unsigned int *)(iStack00000020 + 8);
  }
  if (*(unsigned int *)(*(int *)(*(int *)(*(int *)(iStack00000020 + 4) + uVar9 * 4) +
                        (int)((_iStack00000020 & 3) << 2)) + 8) <
      *(unsigned int *)(*(int *)(*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) +
                        (int)((param_2 & 3) << 2)) + 8)) {
    fn_828C4690(param_3,param_2);
  }
  uVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 8);
  if (uVar5 <= uVar6) {
    uVar6 = uVar6 - uVar5;
  }
  if (*(unsigned int *)(iVar4 + 8) <= uVar8) {
    uVar8 = uVar8 - *(unsigned int *)(iVar4 + 8);
  }
  if (*(unsigned int *)(*(int *)(*(int *)((int)((uVar8 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) +
                        (int)((param_2 & 3) << 2)) + 8) <
      *(unsigned int *)(*(int *)(*(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(iVar3 + 4)) +
                        (int)((param_1 & 3) << 2)) + 8)) {
    fn_828C4690(param_2,param_1);
  }
  return;
}

