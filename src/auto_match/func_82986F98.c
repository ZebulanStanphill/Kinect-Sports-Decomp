extern int fn_8297F4D8();
extern int fn_8297FF30();
extern int fn_82980C18();
extern int fn_82980C90();
extern int fn_82986948();
extern unsigned int lbl_8204E4C4;


unsigned __int64
fn_82986F98(unsigned __int64 param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,int param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  int in_stack_00000064;
  
  iVar1 = *(int *)(param_2 + 8);
  if (param_3 == *(int *)(iVar1 + 0x10)) {
    uVar3 = 0;
    if ((param_8 & 4) != 0) {
      uVar3 = fn_82986948(param_1,*(unsigned int *)(iVar1 + 0x18),param_5,param_6,param_8);
    }
    if ((param_8 & 8) != 0) {
      iVar4 = fn_8297FF30(param_1,*(unsigned int *)(iVar1 + 0x18),param_5,param_6,param_8);
      uVar3 = iVar4 + uVar3;
    }
    if (uVar3 != 0xffffffff) {
      if (uVar3 < *in_stack_00000054) {
        *in_stack_00000054 = uVar3;
        *in_stack_0000005c = 0;
      }
      if ((uVar3 == *in_stack_00000054) && (*in_stack_0000005c < 0x40)) {
        *(int *)(*in_stack_0000005c * 4 + in_stack_00000064) = iVar1;
        *in_stack_0000005c = *in_stack_0000005c + 1;
      }
      if ((((param_7 != 0) && (*in_stack_00000054 == 0)) && (*(int *)(iVar1 + 0x30) != 0)) &&
         (*(int *)(iVar1 + 0x2c) == 0)) {
        if ((*(int *)(param_7 + 0x20) != 0) && (*(int *)(*(int *)(param_7 + 0x20) + 0x10) == 4)) {
          for (iVar4 = fn_8297F4D8(param_1,param_4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
            if (*(int *)(*(int *)(iVar4 + 8) + 0x30) == 0) {
              fn_82980C90(param_1,param_4,0xc06,0xffffffff8204e408,*(unsigned int *)(param_4 + 8));
              *(unsigned int *)(iVar1 + 0x2c) = 1;
              break;
            }
          }
        }
        for (iVar4 = *(int *)(param_2 + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
          if (*(int *)(*(int *)(iVar4 + 8) + 0x30) == 0) {
            fn_82980C90(param_1,param_4,0xc06,0xffffffff8204e408,*(unsigned int *)(param_4 + 8));
            *(unsigned int *)(iVar1 + 0x2c) = 1;
            break;
          }
        }
      }
    }
    uVar2 = 0;
  }
  else {
    if ((param_8 & 5) != 0) {
      fn_82980C18(param_1,param_4,0xbbd,0xffffffff8204e498,*(unsigned int *)(param_4 + 8),
                    (&lbl_8204E4C4)[*(int *)(iVar1 + 0x10)],(&lbl_8204E4C4)[param_3]);
    }
    uVar2 = 0xffffffff80004005;
  }
  return uVar2;
}

