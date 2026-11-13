extern int fn_82F691F0();


void fn_829AB3C8(int *param_1,int param_2,int param_3)

{
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(unsigned int *)(*param_1 + 0x14) = 0xc;
    *(unsigned int *)(*param_1 + 0x18) = 0x3e;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(int (***)())*param_1)();
  }
  if (param_3 != 0x1d8) {
    *(unsigned int *)(*param_1 + 0x14) = 0x15;
    *(unsigned int *)(*param_1 + 0x18) = 0x1d8;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(int (***)())*param_1)(param_1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,0x1d8);
}

