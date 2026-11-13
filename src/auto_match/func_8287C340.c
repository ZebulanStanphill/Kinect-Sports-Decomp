extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_8287C2E8();
extern int __u64tod();


unsigned __int64 fn_8287C340(unsigned __int64 param_1)

{
  __int64 lVar1;
  char cVar2;
  __int64 lVar3;
  double dVar4;
  
  if ((param_1 & 0xffffffff) != 0) {
    lVar1 = (param_1 & 0xffffffff) * (param_1 & 0xffffffff) * 5;
    lVar3 = lVar1 + -4;
    dVar4 = (double)__u64tod(lVar3);
    if (((__int64)SQRT(dVar4) * (__int64)SQRT(dVar4) != lVar3) &&
       (cVar2 = fn_8287C2E8(lVar1 + 4), cVar2 == '\0')) {
      return 0;
    }
    param_1 = 1;
  }
  return param_1;
}

