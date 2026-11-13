extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_82686228();
extern int fn_82686CA8();
extern int fn_82687270();
extern int fn_826874B8();
extern int fn_82687570();
extern int fn_82687AB8();
extern int fn_826F3700();
extern int fn_8275A5A0();
extern unsigned int iStack_90;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;


unsigned __int64 fn_8275ADD0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int *param_4,
                       unsigned int param_5,unsigned int param_6,unsigned char param_7)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  struct { int first; unsigned int second; } stack_pair_90;

  int *piStack_88;
  unsigned int uStack_84;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned char uStack_54;

  fn_82686228(&piStack_88,0xffffffff831566a4,param_1);
  uVar5 = 0;
  stack_pair_90.first = 0;
  stack_pair_90.second = 0;
  iVar3 = fn_82687AB8(param_2,&stack_pair_90.first,&piStack_88);
  if (iVar3 != 3) {
    uVar5 = fn_82686CA8(&stack_pair_90.first);
    goto LAB_8275af34;
  }
  uVar1 = fn_8275A5A0(param_1,param_3,*(unsigned int *)(param_2 + 0x2c));
  if (uVar1 == 0) {
LAB_8275af04:
    fn_82687570(stack_pair_90.second,0xffffffff82014600);
  }
  else {
    uStack_58 = *(unsigned int *)(param_2 + 0x2c);
    stack_pair_80.first = 1;
    uVar4 = 0;
    uStack_78 = 0;
    stack_pair_80.second = 2;
    uStack_74 = 1;
    uStack_6c = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_70 = (int)uVar1;
    uStack_68 = param_5;
    uStack_64 = param_6;
    uStack_54 = param_7;
    if (param_4 != (int *)0x0) {
      uVar4 = (**(int (***)())(*param_4 + 4))(param_4,&stack_pair_80.first);
    }
    uVar2 = fn_8267B890(uStack_58,0x1c,0);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar5 = fn_826F3700(uVar2,uVar4,&piStack_88,2);
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_826874B8(stack_pair_90.second,uVar5);
    }
    if ((uVar4 & 0xffffffff) != 0) {
      fn_8267C498(uVar4);
    }
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275af04;
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8267C498(uVar1);
  }
LAB_8275af34:
  if (stack_pair_90.first == 1) {
    fn_82687270(stack_pair_90.second);
  }
  else if (1 < stack_pair_90.first) {
    fn_8267C4F0(stack_pair_90.second);
  }
  if (piStack_88 != (int *)0x0) {
    (**(int (***)())(*piStack_88 + 8))(piStack_88,uStack_84);
  }
  return uVar5;
}
