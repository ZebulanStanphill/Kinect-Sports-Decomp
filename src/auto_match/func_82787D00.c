extern int fn_82784E20();
extern int fn_82786028();
extern int fn_82786A30();
extern int fn_82787870();


void fn_82787D00(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  
  fn_82784E20();
  uVar1 = *param_1;
  if (uVar1 < 3) {
    fn_82787870(param_1,param_2,param_5,param_6);
  }
  else if (uVar1 == 3) {
    fn_82786028(param_1,param_2,param_5,param_6);
  }
  else if (uVar1 < 5) {
    fn_82786A30(param_1,param_2,param_5,param_6,4);
  }
  return;
}

