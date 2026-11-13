extern int fn_82FF9C88();
extern int fn_83007AE8();
extern int fn_83008748();
extern int fn_830087C8();
extern unsigned int iStack_2c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_28;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8302C2A0(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned short *puStack0000001c;
  unsigned int uStack00000024;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned int uStack_38;
  unsigned __int64 uStack_34;
  int iStack_2c;
  unsigned int uStack_28;
  
  puStack0000001c = (unsigned short *)(param_2 + 4);
  uStack00000024 = param_3;
  iVar1 = fn_82FF9C88(&stack0x0000001c,&stack0x00000024,&stack_pair_50.first);
  if (iVar1 == 1) {
    if (iStack_2c == 0) {
      fn_83008748(param_1 + 0x88,stack_pair_50.second,uStack_48,uStack_40,(unsigned __int64)uStack_38 << 0x20,
                        uStack_34);
    }
    else {
      fn_830087C8(param_1 + 0x88,stack_pair_50.first,stack_pair_50.second,iStack_2c,uStack_28);
    }
    iVar1 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,param_5);
    if (((param_5 & 0xff) == 0) && (iVar1 == 1)) {
      *(unsigned short *)(param_1 + 0x84) = *puStack0000001c;
      *(unsigned short *)(param_1 + 0x80) = puStack0000001c[1];
      *(unsigned short *)(param_1 + 0x82) = puStack0000001c[2];
    }
  }
  return;
}

