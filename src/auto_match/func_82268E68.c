extern int fn_828B8F40();


void fn_82268E68(int param_1,unsigned int param_2)

{
  unsigned __int64 *plVar1;
  __int64 lVar2;
  
  if ((param_2 != 0) &&
     (lVar2 = **(__int64 **)(param_1 + 4), plVar1 = (__int64 *)fn_828B8F40(param_2),
     *plVar1 == lVar2)) {
    **(unsigned int **)(param_1 + 8) = 1;
  }
  return;
}

