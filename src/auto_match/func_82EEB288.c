extern int fn_82A28568();
extern int fn_82A2A360();


void fn_82EEB288(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  uVar2 = fn_82A2A360();
  piVar3 = (int *)fn_82A28568(uVar2,0,uVar1);
  if (piVar3 != (int *)0x0) {
    puVar6 = (unsigned int *)0x0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0xc);
    uVar7 = 0;
    *piVar3 = (int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x28) + (__int64)(int)piVar3 + 0x1f >> 5 &
                    0xffffffff) << 5);
    puVar4 = puVar6;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        iVar5 = *(int *)(param_1 + 0x18) * uVar7;
        uVar7 = uVar7 + 1;
        puVar6 = (unsigned int *)(iVar5 + *(int *)(param_1 + 0x14) + *piVar3);
        puVar6[1] = puVar4;
        *puVar6 = piVar3;
        puVar4 = puVar6;
      } while (uVar7 < *(unsigned int *)(param_1 + 0x10));
    }
    piVar3[2] = (int)puVar6;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[1] = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}

