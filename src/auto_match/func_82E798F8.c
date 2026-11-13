extern unsigned int *auStack_20;
extern int fn_82E76C40();
extern int fn_82E78690();


__int64 fn_82E798F8(__int64 param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_20;
  
  lVar1 = fn_82E76C40();
  uVar3 = (unsigned __int64)*(unsigned int *)((int)param_1 + 0x1e0);
  lVar1 = lVar1 + (unsigned __int64)*(unsigned char *)((int)param_1 + 0x150);
  if (uVar3 != 0) {
    lVar2 = fn_82E78690(param_1 + 0x178,uVar3 - 1,&auStack_20);
    auStack_20 = -(unsigned int)(lVar2 != 0) & auStack_20;
    if (auStack_20 != 0) {
      lVar1 = (unsigned __int64)*(unsigned int *)(auStack_20 + 0x17) +
              (unsigned __int64)*(unsigned int *)(auStack_20 + 0x13);
    }
  }
  return lVar1;
}

