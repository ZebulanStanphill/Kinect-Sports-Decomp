extern int fn_82F622A8();


void fn_824A8410(int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  
  if (param_2 != param_1) {
    puVar1 = (unsigned int *)*param_1;
    puVar2 = (unsigned int *)*param_2;
    puVar6 = (unsigned int *)*puVar1;
    puVar7 = (unsigned int *)*puVar2;
    while (puVar6 != puVar1) {
      if (puVar7 == puVar2) {
        return;
      }
      if ((float)puVar6[3] <= (float)puVar7[3]) {
        puVar6 = (unsigned int *)*puVar6;
      }
      else {
        puVar3 = (unsigned int *)*puVar7;
        if (param_1[1] == 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
          fn_82F622A8(0xffffffff8219852c);
        }
        param_1[1] = param_1[1] + 1;
        param_2[1] = param_2[1] + -1;
        *(unsigned int **)puVar7[1] = puVar3;
        *(unsigned int **)puVar3[1] = puVar6;
        *(unsigned int **)puVar6[1] = puVar7;
        uVar5 = puVar6[1];
        puVar6[1] = puVar3[1];
        puVar3[1] = puVar7[1];
        puVar7[1] = uVar5;
        puVar7 = puVar3;
      }
    }
    if (puVar7 != puVar2) {
      uVar4 = param_2[1];
      if (0x1ffffffeU - param_1[1] < uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff8219852c);
      }
      param_1[1] = param_1[1] + uVar4;
      param_2[1] = param_2[1] - uVar4;
      *(unsigned int **)puVar7[1] = puVar2;
      *(unsigned int **)puVar2[1] = puVar1;
      *(unsigned int **)puVar1[1] = puVar7;
      uVar5 = puVar1[1];
      puVar1[1] = puVar2[1];
      puVar2[1] = puVar7[1];
      puVar7[1] = uVar5;
    }
  }
  return;
}

