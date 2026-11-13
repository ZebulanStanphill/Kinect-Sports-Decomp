typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_82230300();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82631488();


bool fn_82580EF8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned char auStack_30 [1];
  
  puVar3 = param_1;
  if (0xf < (unsigned int)param_1[5]) {
    puVar3 = (unsigned int *)*param_1;
  }
  fn_82520158(puVar3,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  lVar2 = fn_82631488();
  *param_2 = (int)lVar2;
  fn_8251FA58(uVar1);
  fn_82230300(param_1,1,0);
  return -1 < (__int64)-(unsigned __int64)(lVar2 == 0);
}

