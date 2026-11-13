extern int fn_82682748();


void fn_82273CD8(unsigned int *param_1,unsigned int param_2)

{
  if ((unsigned char)((struct { unsigned int pad:25; unsigned int flag:1; unsigned int rest:6; } *)&param_1[1])->flag) {
    fn_82682748(*param_1,param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = param_2;
  return;
}

