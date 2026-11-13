extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822B3058();
extern int fn_82321D30();
extern int fn_8240DC58();


void fn_8240DB68(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_60 [1];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [32];

  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  fn_822B3058(auStack_60,*(unsigned int *)(param_1 + 0x40));
  iVar2 = (**(int (***)())(*(int *)uVar3 + 4))(uVar3);
  fn_82321D30(auStack_50,*(unsigned int *)(iVar2 + 0x5b0),iVar2);
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  fn_822B3058(auStack_40,*(unsigned int *)(param_1 + 0x40));
  iVar2 = (**(int (***)())(*(int *)uVar3 + 8))(uVar3);
  fn_82321D30(auStack_60,*(unsigned int *)(iVar2 + 0x5b0),iVar2);
  fn_8240DC58(param_1);
  puVar1 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  return;
}
