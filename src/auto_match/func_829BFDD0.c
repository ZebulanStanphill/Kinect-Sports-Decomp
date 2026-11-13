extern int fn_829BF260();
extern int fn_829BF380();
extern int fn_829BF450();
extern int fn_829BF4D8();
extern int fn_829BF4F8();
extern int fn_829BF560();
extern int fn_829BF650();
extern int fn_829BFAA0();
extern int fn_829BFC08();
extern int fn_82BA02A8();


void fn_829BFDD0(int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (unsigned int *)(**(int (***)())param_1[1])(param_1,1,0x40);
  param_1[0x73] = (int)puVar2;
  *puVar2 = fn_82BA02A8;
  iVar4 = param_1[10];
  if (iVar4 - 1U < 5) {
    if ((iVar4 == 2) || (iVar4 == 3)) {
      if (param_1[9] != 3) goto LAB_829bfe70;
    }
    else if ((iVar4 == 4) || (iVar4 != 1)) {
      if (param_1[9] != 4) goto LAB_829bfe70;
    }
    else if (param_1[9] != 1) {
LAB_829bfe70:
      *(unsigned int *)(*param_1 + 0x14) = 10;
      (**(int (***)())*param_1)(param_1);
    }
  }
  else if (param_1[9] < 1) goto LAB_829bfe70;
  iVar4 = param_1[0xb];
  if (iVar4 == 1) {
    param_1[0x1e] = 1;
    if ((param_1[10] == 1) || (param_1[10] == 3)) {
      iVar4 = 1;
      puVar2[1] = fn_829BF4D8;
      if (1 < param_1[9]) {
        iVar3 = 0x54;
        do {
          iVar4 = iVar4 + 1;
          iVar1 = iVar3 + param_1[0x37];
          iVar3 = iVar3 + 0x54;
          *(unsigned int *)(iVar1 + 0x30) = 0;
        } while (iVar4 < param_1[9]);
      }
      goto LAB_829c0058;
    }
  }
  else {
    if (iVar4 == 2) {
      iVar4 = param_1[10];
      param_1[0x1e] = 3;
      if (iVar4 == 3) {
        puVar2[1] = fn_829BF380;
        fn_829BF260(param_1);
      }
      else if (iVar4 == 1) {
        puVar2[1] = fn_829BF4F8;
      }
      else if (iVar4 == 2) {
        puVar2[1] = fn_829BF450;
      }
      else if (iVar4 == 4) {
        puVar2[1] = fn_829BFAA0;
        fn_829BF650();
      }
      else if (iVar4 == 5) {
        puVar2[1] = fn_829BFC08;
        fn_829BF260();
        fn_829BF650(param_1);
      }
      else {
        *(unsigned int *)(*param_1 + 0x14) = 0x1b;
        (**(int (***)())*param_1)(param_1);
      }
      goto LAB_829c0058;
    }
    if (iVar4 == 4) {
      param_1[0x1e] = 4;
      if (param_1[10] == 5) {
        puVar2[1] = fn_829BF560;
        fn_829BF260(param_1);
        goto LAB_829c0058;
      }
      if (param_1[10] == 4) {
        puVar2[1] = fn_829BF450;
        goto LAB_829c0058;
      }
    }
    else if (iVar4 == param_1[10]) {
      param_1[0x1e] = param_1[9];
      puVar2[1] = fn_829BF450;
      goto LAB_829c0058;
    }
  }
  *(unsigned int *)(*param_1 + 0x14) = 0x1b;
  (**(int (***)())*param_1)(param_1);
LAB_829c0058:
  if (param_1[0x15] == 0) {
    param_1[0x1f] = param_1[0x1e];
  }
  else {
    param_1[0x1f] = 1;
  }
  return;
}

