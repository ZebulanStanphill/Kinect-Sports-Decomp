#define true 1
extern unsigned int *auStack_20;
extern int fn_82FA9548();
extern int fn_82FA9B68();
extern int fn_82FA9B98();


void fn_82FAD9A0(unsigned int *param_1,int param_2)

{
  unsigned int iVar1;
  unsigned char cVar2;
  unsigned char auStack_20 [8];
  
  iVar1 = param_1[1];
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(char *)(iVar1 + 0x10) != '\0') {
      fn_82FA9548(iVar1);
      cVar2 = fn_82FA9B68(iVar1);
      if (cVar2 != '\0') {
        if (iVar1 == param_1[5]) {
          (*(int (**)())*param_1)(param_1,auStack_20);
        }
        fn_82FA9B98(iVar1);
      }
    }
  }
  return;
}

