typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D1C120();


/* WARNING: Removing unreachable block (ram,0x82d1c628) */
/* WARNING: Removing unreachable block (ram,0x82d1c63c) */
/* WARNING: Removing unreachable block (ram,0x82d1c6c4) */
/* WARNING: Removing unreachable block (ram,0x82d1c6d4) */
/* WARNING: Removing unreachable block (ram,0x82d1c770) */
/* WARNING: Removing unreachable block (ram,0x82d1c780) */
/* WARNING: Removing unreachable block (ram,0x82d1c7c4) */

void fn_82D1C480(int *param_1,unsigned int param_2,int *param_3,int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned int in_r0;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  unsigned __int64 *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_b0 [1];
  unsigned char auStack_a0 [160];
  
  iVar4 = 0;
  if (0 < param_3[1]) {
    piVar6 = (int *)*param_3;
    do {
      if (((*piVar6 == *param_1) && (piVar6[1] == param_1[1])) ||
         ((piVar6[1] == *param_1 && (*piVar6 == param_1[1])))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if (iVar4 != -1) {
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 8;
    } while (iVar4 < param_3[1]);
  }
  iVar4 = fn_82CE5410();
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),param_3,0x20);
  }
  puVar7 = (unsigned __int64 *)(param_3[1] * 0x20 + *param_3);
  if (puVar7 != (unsigned __int64 *)0x0) {
    *puVar7 = *(unsigned __int64 *)param_1;
    puVar7[1] = *(unsigned __int64 *)(param_1 + 2);
    puVar7[2] = *(unsigned __int64 *)(param_1 + 4);
    puVar7[3] = *(unsigned __int64 *)(param_1 + 6);
  }
  param_3[1] = param_3[1] + 1;
  pcVar5 = (char *)fn_82D1C120(auStack_b0,param_1 + 4,param_2,*param_1,param_1[1],param_1[2],
                                     auStack_a0);
  if (*pcVar5 != '\0') {
    iVar4 = fn_82CE5410();
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),param_4,0x10);
    }
    puVar1 = (unsigned int *)(in_r0 & 0xfffffff0);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_4[1] * 0x10 + *param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    param_4[1] = param_4[1] + 1;
  }
  fn_82CE5410();
  return;
}

