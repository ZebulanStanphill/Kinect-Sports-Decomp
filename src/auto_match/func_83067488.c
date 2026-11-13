extern int fn_8305D680();
extern int fn_8305D6A0();
extern int fn_8305F670();


void fn_83067488(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned int uVar1;
  int lVar3;
  
  lVar3 = 0;
  iVar2 = fn_8305D680(param_2);
  if (0 < iVar2) {
    do {
      uVar1 = fn_8305D6A0(param_2,lVar3);
      fn_8305F670(param_1,uVar1);
      lVar3 = lVar3 + 1;
      iVar2 = fn_8305D680(param_2);
    } while ((int)lVar3 < iVar2);
  }
  return;
}

