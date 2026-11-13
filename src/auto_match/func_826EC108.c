extern int fn_826EBD80();
extern unsigned int stack0x0000001e;
extern unsigned int stack0x00000026;
extern unsigned int stack0x0000002e;
extern unsigned int uStack0000001e;
extern unsigned int uStack00000026;
extern unsigned int uStack0000002e;


void fn_826EC108(__int64 param_1,unsigned short param_2,unsigned short param_3,unsigned short param_4)

{
  unsigned short uStack0000001e;
  unsigned short uStack00000026;
  unsigned short uStack0000002e;
  
  param_1 = param_1 + 0x14;
  uStack0000001e = param_2;
  uStack00000026 = param_3;
  uStack0000002e = param_4;
  fn_826EBD80(param_1,&stack0x0000001e);
  fn_826EBD80(param_1,&stack0x00000026);
  fn_826EBD80(param_1,&stack0x0000002e);
  return;
}

