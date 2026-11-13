extern int fn_8289EEE0();
extern int fn_828A31C0();
extern int fn_828AECC0();
extern int fn_828B0488();
extern int fn_828B0528();
extern int fn_828B1468();
extern int fn_82A4AAA8();


void fn_828D8EF8(int param_1)

{
  char cVar5;
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int iVar4;
  
  cVar5 = fn_828B0528(*(unsigned int *)(param_1 + 0x14));
  if (cVar5 == '\0') {
    fn_828B1468(param_1,7);
  }
  else {
    uVar1 = fn_828B0488(param_1);
    if ((uVar1 & 0xffffffff) == 0) {
      fn_828B1468(param_1,7);
    }
    else {
      piVar2 = (int *)fn_8289EEE0(*(unsigned int *)(param_1 + 0x14));
      fn_828A31C0(*(unsigned int *)(param_1 + 0x14),piVar2,uVar1);
      puVar3 = (unsigned int *)(**(int (***)())(*piVar2 + 0xc))(piVar2);
      iVar4 = fn_82A4AAA8();
      if (iVar4 != 2) {
        fn_828AECC0(puVar3,2);
      }
      if (puVar3 != (unsigned int *)0x0) {
        (**(int (***)())*puVar3)(puVar3,1);
      }
      fn_828B1468(param_1,2);
    }
  }
  return;
}

