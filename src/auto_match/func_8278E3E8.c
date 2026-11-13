extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8267C498();
extern int fn_8278BDD0();
extern int fn_8278BF48();
extern int fn_8278C498();
extern int fn_8278E0F0();


void fn_8278E3E8(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_30 [4];
  unsigned int auStack_2c [11];
  
  uVar1 = *param_3;
  uVar4 = (unsigned __int64)uVar1;
  if (uVar4 != 0) {
    *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
  }
  uVar2 = fn_8278BDD0(auStack_30);
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8267C498(uVar4);
  }
  if ((*param_1 == 0) ||
     (lVar3 = fn_8278C498(param_1,param_3,*(unsigned int *)(*param_1 + 4) & uVar2), (int)lVar3 < 0)) {
    fn_8278E0F0(param_1,param_2,param_3,uVar2);
  }
  else {
    uVar1 = *param_3;
    if (uVar1 != 0) {
      *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
    }
    auStack_2c[0] = uVar1;
    fn_8278BF48(lVar3 * 0xc + (unsigned __int64)*param_1 + 0x10,auStack_2c);
    if (uVar1 != 0) {
      fn_8267C498(uVar1);
    }
  }
  return;
}

