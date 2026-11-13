extern int fn_82D98A80();


void fn_82DBEC78(int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  uVar4 = (**(int (***)())(*param_1 + 0x20))();
  if (uVar4 < 0x10) {
    do {
      iVar1 = *(int *)(uVar4 * 4 + -0x7d241340);
      switch(iVar1) {
      case -0x7d241300:
        param_1 = (int *)param_1[6];
        break;
      case -0x7d2412f8:
        param_1 = (int *)fn_82D98A80(param_1);
        break;
      case -0x7d2412c8:
        puVar2 = (unsigned int *)(iVar1 + param_2 & 0xfffffff0);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar3 = (unsigned int *)((int)param_1 + iVar1 + param_3 * 0x40 + 0x20 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        puVar2 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(param_1 + param_3 * 0x10 + 0xc) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        puVar2 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(param_1 + param_3 * 0x10 + 0x10) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        puVar2 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(param_1 + param_3 * 0x10 + 0x14) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        return;
      case -0x7d241288:
        puVar2 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(param_1 + (param_3 + 2) * 4) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
      case -0x7d241274:
        goto switchD_82dbecbc_caseD_82dbed8c;
      }
      uVar4 = (**(int (***)())(*param_1 + 0x20))(param_1);
    } while (uVar4 < 0x10);
  }
  else {
switchD_82dbecbc_caseD_82dbed8c:;}
  return;
}

