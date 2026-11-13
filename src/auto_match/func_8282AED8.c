extern int fn_82826568();


void fn_8282AED8(int param_1,int param_2)

{
  int aiStack_10;
  
  if (((*(unsigned int *)(param_2 + 0x18) != 0) && (*(unsigned int *)(param_2 + 0x14) != 0)) &&
     (*(unsigned int *)(param_2 + 0x18) == *(unsigned int *)(param_1 + 0x3d8))) {
    fn_82826568(param_1,*(unsigned int *)(param_2 + 0x14),&aiStack_10);
    *(unsigned char *)(aiStack_10 + 0x34) = 1;
  }
  return;
}

