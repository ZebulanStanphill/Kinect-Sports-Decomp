typedef unsigned char bool;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_82A93C18();
extern int fn_82A94368();
extern int fn_82A98CC0();
extern unsigned int iStack_7c;
extern unsigned int iStack_8c;
extern unsigned int uStack_b0;
extern unsigned int uStack_f0;


bool fn_82A86500(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uStack_f0;
  unsigned char auStack_e0 [48];
  unsigned int uStack_b0;
  unsigned char auStack_a0 [20];
  int iStack_8c;
  int iStack_7c;
  
  fn_82A93C18(param_2,param_3,0,0,param_1 | 0x100,0,0,0);
  if ((param_4 & 0xffffffff) != 0) {
    fn_82A94368(auStack_e0,param_4,auStack_a0);
    uStack_f0 = iStack_7c * iStack_8c;
  }
  if (uStack_f0 <= param_6) {
    fn_82A98CC0(param_2,param_3,param_4,param_1 & 0x3f,
                    (~(unsigned __int64)uStack_b0 & 0xffffffff) >> 0xb & 1,param_8,0,param_7);
  }
  return uStack_f0 <= param_6;
}

