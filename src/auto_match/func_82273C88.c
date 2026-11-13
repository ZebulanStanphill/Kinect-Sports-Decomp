extern int fn_82682748();


typedef struct { unsigned int pad:25; unsigned int flag:1; unsigned int rest:6; } Flags;
void fn_82273C88(unsigned int *param_1)

{
  if ((unsigned char)((Flags *)&param_1[1])->flag) {
    fn_82682748(*param_1,param_1,param_1[2]);
    *param_1 = 0;
  }
  return;
}

