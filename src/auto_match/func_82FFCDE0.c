typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FFBD98();
extern int fn_82FFC4C8();
extern int fn_8302B530();
extern int fn_8302B540();
extern int fn_8302B580();
extern int fn_8302B618();
extern int fn_8302B660();
extern unsigned int uStack00000030;
extern unsigned int uStack00000040;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64
fn_82FFCDE0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000040;
  int aiStack_50 [20];
  
  uStack00000030 = param_4;
  uStack00000040 = param_6;
  fn_8302B530();
  lVar6 = param_1 + 0x39c;
  uVar3 = fn_8302B618(lVar6,param_7);
  if ((uVar3 & 0xffffffff) != 0) {
    do {
      puVar5 = (unsigned int *)(uVar3 + 0x44);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,uVar3 + 0x44);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    iVar2 = (int)uVar3;
    *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
    if (((int)param_8 == 2) || ((*(unsigned char *)(iVar2 + 0x48) & 0x20) != 0)) {
      fn_8302B540();
      return 1;
    }
    param_8 = 3;
  }
  fn_8302B540();
  uStack00000030 = CONCAT44((int)param_7,(((unsigned __int64)(uStack00000030) >> 32) & 0xFFFFFFFF));
  aiStack_50[0] = 0;
  uVar4 = fn_82FFC4C8(param_1,param_2,param_3,uStack00000030,param_5,
                            uStack00000040 & 0xffffffff00000000,aiStack_50,param_8);
  iVar2 = aiStack_50[0];
  if ((int)uVar4 == 1) {
    fn_8302B580(lVar6,param_7,aiStack_50[0]);
  }
  else if (((int)uVar4 != 0x45) && (aiStack_50[0] != 0)) {
    fn_8302B660(lVar6,param_7);
    fn_82FFBD98(iVar2,0);
  }
  return uVar4;
}

