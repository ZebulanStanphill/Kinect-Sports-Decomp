extern int fn_82E39C50();
extern unsigned int stack0x0000001c;


unsigned __int64
fn_82EE6E50(unsigned __int64 param_1,unsigned char *param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 *param_5)

{
  unsigned __int64 uVar1;
  unsigned char *pbStack0000001c;
  
  if (((param_2 == (unsigned char *)0x0) || ((int)param_4 == 0)) || (param_5 == (unsigned __int64 *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else if (param_3 < 0x18) {
    uVar1 = 0xffffffffc00d36b1;
  }
  else {
    pbStack0000001c = param_2;
    fn_82E39C50(param_4,&stack0x0000001c);
    uVar1 = 0;
    *param_5 = ((unsigned __int64)pbStack0000001c[7] << 0x18 | (unsigned __int64)pbStack0000001c[6] << 0x10 |
                (unsigned __int64)pbStack0000001c[5] << 8 | (unsigned __int64)pbStack0000001c[4]) << 0x20 |
               (unsigned __int64)pbStack0000001c[3] << 0x18 | (unsigned __int64)pbStack0000001c[2] << 0x10 |
               (unsigned __int64)pbStack0000001c[1] << 8 | (unsigned __int64)*pbStack0000001c;
  }
  return uVar1;
}

