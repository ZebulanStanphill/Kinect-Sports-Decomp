typedef unsigned char bool;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_827EFC70();
extern int fn_827EFC80();
extern int fn_827F3AB0();
extern int fn_827F3B90();
extern int fn_82811080();
extern int fn_82811438();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8255EF20(unsigned __int64 param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_50;
  unsigned char auStack_40 [1];
  
  uVar3 = fn_827F3AB0();
  uVar5 = 0;
  if ((uVar3 & 0xffffffff) < 0x19001) {
    uVar4 = fn_827EFC80();
    do {
      iVar1 = *(int *)uVar4;
      if (in_RESERVE != '\0') {
        iVar2 = storeWordConditionalIndexed(1,0,uVar4);
        *(int *)uVar4 = iVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (iVar1 == 0) {
      uVar5 = 1;
      uVar4 = fn_827EFC70();
      goto LAB_8255efac;
    }
  }
  auStack_50 = 0;
  fn_82811438(auStack_40,&auStack_50,0x10);
  uVar4 = fn_82811080(0xffffffff8320a3e0,uVar3,auStack_40);
LAB_8255efac:
  fn_827F3B90(param_1,uVar4,uVar3);
  return uVar5;
}

