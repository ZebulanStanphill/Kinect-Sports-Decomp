extern unsigned int *auStack_30;
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8278BA98();
extern int fn_8278C400();


unsigned __int64 fn_8278CC58(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned char auStack_30 [48];
  
  if (*param_1 == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    iVar1 = *param_2;
    if (iVar1 != 0) {
      fn_8267C4C8(iVar1);
    }
    uVar4 = fn_8278BA98(auStack_30,iVar1);
    uVar2 = *(unsigned int *)(*param_1 + 4);
    if (iVar1 != 0) {
      fn_8267C4F0(iVar1);
    }
    uVar3 = fn_8278C400(param_1,param_2,uVar2 & uVar4);
  }
  return uVar3;
}

