extern int fn_825A6A78();
extern int fn_825A6B58();
extern int fn_825A7178();
extern int fn_82604780();
extern int fn_82CED628();


void fn_825A6940(int param_1)

{
  unsigned iVar1;
  float fVar2;
  
  iVar1 = *(unsigned *)(param_1 + 0x7c0);
  if ((((iVar1 != 0) && (*(unsigned *)(iVar1 + 8) != 0)) && (*(int *)(param_1 + 0x36c) == 0)) &&
     (fn_82604780(), *(unsigned char *)(iVar1 + 0xe8) != '\x05')) {
    if (*(unsigned *)(param_1 + 0x4e0) == 0) {
      if (*(int *)(param_1 + 0x580) == 0) {
        return;
      }
      fn_825A6A78(param_1);
    }
    *(unsigned int *)(*(unsigned *)(param_1 + 0x4e0) + 0x118) = *(unsigned int *)(param_1 + 0x59c);
    if (*(float *)(param_1 + 0x5c4) > 0.0f) { fn_825A6B58(param_1); } else {
      if ((*(int *)(param_1 + 0x584) != 0) || (*(int *)(param_1 + 0x58c) != 0)) {
        iVar1 = *(unsigned *)(param_1 + 0x4e0);
        if (*(int *)(iVar1 + 0x104) != 0) {
          *(unsigned int *)(iVar1 + 0x104) = 0;
          *(unsigned int *)(iVar1 + 0x120) = 0;
                    /* WARNING: Subroutine does not return */
          fn_82CED628(iVar1 + 0x14,"Actuator (disabled)");
        }
        *(unsigned int *)(param_1 + 0x584) = 0;
      }
      if ((*(int *)(param_1 + 0x580) != 0) ||
         (((*(int *)(param_1 + 0x588) != 0 && (*(int *)(*(unsigned *)(param_1 + 0x4e0) + 0x104) == 0)) &&
          (*(int *)(param_1 + 0x58c) == 0)))) {
        fn_825A7178(param_1);
      }
    }

  }
  return;
}

