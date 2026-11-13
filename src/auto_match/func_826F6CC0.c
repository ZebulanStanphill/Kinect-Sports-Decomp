extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_8268BEA8();


unsigned __int64 fn_826F6CC0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  
  fn_8268B330();
  puVar1 = (unsigned int *)(*param_2 & 0xfffffffc);
  if ((4 < (*puVar1 & 0x7fffffff)) &&
     (iVar2 = thunk_FUN_82f65ac0((int)puVar1 + (*puVar1 & 0x7fffffff) + 4,0xffffffff8200c740),
     iVar2 == 0)) {
    fn_8268BEA8(param_1);
    fn_8268B610(param_1,(unsigned int *)(*param_2 & 0xfffffffc) + 2,
                      ((unsigned __int64)*(unsigned int *)(*param_2 & 0xfffffffc) & 0x7fffffff) - 4);
    fn_8268B610(param_1,0xffffffff8200c748,0xffffffffffffffff);
  }
  return param_1;
}

