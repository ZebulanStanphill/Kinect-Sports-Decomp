extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_82240378();
extern int fn_8286B448();


void fn_8286B5F8(__int64 param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char auStack_50 [32];

  uVar1 = (param_2 - (int)param_1) / 0x1c;
  lVar3 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < lVar3) {
    lVar2 = lVar3 * 0x1c + param_1;
    do {
      lVar2 = lVar2 + -0x1c;
      lVar3 = lVar3 + -1;
      fn_82240378(auStack_50,lVar2);
      fn_8286B448(param_1,lVar3,uVar1,auStack_50);
      fn_82230300(auStack_50,1,0);
    } while (0 < (int)lVar3);
  }
  return;
}
