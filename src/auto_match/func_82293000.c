extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82536288();
extern int fn_82536590();
extern unsigned int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();


void fn_82293000(int param_1)

{
  unsigned int uVar1;
  unsigned int auStack_50 [4];
  unsigned char auStack_40 [40];
  
  if (*(unsigned int *)(param_1 + 0x24) != 0) {
    fn_82864988(auStack_40,"Stop_music_frontend");
    auStack_50[0] = fn_828647D8();
    fn_82864898(auStack_40);
    uVar1 = fn_828647D8(param_1 + 0x28);
    fn_82536590(auStack_50,uVar1);
    fn_82536288((unsigned int *)(param_1 + 0x24));
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  return;
}

