typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8278FD18();


__int64 fn_827912D8(__int64 param_1)

{
  bool bVar1;
  char cVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  lVar3 = 0;
  uVar6 = param_1 + 0xc;
  lVar5 = 0;
  lVar4 = 0;
  while( true ) {
    if ((((uVar6 & 0xffffffff) == 0) || ((int)lVar5 < 0)) ||
       (bVar1 = false, ((int *)uVar6)[1] <= (int)lVar5)) {
      bVar1 = true;
    }
    if (bVar1) break;
    uVar7 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)uVar6 + (int)lVar4) + 4);
    if (uVar7 != 0) {
      cVar2 = fn_8278FD18();
      if (cVar2 != '\0') {
        uVar7 = uVar7 - 1;
      }
    }
    lVar3 = uVar7 + lVar3;
    if ((int)lVar5 < *(int *)((int)uVar6 + 4)) {
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 4;
    }
  }
  return lVar3;
}

