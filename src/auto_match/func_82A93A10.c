extern unsigned int *auStack_80;
extern int fn_8263AB38();
extern int fn_8263BFD0();
extern int memcpy();
extern unsigned int uStack_50;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


__int64 fn_82A93A10(unsigned __int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, int param_8, unsigned __int64 unused_arg_9, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned __int64 unused_arg_12, int in_stack_00000074, int in_stack_0000007c)

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;




  unsigned int *in_stack_00000084;
  unsigned int *in_stack_0000008c;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned __int64 uStack_88;
  unsigned int auStack_80 [5];
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_50;
  
  fn_8263AB38(param_6 & 0x3f,&uStack_8c,&uStack_90);
  if ((param_4 & 0xffffffff) != 1) {
    if ((param_4 & 0xffffffff) != 0) goto LAB_82a93ac0;
    if ((param_1 & 0xffffffff) == 1) {
      if (((param_2 & 0xffffffff) != 1) || ((param_3 & 0xffffffff) != 1)) goto LAB_82a93ac0;
      if (param_8 == 0) goto LAB_82a93aa0;
    }
    if (((((param_1 & 0xffffffff) != 3) || ((param_2 & 0xffffffff) != 3)) ||
        ((param_3 & 0xffffffff) != 3)) || (param_8 == 0)) goto LAB_82a93ac0;
  }
LAB_82a93aa0:
  if (in_stack_00000074 == 3) {
    trapWord(6,(unsigned __int64)uStack_90,0);
  }
LAB_82a93ac0:
  lVar5 = 6;
  puVar1 = &uStack_88;
  do {
    puVar2 = puVar1;
    puVar1 = puVar2 + 1;
    *puVar1 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned int *)(puVar2 + 2) = 0;
  fn_8263BFD0(in_stack_00000074,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  uStack_6c = 0xffff0000;
  uStack_68 = 0xffff0000;
  uVar3 = 3;
  auStack_80[1] = 1;
  uStack_60 = in_stack_0000005c & 0xfffff000 | uStack_60 & 0xfff;
  auStack_80[0] = 3;
  if ((param_5 & 4) != 0) {
    uVar3 = 0x200003;
    auStack_80[0] = 0x200003;
  }
  if ((param_5 & 0x200) != 0) {
    auStack_80[0] = uVar3 | 0x400000;
  }
  if ((unsigned __int64)uStack_8c == 0) {
    uVar4 = (unsigned __int64)uStack_90;
    uStack_50 = uStack_50 & 0xfff;
  }
  else if (in_stack_00000064 == 0xffffffff) {
    uVar4 = (unsigned __int64)uStack_90 + 0xfff & 0xfffff000;
    uStack_50 = uStack_50 & 0xfff | (int)uVar4 + in_stack_0000005c & 0xfffff000;
  }
  else {
    uVar4 = (unsigned __int64)uStack_90;
    uStack_50 = in_stack_00000064 & 0xfffff000 | uStack_50 & 0xfff;
  }
  if (in_stack_00000084 != (unsigned int *)0x0) {
    *in_stack_00000084 = (int)uVar4;
  }
  if (in_stack_0000008c != (unsigned int *)0x0) {
    *in_stack_0000008c = uStack_8c;
  }
  if (in_stack_0000007c != 0) {
    memcpy(in_stack_0000007c,auStack_80,0x34,1,0xffffffffffff0000,0xffffffffffff0000);
  }
  return uVar4 + uStack_8c;
}

