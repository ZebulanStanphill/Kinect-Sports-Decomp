extern int fn_82FB2BD0();
extern int fn_82FB2ED0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


unsigned __int64 fn_82FB3100(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  fn_82FB2BD0();
  *(unsigned short *)(param_1 + 0xd4) = *(unsigned short *)(iStack0000001c + 0x14);
  *(unsigned short *)(param_1 + 0xb8) = *(unsigned short *)(iStack0000001c + 0x10);
  *(unsigned short *)(param_1 + 0xba) = *(unsigned short *)(iStack0000001c + 0x12);
  *(unsigned int *)(param_1 + 200) = *(unsigned int *)(iStack0000001c + 0xc);
  *(unsigned char *)(param_1 + 0xd0) = 0;
  *(unsigned char *)(param_1 + 0xd1) = *(unsigned char *)(iStack0000001c + 0x17);
  *(unsigned int *)(param_1 + 0xb4) = *(unsigned int *)(iStack0000001c + 4);
  if (*(int *)(iStack0000001c + 8) != 0) {
    iStack0000001c = iStack0000001c + 0x18;
    uVar1 = fn_82FB2ED0(param_1,param_1 + 0xac,&stack0x0000001c);
    return uVar1;
  }
  return 1;
}

