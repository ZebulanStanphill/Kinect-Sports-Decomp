extern unsigned int *auStack_a0;
extern int fn_829E47A8();
extern int fn_829E4B08();
extern int fn_829E4B18();
extern int fn_829E4B20();
extern int fn_829E4BB8();
extern unsigned int lbl_83217B30;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_829DB2D8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int *param_6,unsigned __int64 param_7,unsigned __int64 param_8,
             char param_9)

{
  unsigned __int64 uVar1;
  unsigned char auStack_a0 [160];
  
  fn_829E4BB8(auStack_a0);
  fn_829E4B20(auStack_a0,*param_6,param_6[1],param_6[2],param_6[3]);
  fn_829E4B18(auStack_a0,param_9 == '\0');
  uVar1 = fn_829E47A8(param_1,(((unsigned __int64)(lbl_83217B30) >> 32) & 0xFFFFFFFF),param_2,param_3,param_4,param_5,auStack_a0);
  fn_829E4B08(auStack_a0);
  return uVar1;
}

