typedef unsigned char bool;
extern int fn_82BE5CC0();


bool fn_82BE5F40(unsigned __int64 param_1,unsigned char param_2)

{
  int iVar1;
  
  if (199 < param_2) {
    iVar1 = fn_82BE5CC0(param_1);
    *(int *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x20) + iVar1;
  }
  return 199 < param_2;
}

