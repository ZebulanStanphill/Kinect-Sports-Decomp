extern int fn_82DBA1E0();
extern __int64 fn_82DBDD58();


unsigned __int64
fn_82DBFD40(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,int *param_4,unsigned __int64 param_5
             )

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82DBDD58(param_1,param_2,param_3 + 0x80,param_4,param_5,0xe0);
  fn_82DBA1E0(*(unsigned int *)(*(int *)(*param_4 + 8) + 0x78),param_4,param_5);
  return uVar1;
}

