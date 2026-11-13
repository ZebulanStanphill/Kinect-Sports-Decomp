typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C4F0();
extern int fn_827903D0();


int * fn_82791CF0(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  unsigned int *puVar7;
  int iVar8;
  
  uVar1 = param_1[6];
  if (((int)uVar1 < 0) || (bVar4 = false, *(unsigned int *)(param_1[5] + 4) <= uVar1)) {
    bVar4 = true;
  }
  if (bVar4) {
    iVar3 = param_1[8];
    iVar8 = *(int *)param_1[7];
    iVar6 = ((int *)param_1[7])[1] - iVar3;
    param_1[1] = iVar3;
    iVar8 = iVar3 * 2 + iVar8;
  }
  else {
    uVar2 = param_1[8];
    puVar7 = (unsigned int *)(uVar1 * 0xc + *(int *)param_1[5]);
    uVar1 = *puVar7;
    if (uVar1 <= uVar2) {
      piVar5 = (int *)fn_827903D0(param_1,((unsigned __int64)uVar1 & 0x7fffffff) * 2 +
                                            (unsigned __int64)*(unsigned int *)param_1[7],uVar1,puVar7[1],puVar7[2]
                                   );
      return piVar5;
    }
    iVar6 = uVar1 - uVar2;
    iVar8 = *(int *)param_1[7];
    param_1[1] = uVar2;
    iVar8 = iVar8 + uVar2 * 2;
  }
  param_1[2] = iVar6;
  *param_1 = iVar8;
  if (param_1[3] != 0) {
    fn_8267C4F0();
  }
  param_1[3] = 0;
  return param_1;
}

