extern unsigned int *auStack_68;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822FB670();
extern int fn_82333AB0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;


void fn_82333B98(int param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned int *param_4, unsigned int *param_5, unsigned int *param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned __int64 unused_arg_9, unsigned int in_stack_0000005c)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int *in_stack_00000054;

  unsigned int *puStack_70;
  unsigned int *puStack_6c;
  unsigned char auStack_68 [1];

  uVar1 = *(unsigned int *)(param_1 + 0x80);
  puVar3 = (unsigned int *)fn_8265C9E0(0x88);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821AD588;
    puVar3[2] = 1;
    if (puVar3 + 3 != (unsigned int *)0x0) {
      fn_822FB670(puVar3 + 3,param_2,in_stack_0000005c,uVar1,param_2,0);
    }
  }
  puStack_70 = puVar3 + 3;
  puStack_6c = puVar3;
  uVar2 = fn_822C7578((unsigned __int64)*param_4 + 0x40,param_2);
  fn_82230218(uVar2,param_2,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((unsigned __int64)*param_5 + 0x40,param_2);
  fn_82230218(uVar2,param_2,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((unsigned __int64)*param_6 + 0x40,param_2);
  fn_82230218(uVar2,param_2,0,0xffffffffffffffff);
  uVar2 = fn_822C7578(puVar3 + 0x13,(unsigned __int64)*in_stack_00000054 + 4);
  fn_82230218(uVar2,param_3,0,0xffffffffffffffff);
  iVar4 = fn_82365BD8(auStack_68,in_stack_00000054);
  fn_82376640(puVar3 + 0xf,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  uVar2 = fn_82365BD8(auStack_68,&puStack_70);
  fn_82333AB0(param_7,param_8,uVar2,1);
  fn_822C8B40(param_1,&puStack_70);
  if (puStack_6c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  fn_82230300(param_2,1,0);
  fn_82230300(param_3,1,0);
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  if (param_5[1] != 0) {
    fn_822315A0();
  }
  if (param_6[1] != 0) {
    fn_822315A0();
  }
  if (in_stack_00000054[1] != 0) {
    fn_822315A0();
  }
  return;
}
