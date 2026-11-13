unsigned __int64 fn_828B5650(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  if (((uVar1 <= uVar2) && ((uVar2 != uVar1 || (*param_2 <= *param_1)))) &&
     ((uVar2 != uVar1 || ((*param_1 != *param_2 || (param_2[2] <= param_1[2])))))) {
    return 0;
  }
  return 1;
}

