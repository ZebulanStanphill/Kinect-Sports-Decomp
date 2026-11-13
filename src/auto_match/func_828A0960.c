typedef unsigned char bool;
#define false 0
extern int fn_82881EE8();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289F2E0();
extern int fn_828ACCE8();
extern int fn_828B1340();


bool fn_828A0960(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char cVar3;
  unsigned int iVar2;
  int lVar1;
  bool bVar4;
  
  cVar3 = fn_828B1340();
  if ((((cVar3 == '\0') && (iVar2 = fn_8289D8D0(param_1), iVar2 != 0)) &&
      (cVar3 = fn_8289DAD0(), cVar3 != '\0')) &&
     ((cVar3 = fn_828ACCE8(param_1), cVar3 != '\0' &&
      (iVar2 = fn_8289F2E0(param_1,param_2), iVar2 == 0)))) {
    lVar1 = fn_82881EE8(param_2);
    bVar4 = lVar1 != 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

