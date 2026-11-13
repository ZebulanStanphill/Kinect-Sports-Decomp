typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B1F0();
extern int fn_8268B330();
extern int fn_8268BB68();
extern int fn_8268BEA8();
extern int fn_826944C8();
extern int fn_82696D38();
extern int fn_826A70B0();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8271C430(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char bVar5;
  unsigned int uStack_50;
  unsigned int *apuStack_4c [3];
  unsigned char auStack_40 [64];
  
  fn_8268AFB0(auStack_40,lbl_831E7E64);
  fn_8268B330(&uStack_50);
  fn_826A70B0(*(unsigned int *)*param_2,((unsigned int *)*param_2)[4],&uStack_50);
  fn_8268B1F0(auStack_40,(unsigned int *)(uStack_50 & 0xfffffffc) + 2,
                    *(unsigned int *)(uStack_50 & 0xfffffffc) & 0x7fffffff);
  fn_8268B1F0(auStack_40,0xffffffff8200268c,0xffffffffffffffff);
  fn_8268BEA8(&uStack_50);
  fn_82696D38(apuStack_4c,param_3,*(unsigned int *)(param_1 + 4),0xffffffffffffffff,0);
  fn_826A70B0(*apuStack_4c[0],apuStack_4c[0][4],&uStack_50);
  fn_8268B1F0(auStack_40,(unsigned int *)(uStack_50 & 0xfffffffc) + 2,
                    *(unsigned int *)(uStack_50 & 0xfffffffc) & 0x7fffffff);
  fn_8268B1F0(auStack_40,0xffffffff8200fcf8,0xffffffffffffffff);
  fn_8268BB68(*(unsigned int *)(param_1 + 8),auStack_40);
  lVar2 = (unsigned __int64)(unsigned int)apuStack_4c[0][2] - 1;
  bVar5 = (lVar2 == 0) << 1;
  apuStack_4c[0][2] = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(apuStack_4c[0]);
  }
  lVar2 = ((unsigned __int64)uStack_50 & 0xfffffffc) + 4;
  do {
    puVar4 = (unsigned int *)lVar2;
    uVar3 = (unsigned __int64)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar3 - 1,0,lVar2);
      *puVar4 = uVar1;
      bVar5 = 2;
    }
  } while (!(bool)(bVar5 >> 1 & 1));
  if (uVar3 == 1) {
    fn_8267BE38();
  }
  fn_8268AFD8(auStack_40);
  return;
}

