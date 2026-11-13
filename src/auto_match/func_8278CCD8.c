extern unsigned int *auStack_30;
extern int fn_8267C498();
extern int fn_8278BDD0();
extern int fn_8278C498();


unsigned __int64 fn_8278CCD8(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_30 [48];
  
  if (*param_1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *param_2;
    uVar4 = (unsigned __int64)uVar1;
    if (uVar4 != 0) {
      *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
    }
    uVar3 = fn_8278BDD0(auStack_30);
    uVar1 = *(unsigned int *)(*param_1 + 4);
    if ((uVar4 & 0xffffffff) != 0) {
      fn_8267C498(uVar4);
    }
    uVar2 = fn_8278C498(param_1,param_2,uVar3 & uVar1);
  }
  return uVar2;
}

