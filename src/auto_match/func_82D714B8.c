extern int fn_82CFF928();


void fn_82D714B8(int *param_1,int *param_2,int *param_3)

{
  int (**pcVar1)();
  unsigned char *puVar2;
  int iVar3;
  int iVar4;
  unsigned char *puVar5;
  int iVar6;
  unsigned char *puVar7;
  
  iVar3 = param_1[2];
  iVar6 = 0;
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + 1;
      if (iVar6 == param_1[2]) {
        iVar3 = *param_1;
      }
      else {
        iVar3 = 0x200;
      }
      fn_82CFF928(param_3,0xffffffff82139c04,*(unsigned int *)(iVar4 + param_1[1]),iVar3,0x200);
      iVar3 = param_1[2];
      iVar4 = iVar4 + 4;
    } while (iVar6 < iVar3);
  }
  iVar6 = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar6 = iVar6 + 1;
      puVar7 = *(unsigned char **)(iVar3 + param_1[1]);
      iVar3 = iVar3 + 4;
      if (iVar6 == param_1[2]) {
        puVar5 = puVar7 + *param_1;
      }
      else {
        puVar5 = puVar7 + 0x200;
      }
      for (; puVar7 < puVar5; puVar7 = puVar7 + (unsigned char)puVar7[3]) {
        switch(*puVar7) {
        case 2:
        case 6:
        case 10:
        case 0xe:
          puVar2 = puVar7 + 0x20;
          break;
        default:
          goto switchD_82d715a4_caseD_3;
        case 4:
        case 0xc:
          puVar2 = puVar7 + 0x30;
        }
        pcVar1 = *(int (***)())((unsigned int)(unsigned char)puVar7[1] * 0x50 + *param_2 + 0x16cc);
        if (pcVar1 != (int (**)())0x0) {
          (*pcVar1)(puVar7,puVar2,param_2,param_3);
        }
        (**(int (***)())(*param_3 + 0xc))(param_3,0xffffffff82139bf8,*(unsigned int *)(puVar7 + 8),0);
switchD_82d715a4_caseD_3:;}
    } while (iVar6 < param_1[2]);
  }
  return;
}

