extern int fn_82D0D770();
extern int fn_82D0EFF0();
extern int fn_82D0FF18();
extern int fn_82D10560();
extern unsigned int lbl_821347A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82D10A80(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  
  fn_82D10560();
  puVar1 = (unsigned int *)fn_82D0D770(param_2);
  fn_82D0EFF0(-param_1);
  fn_82D0FF18((double)lbl_821347A8,puVar1,param_4,param_5);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  return;
}

