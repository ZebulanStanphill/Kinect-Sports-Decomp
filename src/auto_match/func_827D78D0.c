extern unsigned int *auStack_98;
extern int fn_82230110();
extern int fn_8256DE08();
extern int fn_827D6C60();
extern unsigned int uStack00000014;


/* WARNING: Removing unreachable block (ram,0x827d793c) */
/* WARNING: Removing unreachable block (ram,0x827d7958) */
/* WARNING: Removing unreachable block (ram,0x827d7974) */
/* WARNING: Removing unreachable block (ram,0x827d7978) */
/* WARNING: Removing unreachable block (ram,0x827d79d8) */
/* WARNING: Removing unreachable block (ram,0x827d7a00) */

unsigned __int64
fn_827D78D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned int uStack00000014;
  unsigned char auStack_98 [152];
  
  uStack00000014 = (unsigned int)param_1;
  fn_8256DE08(auStack_98,0);
  fn_827D6C60(param_2,param_3,param_4,auStack_98,param_5,0);
  fn_82230110(param_1,0xffffffff8201ac89);
  return param_1;
}

