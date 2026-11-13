extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_82F8EE48();
extern int fn_82F8F608();
extern int fn_82F8F6B0();
extern int fn_82F8FC20();
extern int fn_82F8FC70();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000020;
extern unsigned int uStack0000002c;
extern unsigned int uStack_28;


unsigned int
fn_82F8F368(unsigned int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned __int64 uStack00000020;
  unsigned int uStack0000002c;
  unsigned char auStack_38 [8];
  unsigned char auStack_30 [8];
  unsigned int uStack_28;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  uStack0000002c = param_4;
  iVar4 = fn_82F8EE48(param_2);
  if (iVar4 == 0) {
    uStack_28 = 0;
  }
  else {
    uVar3 = fn_82F8F608(auStack_38,uStack0000001c);
    uStack_28 = fn_82F8FC70(&stack0x00000020,uVar3);
  }
  uVar2 = uStack_28;
  fn_82F8F6B0(uStack0000001c,uStack00000020,1,uStack0000002c);
  uVar1 = uStack00000014;
  uVar3 = fn_82F8F608(auStack_30,uStack0000001c);
  fn_82F8FC20(uVar1,uVar3,uVar2);
  return uStack00000014;
}

