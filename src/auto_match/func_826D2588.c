extern int fn_8269AEB8();
extern int fn_8269FD90();
extern int fn_826D2290();


unsigned int fn_826D2588(int param_1,int param_2,int param_3,int param_4,
                       int param_5)

{
  unsigned char cVar3;
  int uVar1;
  unsigned int uVar2;
  
  cVar3 = fn_8269AEB8(param_3,0);
  if (cVar3 != '\0') {
    uVar1 = fn_8269FD90(param_1 + -0x68,param_3);
    cVar3 = (*(int (**)())(*(int *)(param_1 + -0x68) + 0xfc))(param_1 + -0x68,uVar1,param_4,0);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x148) != 0) ||
     (uVar2 = fn_826D2290(param_1 + -0x68), uVar2 != 0)) {
    uVar2 = (*(int (**)())(*(int *)(*(int *)(param_1 + 0x148) + 0x10) + 0x28))
                      (*(int *)(param_1 + 0x148) + 0x10,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

