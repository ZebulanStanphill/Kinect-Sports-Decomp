extern int fn_82CFF8D0();


void fn_82D717C8(int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  
  if ((param_1[3] & 0x80000000U) == 0) {
    uVar1 = fn_82CFF8D0(param_1[1],param_1[3] << 2);
    (**(int (***)())(*param_2 + 0x14))(param_2,3,0xffffffff82139c0c,param_1[1],param_1[2] << 2,uVar1);
  }
  iVar3 = 0;
  if (0 < param_1[2]) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      puVar5 = *(unsigned char **)(iVar2 + param_1[1]);
      iVar2 = iVar2 + 4;
      if (iVar3 == param_1[2]) {
        puVar4 = puVar5 + *param_1;
      }
      else {
        puVar4 = puVar5 + 0x200;
      }
      for (; puVar5 < puVar4; puVar5 = puVar5 + (unsigned char)puVar5[3]) {
        switch(*puVar5) {
        case 2:
        case 4:
        case 6:
        case 10:
        case 0xc:
        case 0xe:
          (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82139bf8,*(unsigned int *)(puVar5 + 8),0);
        }
      }
    } while (iVar3 < param_1[2]);
  }
  return;
}

