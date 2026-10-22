typedef unsigned int uint;
typedef int (*code)();
extern int fn_825089A0();
extern int fn_82F622A8();


unsigned char fn_828D3430(int *param_1,uint param_2)

{
  int *piVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3333333 < param_2) {
    fn_82F622A8("vector<T> too long");
  }
  piVar2 = (int *)fn_825089A0();
  iVar3 = (*(code *)(*piVar2 + 0x24))(piVar2,param_2 * 0x50,1);
  *param_1 = iVar3;
  param_1[1] = iVar3;
  param_1[2] = param_2 * 0x50 + iVar3;
  return 1;
}
