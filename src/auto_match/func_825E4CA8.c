#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_60 ((*(unsigned __int64*)&fStack_60))
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_825E4EB0();
extern int fn_8284C850();
extern int fn_8284C858();
extern unsigned int lbl_8218E8E8;


void fn_825E4CA8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,float *param_4,
                  float *param_5,float *param_6)

{
  int iVar1;
  double dVar2;
  float fStack_60;
  float fStack_5c;
  __int64 lStack_58;
  
  fStack_5c = (float)fn_8284C850();
  dVar2 = (double)lbl_8218E8E8;
  fStack_60 = (float)((double)((float)(__int64)(int)fStack_5c * (*param_6 - *param_5)) * dVar2) *
              *param_4;
  iVar1 = fn_8284C858(param_2);
  lStack_58 = (__int64)iVar1;
  _fStack_60 = CONCAT44(fStack_60,
                        (float)((double)((float)lStack_58 * (param_6[1] - param_5[1])) * dVar2) *
                        param_4[1]);
  fn_825E4EB0(param_1,param_3,&fStack_60);
  return;
}

