extern unsigned int *auStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_829DB450();
extern int fn_829E3810();
extern int fn_829E3820();
extern int fn_829E3830();
extern int fn_829E3840();
extern unsigned int lbl_82015B38;


__int64 fn_829E5558(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  __int64 lVar1;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  unsigned char auStack_24 [36];
  
  lVar1 = fn_829DB450(param_1,&fStack_2c,&fStack_30,auStack_24,&fStack_28);
  if (-1 < lVar1) {
    fn_829E3830((double)lbl_82015B38,param_1);
    fn_829E3840((double)fStack_30,param_1);
    fn_829E3820((double)fStack_2c,param_1);
    fn_829E3810((double)fStack_28,param_1);
    *param_4 = (int)param_1;
  }
  return lVar1;
}

