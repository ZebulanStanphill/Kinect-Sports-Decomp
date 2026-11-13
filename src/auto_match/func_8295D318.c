extern unsigned int *auStack_4c;
extern int fn_82953B18();
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_8295D318(int *param_1,int param_2,int *param_3,unsigned __int64 param_4,int *param_5,int *param_6,
             int *param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  uVar1 = (**(int (***)())(*param_1 + 0x130))();
  uVar1 = fn_8295D0A8(param_1,uVar1);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar1 = (**(int (***)())(*param_1 + 0x140))
                    (param_1,*(unsigned int *)(*param_3 * 4 + param_1[5]),&uStack_5c,auStack_4c,
                     &uStack_50);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar1 = (**(int (***)())(*param_1 + 0x144))(param_1,param_3,param_4,&uStack_60,uStack_50);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar1 = (**(int (***)())(*param_1 + 0x138))
                    (param_1,-(unsigned int)(in_stack_0000006c != 0) & 0x400000 | uStack_5c,uStack_60,
                     auStack_4c[0]);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (param_2 == 8) {
    uStack_60 = 0x70000;
    goto LAB_8295d46c;
  }
  if (param_2 != 9) {
    if (param_2 == 0x5a) {
      uStack_60 = 0x30000;
      goto LAB_8295d46c;
    }
    if ((((param_2 == 6) || (param_2 == 0xe)) || (param_2 == 0xf)) || (param_2 == 7)) {
      uStack_60 = 0x10000;
      goto LAB_8295d46c;
    }
    if (param_2 != 0x25) goto LAB_8295d46c;
  }
  uStack_60 = 0xf0000;
LAB_8295d46c:
  if (param_5 != (int *)0x0) {
    uVar1 = (**(int (***)())(*param_1 + 0x148))
                      (param_1,*(unsigned int *)(*param_5 * 4 + param_1[5]),&uStack_5c,&uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(int (***)())(*param_1 + 0x14c))(param_1,param_5,param_8,uStack_60,&uStack_54);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (in_stack_00000054 == 0) {
      uVar2 = (unsigned __int64)uStack_5c;
    }
    else {
      uVar2 = fn_82953B18(uStack_5c);
    }
    uVar1 = (**(int (***)())(*param_1 + 0x13c))(param_1,uVar2,uStack_54,uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  if (param_6 != (int *)0x0) {
    uVar1 = (**(int (***)())(*param_1 + 0x148))
                      (param_1,*(unsigned int *)(*param_6 * 4 + param_1[5]),&uStack_5c,&uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(int (***)())(*param_1 + 0x14c))(param_1,param_6,param_8,uStack_60,&uStack_54);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (in_stack_0000005c == 0) {
      uVar2 = (unsigned __int64)uStack_5c;
    }
    else {
      uVar2 = fn_82953B18(uStack_5c);
    }
    uVar1 = (**(int (***)())(*param_1 + 0x13c))(param_1,uVar2,uStack_54,uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  if (param_7 != (int *)0x0) {
    uVar1 = (**(int (***)())(*param_1 + 0x148))
                      (param_1,*(unsigned int *)(*param_7 * 4 + param_1[5]),&uStack_5c,&uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(int (***)())(*param_1 + 0x14c))(param_1,param_7,param_8,uStack_60,&uStack_54);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (in_stack_00000064 == 0) {
      uVar2 = (unsigned __int64)uStack_5c;
    }
    else {
      uVar2 = fn_82953B18(uStack_5c);
    }
    uVar1 = (**(int (***)())(*param_1 + 0x13c))(param_1,uVar2,uStack_54,uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  uVar1 = (**(int (***)())(*param_1 + 0x134))(param_1);
  if ((-1 < (int)uVar1) && (uVar1 = fn_829548C8(param_1), -1 < (int)uVar1)) {
    uVar1 = 0;
  }
  return uVar1;
}

