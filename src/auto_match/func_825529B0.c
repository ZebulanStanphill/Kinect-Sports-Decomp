typedef unsigned char bool;
#define false 0
extern int fn_82536358();


bool fn_825529B0(unsigned int *param_1)

{
  char cVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*param_1;
  if (uVar3 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = fn_82536358(uVar3);
  }
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    cVar1 = (**(int (***)())(*(int *)uVar3 + 4))(uVar3);
    bVar2 = cVar1 == '\0';
  }
  return bVar2;
}

