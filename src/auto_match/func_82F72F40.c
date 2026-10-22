extern int fn_82F72E58();

typedef struct {
  unsigned int a;
  unsigned char b;
  unsigned char c;
} S;

S * fn_82F72F40(S *param_1,char *param_2)
{
  unsigned int iVar1;
  
  iVar1 = 0;
  param_1->b = 0;
  param_1->a = 0;
  param_1->c = 0;
  if ((param_2 != 0) && (*param_2 != '\0')) {
    do {
      iVar1 = iVar1 + 1;
    } while (param_2[iVar1] != '\0');
    if (iVar1 != 0) {
      fn_82F72E58(param_1,param_2,iVar1);
    }
  }
  return param_1;
}
