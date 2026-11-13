typedef unsigned char bool;
extern int fn_82E66440();
extern int fn_82E66A50();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82E66AA8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  __int64 lVar5;
  char in_RESERVE;
  unsigned char bVar6;
  
  lVar5 = param_1 + 0x21c;
  iVar3 = fn_82E66440(lVar5);
  bVar6 = (iVar3 == 0) << 1;
  if (iVar3 == 0) {
    uVar2 = 0xffffffffc00d3e85;
  }
  else {
    if (*(int *)((int)param_1 + 0x214) < 1) {
      uVar2 = 0xffffffffc00d3e85;
    }
    else {
      piVar4 = (int *)fn_82E66A50(param_1,param_2);
      bVar6 = (piVar4 == (int *)0x0) << 1;
      if (piVar4 == (int *)0x0) {
        uVar2 = 0xffffffffc00d36bb;
      }
      else {
        uVar2 = (**(int (***)())(*piVar4 + 0xc))(piVar4,param_3,0,0);
      }
    }
    sync(1);
    do {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*(unsigned int *)lVar5 - 1,0,lVar5);
        *(unsigned int *)lVar5 = uVar1;
        bVar6 = 2;
      }
    } while (!(bool)(bVar6 >> 1 & 1));
  }
  return uVar2;
}

