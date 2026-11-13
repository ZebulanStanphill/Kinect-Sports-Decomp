#define _fStack00000020 ((*(unsigned __int64*)&fStack00000020))
#define _fStack00000028 ((*(unsigned __int64*)&fStack00000028))
#define _fStack00000030 ((*(unsigned __int64*)&fStack00000030))
#define _fStack00000038 ((*(unsigned __int64*)&fStack00000038))
extern unsigned int fStack00000020;
extern unsigned int fStack00000024;
extern unsigned int fStack00000028;
extern unsigned int fStack00000030;
extern unsigned int fStack00000034;
extern unsigned int fStack00000038;
extern int fn_8306EA78();


float * fn_8307DA68(float *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                     unsigned __int64 param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  
  fStack00000028 = (float)((unsigned __int64)param_3 >> 0x20);
  fStack00000038 = (float)((unsigned __int64)param_5 >> 0x20);
  fVar1 = fStack00000038 + fStack00000028;
  _fStack00000020 = param_2;
  _fStack00000028 = param_3;
  _fStack00000030 = param_4;
  _fStack00000038 = param_5;
  dVar2 = (double)fn_8306EA78((double)fVar1);
  dVar3 = (double)fn_8306EA78((double)(fStack00000034 + fStack00000024));
  dVar4 = (double)fn_8306EA78((double)(fStack00000030 + fStack00000020));
  *param_1 = (float)dVar4;
  param_1[1] = (float)dVar3;
  param_1[2] = (float)dVar2;
  return param_1;
}

