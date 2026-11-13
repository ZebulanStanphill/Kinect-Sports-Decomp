typedef unsigned char bool;


bool fn_82F921A0(int *param_1,int *param_2)

{
  unsigned __int64 in_r0;
  
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    trapWord(0x1f,in_r0,0x16);
  }
  return param_2[1] == param_1[1];
}

