extern unsigned int lbl_82005758;


void fn_829AB4E8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  iVar1 = param_1[9];
  if (iVar1 == 1) {
    param_1[10] = 1;
    param_1[0xb] = 1;
    goto LAB_829ab6bc;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if ((param_1[0x4a] == 0) || (*(char *)(param_1 + 0x4b) == '\0')) {
        param_1[10] = 4;
        param_1[0xb] = 4;
      }
      else if (*(char *)(param_1 + 0x4b) == '\x02') {
        param_1[0xb] = 4;
        param_1[10] = 5;
      }
      else {
        *(unsigned int *)(*param_1 + 0x14) = 0x72;
        *(unsigned int *)(*param_1 + 0x18) = (unsigned int)*(unsigned char *)(param_1 + 0x4b);
        (**(int (***)())(*param_1 + 4))(param_1,0xffffffffffffffff);
        param_1[0xb] = 4;
        param_1[10] = 5;
      }
    }
    else {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    goto LAB_829ab6bc;
  }
  if (param_1[0x47] == 0) {
    if (param_1[0x4a] == 0) {
      piVar2 = (int *)param_1[0x37];
      iVar1 = *piVar2;
      iVar3 = piVar2[0x15];
      iVar4 = piVar2[0x2a];
      if (iVar1 == 1) {
        if ((iVar3 == 2) && (iVar4 == 3)) goto LAB_829ab63c;
      }
      else if (((iVar1 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) goto LAB_829ab664;
      iVar5 = *param_1;
      *(int *)(iVar5 + 0x1c) = iVar3;
      *(int *)(iVar5 + 0x18) = iVar1;
      *(int *)(iVar5 + 0x20) = iVar4;
      *(unsigned int *)(*param_1 + 0x14) = 0x6f;
      (**(int (***)())(*param_1 + 4))(param_1,1);
      param_1[0xb] = 2;
      param_1[10] = 3;
      goto LAB_829ab6bc;
    }
    if (*(char *)(param_1 + 0x4b) == '\0') {
LAB_829ab664:
      param_1[10] = 2;
      param_1[0xb] = 2;
      goto LAB_829ab6bc;
    }
    if (*(char *)(param_1 + 0x4b) != '\x01') {
      *(unsigned int *)(*param_1 + 0x14) = 0x72;
      *(unsigned int *)(*param_1 + 0x18) = (unsigned int)*(unsigned char *)(param_1 + 0x4b);
      (**(int (***)())(*param_1 + 4))(param_1,0xffffffffffffffff);
      param_1[0xb] = 2;
      param_1[10] = 3;
      goto LAB_829ab6bc;
    }
  }
LAB_829ab63c:
  param_1[0xb] = 2;
  param_1[10] = 3;
LAB_829ab6bc:
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar6 = lbl_82005758;
  param_1[0x13] = 1;
  *(unsigned __int64 *)(param_1 + 0xe) = uVar6;
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0x100;
  param_1[0x22] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}

