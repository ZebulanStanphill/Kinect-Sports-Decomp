typedef unsigned char bool;
extern unsigned int *auStack_10;
extern int fn_82EEB368();
extern int fn_82EEB3B8();


bool fn_82EEB408(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_10 [4];
  
  auStack_10[0] = *param_1;
  uVar4 = (unsigned __int64)auStack_10[0];
  uVar3 = 0;
  uVar2 = uVar4;
  while ((uVar2 != 0 && (uVar3 = uVar3 + 1, uVar3 < 2))) {
    uVar2 = (unsigned __int64)*(unsigned int *)((int)uVar2 + 0xc);
  }
  if (1 < uVar3) {
    uVar1 = fn_82EEB3B8(param_1,param_1,auStack_10);
    fn_82EEB368(uVar1,uVar4);
  }
  return 1 < uVar3;
}

