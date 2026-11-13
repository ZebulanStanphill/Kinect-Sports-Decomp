#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_1c;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_8295EF88(int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  struct { unsigned int first; unsigned int second; } stack_pair_28;

  struct { unsigned int first; unsigned int second; } stack_pair_20;


  uVar1 = fn_8295D0A8(param_1,1);
  if ((-1 < (int)uVar1) &&
     (uVar1 = (**(int (***)())(*param_1 + 0x140))
                        (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                         &uStack_30,&stack_pair_20.second,&stack_pair_20.first), -1 < (int)uVar1)) {
    uVar1 = (**(int (***)())(*param_1 + 0x144))
                      (param_1,*(unsigned int *)(param_1[0x41] + 0x10),
                       *(unsigned int *)(param_1[0x41] + 0xc),&uStack_2c,stack_pair_20.first);
    if ((-1 < (int)uVar1) &&
       ((uVar1 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_30,uStack_2c,stack_pair_20.second),
        -1 < (int)uVar1 &&
        (uVar1 = (**(int (***)())(*param_1 + 0x148))
                           (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                            &uStack_30,&stack_pair_28.second), -1 < (int)uVar1)))) {
      uVar1 = (**(int (***)())(*param_1 + 0x14c))
                        (param_1,*(unsigned int *)(param_1[0x41] + 8),
                         *(unsigned int *)(param_1[0x41] + 0xc),uStack_2c,&stack_pair_28.first);
      if (-1 < (int)uVar1) {
        uVar2 = (unsigned __int64)uStack_30;
        if ((uStack_30 & 0xf000000) == 0xb000000) {
          stack_pair_28.first = stack_pair_28.first | 0xc000000;
          uVar2 = (CONCAT44(uStack_30,uStack_30) & 0xfffffffffcffffff) << 0x20 |
                  (unsigned __int64)uStack_30 & 0xf4ffffff;
        }
        else {
          stack_pair_28.first = stack_pair_28.first | 0x1000000;
        }
        uVar1 = (**(int (***)())(*param_1 + 0x13c))(param_1,uVar2,stack_pair_28.first,stack_pair_28.second);
        if (((-1 < (int)uVar1) &&
            (uVar1 = (**(int (***)())(*param_1 + 0x134))(param_1), -1 < (int)uVar1)) &&
           (uVar1 = fn_829548C8(param_1), -1 < (int)uVar1)) {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}
