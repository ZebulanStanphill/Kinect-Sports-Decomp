extern int fn_828184A8();
extern int fn_82820EF8();
extern unsigned char fn_82827750();
extern int fn_8282DDD8();
extern int fn_82F6E380();


void fn_8282E0B0(int param_1,unsigned int *param_2)

{
  unsigned char cVar2;
  unsigned int uVar1;
  int lVar3;
  int iVar4;
  
  *(unsigned int *)(param_1 + 0x1c) = 0x80;
  fn_82F6E380(param_1 + 0x14);
  cVar2 = fn_82827750(param_1);
  if (cVar2 != '\0') {
    fn_82820EF8(param_1 + 0x1c,4);
    fn_82820EF8(param_1 + 0x52,1);
    fn_82820EF8(param_1 + 0x24,4);
    fn_82820EF8(param_1 + 0x28,4);
    fn_82820EF8(param_1 + 0x2c,4);
    fn_82820EF8(param_1 + 0x30,4);
    fn_82820EF8(param_1 + 0x3c,4);
    fn_82820EF8(param_1 + 0x40,4);
    fn_82820EF8(param_1 + 0x34,4);
    fn_82820EF8(param_1 + 0x38,4);
    fn_82820EF8(param_1 + 0x44,4);
    fn_82820EF8(param_1 + 0x48,4);
    fn_82820EF8(param_1 + 0x54,4);
    iVar4 = param_1 + 0x68;
    for (lVar3 = 0; lVar3 < 2; lVar3++) {
      fn_82820EF8(iVar4 + -0x10,4);
      fn_82820EF8(iVar4,4);
      iVar4 = iVar4 + 0x14;
    }
    fn_82820EF8(param_1 + 0x14,8);
  }
  *(unsigned int *)(param_1 + 0x20) = 0;
  uVar1 = fn_828184A8(param_1,0x80);
  *(unsigned int *)(param_1 + 0x20) = uVar1;
  cVar2 = fn_82827750(param_1);
  if (cVar2 != '\0') {
    fn_82820EF8(param_1 + 0x20,4);
  }
  ((int (*)())param_2[2])(*param_2,0x80,param_1);
  fn_8282DDD8(param_2,0);
  return;
}

