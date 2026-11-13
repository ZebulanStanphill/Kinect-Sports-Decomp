extern int fn_826631B8();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003f;


int fn_82663038(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned char param_6)

{
  int iStack00000014;
  int iStack0000001c;
  int iStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned char uStack0000003f;
  
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003f = param_6;
  for (iStack00000014 = param_1; iStack00000014 != iStack0000001c;
      iStack00000014 = iStack00000014 + 0x20) {
    fn_826631B8(uStack0000002c,iStack00000024,iStack00000014);
    iStack00000024 = iStack00000024 + 0x20;
  }
  return iStack00000024;
}

