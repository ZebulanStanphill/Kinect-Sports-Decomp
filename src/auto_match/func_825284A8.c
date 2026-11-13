extern int fn_825279F8();
extern int fn_82528948();
extern int fn_82599808();


void fn_825284A8(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  
  iVar2 = fn_825279F8();
  if (iVar2 == 1) {
    fn_82528948(param_1);
  }
  if (iVar2 == 2) {
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48);
    *(unsigned int *)(param_1 + 0x48) = 0;
    puVar3 = (unsigned int *)fn_82599808();
    puVar6 = (unsigned int *)(param_2 + 0x40);
    iVar2 = *(int *)(param_2 + 0x44);
    while (iVar2 != 0) {
      puVar6 = (unsigned int *)puVar6[1];
      iVar2 = puVar6[1];
    }
    puVar6[1] = puVar3;
    *puVar3 = *puVar6;
    if ((uVar4 & 0xffffffff) != 0) {
      puVar6 = (unsigned int *)puVar3[2];
      puVar5 = (unsigned int *)uVar4;
      if (puVar6 == (unsigned int *)0x0) {
        puVar3[2] = puVar5;
        *puVar5 = puVar3;
      }
      else {
        piVar7 = puVar6 + 1;
        iVar2 = *piVar7;
        while (iVar2 != 0) {
          puVar6 = (unsigned int *)*piVar7;
          piVar7 = puVar6 + 1;
          iVar2 = puVar6[1];
        }
        uVar1 = *puVar6;
        *piVar7 = (int)puVar5;
        *puVar5 = uVar1;
      }
    }
  }
  return;
}

