#define true 1
extern int fn_827A53E8();


unsigned __int64 fn_827A7038(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  
  uVar3 = (unsigned int)param_3;
  uVar4 = (unsigned __int64)*param_1;
  lVar6 = param_3 * 0x14 + uVar4;
  if ((*(int *)((int)lVar6 + 8) != -2) &&
     (uVar1 = *(unsigned int *)(*param_1 + 4), (*(unsigned int *)((int)lVar6 + 0x14) & uVar1) == uVar3)) {
    while( true ) {
      puVar5 = (unsigned int *)((int)lVar6 + 8);
      if (((*(unsigned int *)((int)lVar6 + 0x14) & uVar1) == uVar3) &&
         (cVar2 = fn_827A53E8(lVar6 + 0xc), cVar2 != '\0')) {
        return param_3;
      }
      param_3 = (unsigned __int64)*puVar5;
      if (*puVar5 == 0xffffffff) break;
      lVar6 = param_3 * 0x14 + uVar4;
    }
  }
  return 0xffffffffffffffff;
}

