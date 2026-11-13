extern int fn_82E20270();
extern int fn_82F67988();
extern int fn_82F67CF8();


void fn_82E1E6E0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  __int64 lVar2;
  
  piVar1 = (int *)param_1[0x14];
  if (piVar1 == (int *)0x0) {
    lVar2 = fn_82E20270(*param_1,0xffffffff8200d788,1);
    if (lVar2 != 0) {
      fn_82F67CF8(param_2,1,param_3,lVar2);
      fn_82F67988(lVar2);
    }
  }
  else {
    (**(int (***)())(*piVar1 + 4))(piVar1,*param_1,param_2,param_3);
  }
  return;
}

