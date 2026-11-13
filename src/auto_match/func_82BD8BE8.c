extern unsigned int *auStack_50;
extern int fn_82A1F2F8();
extern int fn_82BD8360();
extern int fn_82BD8488();
extern int fn_82BD8558();
extern int fn_82BD8628();
extern int fn_82F68CC0();


__int64 fn_82BD8BE8(int param_1,unsigned short *param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned char bVar3;
  unsigned short uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  __int64 lVar6;
  unsigned __int64 auStack_50 [10];
  
  uVar1 = *param_2;
  uVar4 = uVar1 >> 1 & 0x7ff;
  bVar3 = (unsigned char)(uVar1 >> 0xc);
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar5 = fn_82A1F2F8();
    *(unsigned char *)(param_1 + 0x134) = bVar3;
    *(unsigned short *)(param_1 + 0x20) = uVar4;
    *(unsigned __int64 *)(param_1 + 0x18) = uVar5 & 0xffffffff;
    *(unsigned __int64 *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x4c) = 1;
  }
  if (uVar1 >> 0xc != (unsigned short)*(unsigned char *)(param_1 + 0x134)) {
    fn_82BD8628(param_1);
    *(unsigned char *)(param_1 + 0x134) = bVar3;
  }
  uVar7 = fn_82BD8360(param_1,uVar4,auStack_50);
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  if (uVar7 != 0) {
    if (uVar7 == 1) {
      if (uVar1 >> 0xc == (unsigned short)*(unsigned char *)(param_1 + 0x134)) {
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
        return 1;
      }
      return 1;
    }
    if (2 < uVar7) {
      return 0;
    }
    if (*(unsigned int *)(param_1 + 0x178) <= *(unsigned int *)(param_1 + 0x17c)) {
      return 1;
    }
    fn_82BD8558(param_1);
    fn_82BD8360();
  }
  piVar2 = *(int **)(param_1 + 0x180);
  if (piVar2 != (int *)0x0) {
    if (piVar2 == *(int **)(param_1 + 0x184)) {
      *(unsigned int *)(param_1 + 0x184) = 0;
    }
    *(int *)(param_1 + 0x180) = piVar2[1];
    piVar2[1] = 0;
    *(unsigned __int64 *)(*piVar2 + 0x18) = auStack_50[0];
    fn_82F68CC0(*(unsigned int *)(*piVar2 + 8),param_2,param_3);
    *(int *)(*piVar2 + 4) = (int)param_3;
    lVar6 = fn_82BD8488(param_1,piVar2);
    if (-1 < lVar6) {
      return lVar6;
    }
    piVar2[1] = 0;
    if (*(int *)(param_1 + 0x184) == 0) {
      *(int *)(param_1 + 0x180) = (int)piVar2;
    }
    else {
      *(int **)(*(int *)(param_1 + 0x184) + 4) = piVar2;
    }
    *(int **)(param_1 + 0x184) = piVar2;
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + -1;
  }
  return 1;
}

