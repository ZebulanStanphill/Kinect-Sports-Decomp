typedef unsigned char bool;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_827EFC80();
extern int fn_827F3B90();
extern int fn_827F3C08();
extern int fn_827F3C20();
extern int fn_827F68F8();
extern int fn_827F74C0();
extern int fn_827F93E8();
extern int fn_82811238();
extern int fn_82811438();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8255EFC8(int param_1,int param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [80];
  
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = *(unsigned short *)(param_1 + 0x124);
    uVar2 = *(unsigned int *)(param_1 + 0x11c);
    uVar3 = *(unsigned int *)(param_1 + 0x114);
    uVar4 = fn_827F3C20();
    fn_827F68F8(uVar4,uVar3,param_1,uVar2,uVar1);
    uVar2 = *(unsigned int *)(param_1 + 0x110);
    uVar4 = fn_827F3C20(param_1);
    fn_827F74C0(uVar4,uVar2);
    fn_827F3C20(param_1);
    fn_827F93E8();
  }
  *(unsigned short *)(param_1 + 300) = *(unsigned short *)(param_1 + 300) & 0xfffe;
  if (param_2 == 0) {
    auStack_60[0] = 3;
    uVar4 = fn_82811438(auStack_50,auStack_60,0x10);
    uVar5 = fn_827F3C08(param_1);
    fn_82811238(0xffffffff8320a3e0,uVar5,uVar4);
  }
  else {
    uVar4 = fn_827EFC80();
    do {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar4);
        *(unsigned int *)uVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  fn_827F3B90(param_1,0,0);
  return;
}

