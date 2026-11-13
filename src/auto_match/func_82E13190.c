extern unsigned int *auStack_30;
extern int fn_82CEAC20();
extern int fn_82D000A0();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82E13058();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82E13190(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char auStack_30 [24];
  
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = fn_82CEAC20(param_2);
  }
  fn_82D000A0(param_1 + 0xc,param_3,param_2);
  fn_82D00388(auStack_30,0);
  fn_82E13058(param_1,param_2,auStack_30,0xffffffff82e12ed8,0);
  fn_82D003F0(auStack_30);
  return;
}

