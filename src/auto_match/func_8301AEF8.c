extern int fn_82FFE5B8();


char fn_8301AEF8(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 *param_4)

{
  int iVar1;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar1 = fn_82FFE5B8(param_2 + 0x34,param_3,*param_4);
    return (iVar1 == 0) + '\x01';
  }
  return '\x02';
}

