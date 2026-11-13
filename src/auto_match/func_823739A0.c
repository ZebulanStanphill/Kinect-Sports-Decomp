typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_82359DB8();
extern int fn_8265C9E0();
extern unsigned int iStack_30;
extern unsigned int lbl_82196E94;
extern unsigned int uStack_2c;
extern unsigned __int64 storeWordConditionalIndexed();


int * fn_823739A0(int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  int iStack_30;
  unsigned int uStack_2c;
  
  fn_82359DB8(&iStack_30,param_2 + 0x40,*(unsigned int *)(param_2 + 0x54));
  if (iStack_30 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    puVar3 = (unsigned int *)fn_8265C9E0(0x10);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3[3] = 0;
      puVar3[1] = 1;
      *puVar3 = &lbl_82196E94;
      puVar3[2] = 1;
    }
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    uVar5 = (unsigned __int64)uStack_2c;
    param_1[1] = (int)puVar3;
    *param_1 = 0;
  }
  else {
    uVar5 = (unsigned __int64)uStack_2c;
    if (uVar5 != 0) {
      do {
        puVar4 = (unsigned int *)(uVar5 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar4 + 1,0,uVar5 + 4);
          *puVar4 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    *param_1 = 0;
    param_1[1] = 0;
    uVar2 = uVar5;
    if (param_1 != &iStack_30) {
      param_1[1] = uStack_2c;
      uVar2 = 0;
      *param_1 = iStack_30;
    }
    if (uVar2 != 0) {
      fn_822315A0();
    }
  }
  if (uVar5 != 0) {
    fn_822315A0(uVar5);
  }
  return param_1;
}

