typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_40;
extern int fn_82BFE460();
extern int fn_82BFE530();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_825EA0B8(__int64 param_1,int param_2,unsigned int *param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  __int64 lVar7;
  int iVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_40 [16];
  
  iVar8 = 0;
  lVar7 = param_1;
  do {
    piVar1 = (int *)*(int *)lVar7;
    if (((int)*param_3 <= piVar1[1]) && (*piVar1 == param_2)) {
      if (piVar1[4] == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = fn_82BFE460();
      }
      if (iVar5 == 0) {
        uVar2 = *(unsigned int *)(*(int *)(iVar8 * 4 + (int)param_1) + 4);
        *param_3 = uVar2;
        do {
          puVar6 = (unsigned int *)(param_1 + 0x20);
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed
                              ((unsigned __int64)uVar2 + (unsigned __int64)*puVar6,0,param_1 + 0x20);
            *puVar6 = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        auStack_40[0] = 0;
        uVar4 = fn_82BFE530(*(unsigned int *)(*(int *)(iVar8 * 4 + (int)param_1) + 0x10),
                                  auStack_40);
        return ((uVar4 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)auStack_40[0];
      }
    }
    iVar8 = iVar8 + 1;
    lVar7 = lVar7 + 4;
    if (3 < iVar8) {
      return 0;
    }
  } while( true );
}

