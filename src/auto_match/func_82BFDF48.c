typedef unsigned char bool;
extern int fn_82BFDD90();
extern int fn_82BFEB30();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82BFDF48(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int (**param_4)(),int param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar2 = (int)param_1;
  uVar7 = 0;
  if (*(int *)(iVar2 + 0x24) == 0) {
    fn_82BFDD90();
  }
  else {
    iVar3 = fn_82BFDD90();
    if (iVar3 == 0x102) {
      if (param_5 != 0) {
        lVar5 = 1000;
        uVar4 = uVar7;
        do {
          do {
            uVar4 = uVar4 - 1;
          } while (-1 < (__int64)uVar4);
          if ((int)uVar7 < 0x200) {
            uVar7 = (uVar7 & 0x7fffffff) * 2 + 1;
          }
          iVar3 = fn_82BFDD90(param_1,param_2);
          if (iVar3 != 0x102) {
            return;
          }
          lVar5 = lVar5 + -1;
          in_cr0 = (lVar5 == 0) << 1;
          uVar4 = uVar7;
        } while (lVar5 != 0);
      }
      lVar5 = param_1 + 0x20;
      do {
        puVar6 = (unsigned int *)lVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,lVar5);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      iVar3 = fn_82BFDD90(param_1,param_2);
      while (iVar3 == 0x102) {
        uVar4 = uVar7;
        if (param_5 != 0) {
          do {
            uVar4 = uVar4 - 1;
            in_cr0 = (uVar4 == 0) << 1;
          } while (-1 < (__int64)uVar4);
          if ((int)uVar7 < 0x200) {
            uVar7 = (uVar7 & 0x7fffffff) * 2 + 1;
          }
        }
        if (param_4 == (int (**)())0x0) {
          if ((param_6 & 0xffffffff) == 0) {
            iVar3 = 0x102;
          }
          else {
            iVar3 = fn_82BFEB30(*(unsigned int *)(iVar2 + 0x24),param_6,param_7);
          }
        }
        else {
          iVar3 = (*param_4)(param_3,*(unsigned int *)(iVar2 + 0x24),param_6,param_7);
        }
        if (iVar3 != 0) {
          do {
            if (in_RESERVE != '\0') {
              uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 - 1,0,lVar5);
              *puVar6 = uVar1;
              in_cr0 = 2;
            }
          } while (!(bool)(in_cr0 >> 1 & 1));
          return;
        }
        iVar3 = fn_82BFDD90(param_1,param_2);
      }
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 - 1,0,lVar5);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
  }
  return;
}

