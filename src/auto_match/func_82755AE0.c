typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_827AECE8();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82755AE0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  char cVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_40;
  
  fn_8268B330(&auStack_40);
  uVar7 = 0;
  uVar5 = 0;
  if (param_1[1] != 0) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*(int *)(iVar6 + *param_1) + 0x154);
      if (iVar1 != 0) {
        if ((param_2 & 0xffffffff) < (uVar7 & 0xffffffff)) {
LAB_82755b50:
          if ((uVar7 & 0xffffffff) < (param_3 & 0xffffffff)) {
LAB_82755b58:
            cVar2 = fn_827AECE8(iVar1,param_2 - uVar7,param_3 - uVar7);
            in_cr0 = (cVar2 == '\0') << 1;
            if (cVar2 != '\0') {
              lVar3 = ((unsigned __int64)auStack_40 & 0xfffffffc) + 4;
              do {
                puVar4 = (unsigned int *)lVar3;
                uVar7 = (unsigned __int64)*puVar4;
                if (in_RESERVE != '\0') {
                  uVar5 = storeWordConditionalIndexed(uVar7 - 1,0,lVar3);
                  *puVar4 = uVar5;
                  in_cr0 = 2;
                }
              } while (!(bool)(in_cr0 >> 1));
              if (uVar7 == 1) {
                fn_8267BE38();
              }
              return 1;
            }
          }
        }
        else {
          if ((param_2 & 0xffffffff) < ((unsigned int)((int *)(iVar6 + *param_1))[1] + uVar7 & 0xffffffff))
          goto LAB_82755b58;
          if ((param_2 & 0xffffffff) <= (uVar7 & 0xffffffff)) goto LAB_82755b50;
        }
        uVar7 = *(unsigned int *)(iVar6 + *param_1 + 4) + uVar7;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < (unsigned int)param_1[1]);
  }
  lVar3 = ((unsigned __int64)auStack_40 & 0xfffffffc) + 4;
  do {
    puVar4 = (unsigned int *)lVar3;
    uVar7 = (unsigned __int64)*puVar4;
    if (in_RESERVE != '\0') {
      uVar5 = storeWordConditionalIndexed(uVar7 - 1,0,lVar3);
      *puVar4 = uVar5;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  return 0;
}

