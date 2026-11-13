extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_8266F6A8();
extern int fn_82672C20();
extern int fn_82673A28();
extern int fn_82673C58();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned int *
fn_822CBBB0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
             unsigned int param_5)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = param_1 + 9;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x10] = 1;
  param_1[0x11] = param_4;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  param_1[0x1b] = 0;
  fn_82273CD8(&stack_pair_40.first,5);
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uStack_38 = param_5;
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EF20(auStack_50,uVar2,param_2,0,0,0x18280143);
  fn_823F2E20(puVar3,uVar2);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  fn_8266F6A8(*puVar3,4);
  fn_82672C20(*puVar3,0xffffffff821ad110,&stack_pair_40.first,1);
  fn_8266F640(*puVar3,1);
  fn_8266F628(*puVar3,1);
  fn_82673A28(*puVar3,0xffffffff822cbe50,param_1);
  fn_82673C58(*puVar3,0xffffffff822cc118,param_1,0);
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 4) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EF20(auStack_48,uVar2,param_3,0,0,0x18280143);
  fn_823F2E20(param_1,uVar2);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fn_8266F6A8(*param_1,4);
  fn_82672C20(*param_1,0xffffffff821ad110,&stack_pair_40.first,1);
  fn_8266F640(*param_1,1);
  fn_8266F628(*param_1,1);
  fn_82673A28(*param_1,0xffffffff822cbfb8,param_1);
  fn_82673C58(*param_1,0xffffffff822cc178,param_1,0);
  fn_82273C88(&stack_pair_40.first);
  return param_1;
}

