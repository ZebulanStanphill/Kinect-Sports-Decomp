#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8258EE70();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8258D810(double param_1,double param_2,double param_3,double param_4,__int64 param_5)

{
  int in_r8;
  struct { float first; float second; } stack_pair_70;

  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [32];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  if (*(int *)(in_r8 + 0x10) != 0) {
    uStack_60 = CONCAT44((float)param_1,(float)param_2);
    stack_pair_70.first = (float)param_3;
    stack_pair_70.second = (float)param_4;
    uStack_58 = CONCAT44(stack_pair_70.first,stack_pair_70.second);
    fn_8223B688(auStack_50,in_r8);
    uStack_30 = (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF);
    uStack_2c = (((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF);
    uStack_28 = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF);
    fn_8258EE70(&stack_pair_70.first,param_5 + 0x1b0,auStack_50);
    fn_82230300(auStack_50,1,0);
  }
  fn_82230300(in_r8,1,0);
  return;
}

