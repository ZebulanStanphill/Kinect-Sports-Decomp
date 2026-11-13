typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_20;
extern int fn_82FA5288();
extern unsigned int lbl_82002AE0;


bool fn_82FF2778(double param_1,unsigned __int64 param_2)

{
  unsigned __int64 auStack_20;
  
  if (param_1 < (double)lbl_82002AE0) {
    fn_82FA5288(param_2,&auStack_20);
    if (((unsigned int)((unsigned __int64)(auStack_20) >> 32)) != 0) {
      return param_1 < (double)((float)(auStack_20 & 0xffffffff) / (float)((unsigned int)((unsigned __int64)(auStack_20) >> 32)));
    }
  }
  return false;
}

