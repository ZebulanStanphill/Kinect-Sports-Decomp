#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_828F5390();
extern int fn_828F59D0();


unsigned __int64 fn_828F65A8(__int64 param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  __int64 lVar6;
  int iVar7;
  
  lVar4 = fn_828F5390();
  lVar6 = (lVar4 + 0x1eU & 0x3fffffff) * 4;
  lVar4 = lVar6 + param_1;
  iVar7 = *(int *)((int)lVar6 + (int)param_1);
  do {
    if (iVar7 == 0) {
      return 0;
    }
    puVar1 = (unsigned int *)*(int *)lVar4;
    pbVar5 = (unsigned char *)*puVar1;
    lVar6 = param_2;
    do {
      uVar3 = (unsigned int)*pbVar5;
      uVar2 = (unsigned int)*(unsigned char *)lVar6;
      if (*(unsigned char *)lVar6 == 0) break;
      lVar6 = lVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar2 == uVar3);
    if ((int)(uVar2 - uVar3) < 0) {
      return 0;
    }
    iVar7 = puVar1[3];
    if (uVar2 == uVar3) {
      *(int *)lVar4 = iVar7;
      puVar1[3] = 0;
      fn_828F59D0(ZEXT48(puVar1),1);
      return 0;
    }
    lVar4 = ZEXT48(puVar1) + 0xc;
  } while( true );
}

