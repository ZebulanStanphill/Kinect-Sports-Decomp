extern int fn_82265680();
extern int fn_82266360();
extern int fn_82266628();
extern int fn_82266AE8();
extern int fn_82517978();
extern int fn_8252D370();
extern int fn_8252D6E0();
extern int fn_8266F2D0();
extern int fn_82A1C098();
extern int fn_82F691F0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82265B10(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  if (*(int *)(param_2 + 0x50c) == 0) {
    if (*(int *)(param_2 + 0x104) != 0x3e5) {
      if (*(int *)(param_2 + 0x630) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_2 + 0x104,0,0x1c);
      }
      iVar2 = fn_82A1C098(param_2 + 0x104);
      if (iVar2 < 0) {
        *(unsigned int *)(param_2 + 0x510) = 3;
        *(unsigned int *)(param_2 + 0x514) = 3;
        *(unsigned int *)(param_2 + 0x538) = 1;
      }
      fn_82265680(param_2);
    }
  }
  else if (*(int *)(param_2 + 0x50c) == 2) {
    piVar1 = *(int **)(*(int *)(param_2 + 0xdc) + 0x8c0);
    iVar2 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
    if (iVar2 == 0) {
      (**(int (***)())(*piVar1 + 0xc))(piVar1);
    }
    else {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fn_82266628(param_2,3,2);
      fn_8252D370(*(unsigned int *)(param_2 + 0xdc));
      fn_8252D6E0(*(unsigned int *)(param_2 + 0xdc),*(unsigned int *)(param_2 + 0x100));
      fn_82266AE8(param_2);
      *(unsigned int *)(param_2 + 0x50c) = 3;
      if ((*(int *)(param_2 + 0x524) != 0) &&
         (iVar2 = *(int *)(*(int *)(param_2 + 0xdc) + 0x8c0), iVar2 != 0)) {
        stack_pair_30.first = 0;
        stack_pair_30.second = 0;
        fn_82517978(&stack_pair_30.first,*(unsigned int *)(param_2 + 0x524),
                          *(unsigned int *)(param_2 + 0x528),0);
        fn_8266F2D0((double)ltcg_pool_0_0f,iVar2,&stack_pair_30.first,0);
      }
    }
  }
  fn_82266360(param_1,param_2);
  return;
}

