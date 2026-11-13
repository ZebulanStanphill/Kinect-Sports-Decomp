extern int fn_82DAD000();
extern int fn_82DAE118();
extern unsigned int iStack_28;
extern unsigned int iStack_30;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_4c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_32;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82DAB7E8(unsigned int param_1,int param_2,unsigned int param_3)

{
  struct { unsigned int first; int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  int iStack_3c;
  int iStack_38;
  unsigned char uStack_34;
  unsigned char uStack_33;
  unsigned char uStack_32;
  int iStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  stack_pair_50.second = *(int *)(param_2 + 0xc);
  uStack_48 = *(unsigned int *)(param_2 + 0x10);
  iStack_3c = param_2 + 0x50;
  iStack_30 = param_2 + 4;
  iStack_38 = param_2 + 0x18;
  uStack_32 = 0;
  iStack_28 = param_2 + 0x2c;
  uStack_34 = 0;
  uStack_40 = 0;
  stack_pair_50.first = 2;
  uStack_33 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_44 = param_1;
  uStack_2c = param_3;
  fn_82DAE118(*(unsigned int *)(stack_pair_50.second + 8),&stack_pair_50.first);
  stack_pair_50.first = 0;
  if (*(short *)(*(int *)(param_2 + 0xc) + 0x204) != 0) {
    fn_82DAD000(*(int *)(param_2 + 0xc),&stack_pair_50.first);
  }
  stack_pair_50.first = 1;
  if (*(short *)(*(int *)(param_2 + 0x10) + 0x204) != 0) {
    fn_82DAD000(*(int *)(param_2 + 0x10),&stack_pair_50.first);
  }
  return;
}

