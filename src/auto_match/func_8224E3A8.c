extern int fn_822408B0();
extern int fn_82243568();
extern int fn_8224F2B8();
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();
extern int fn_828A9550();


void fn_8224E3A8(int param_1)

{
  unsigned int uVar1;
  int lVar2;
  int sub33c;
  int sub780;
  int sub2e8;
  int sub630;
  int iVar3;
  int lVar4;
  unsigned int uVar5;
  
  fn_828A9550(param_1);
  uVar5 = (unsigned int)*(unsigned int *)(param_1 + 0x10);
  sub33c=param_1 + 0x33c;
  uVar1 = fn_82897B18(uVar5 + 0x354);
  fn_82897600(param_1,sub33c,uVar1);
  *(unsigned int *)(sub33c + 0x28) = *(unsigned int *)(param_1 + 0xc);
  fn_82898220(sub33c,param_1,uVar5 + 0x354,*(unsigned int *)(param_1 + 4));
  sub780=param_1 + 0x780;
  uVar1 = fn_82897B18(uVar5 + 0x854);
  fn_82897600(param_1,sub780,uVar1);
  *(unsigned int *)(sub780 + 0x28) = *(unsigned int *)(param_1 + 0xc);
  fn_82898220(sub780,param_1,uVar5 + 0x854,*(unsigned int *)(param_1 + 4));
  iVar3 = param_1 + 0x7d4;
  lVar4 = uVar5 + 0x8ac;
  lVar2 = 8;
  do {
    fn_8224F2B8(iVar3 + -0x444,param_1,lVar4 + -0x500);
    fn_8224F2B8(iVar3,param_1,lVar4);
    lVar2 = lVar2 + -1;
    lVar4 = lVar4 + 0x68;
    iVar3 = iVar3 + 0x54;
  } while (lVar2 != 0);
  lVar2 = uVar5 + 0x2fc;
  sub2e8=param_1 + 0x2e8;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,sub2e8,uVar1);
  *(unsigned int *)(sub2e8 + 0x28) = *(unsigned int *)(param_1 + 0xc);
  fn_82898220(sub2e8,param_1,lVar2,*(unsigned int *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(sub2e8 + 4,0,uVar1,0);
  lVar2 = uVar5 + 0x6ec;
  sub630=param_1 + 0x630;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,sub630,uVar1);
  *(unsigned int *)(sub630 + 0x28) = *(unsigned int *)(param_1 + 0xc);
  fn_82898220(sub630,param_1,lVar2,*(unsigned int *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(sub630 + 4,0,uVar1,0);
  fn_822408B0(param_1 + 0x684,param_1,uVar5 + 0x744);
  fn_822408B0(param_1 + 0x6d8,param_1,uVar5 + 0x79c);
  fn_8224F2B8(param_1 + 0x72c,param_1,uVar5 + 0x7f4);
  fn_8224F2B8(param_1 + 0xa74,param_1,uVar5 + 0xbec);
  fn_8224F2B8(param_1 + 0xac8,param_1,uVar5 + 0xc44);
  fn_8224F2B8(param_1 + 0xb1c,param_1,uVar5 + 0xca4);
  return;
}

