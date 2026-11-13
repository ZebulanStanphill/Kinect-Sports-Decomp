#define true 1
extern unsigned int *auStack_144;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CED628();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82CED738(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned char *puStack_150;
  unsigned int uStack_14c;
  unsigned int uStack_148;
  unsigned char auStack_144 [324];
  
  puStack_150 = auStack_144;
  uStack_14c = 0;
  uStack_148 = 0x800000ff;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  while( true ) {
    while( true ) {
      uVar1 = uStack_148 & 0x3fffffff;
      lVar2 = thunk_FUN_82f6ede8(puStack_150,uVar1,param_2,&stack0x00000020);
      iVar4 = (int)lVar2;
      if (-1 < iVar4) break;
      uVar1 = (uStack_148 & 0x3fffffff) << 1;
      iVar4 = fn_82CE5410();
      if ((uStack_148 & 0x3fffffff) < uVar1) {
        uVar6 = (uStack_148 & 0x3fffffff) << 1;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),&puStack_150,uVar6,1);
      }
    }
    if (iVar4 < (int)uVar1) break;
    iVar3 = fn_82CE5410();
    if ((int)(uStack_148 & 0x3fffffff) < iVar4) {
      lVar5 = ((unsigned __int64)uStack_148 & 0x3fffffff) << 1;
      if ((int)lVar5 <= iVar4) {
        lVar5 = lVar2;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),&puStack_150,lVar5,1);
    }
  }
  fn_82CED628(param_1,puStack_150);
  fn_82CED628(param_1,puStack_150);
  iVar4 = fn_82CE5410();
  uStack_14c = 0;
  if ((uStack_148 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),puStack_150,uStack_148 & 0x3fffffff,1);
  }
  return;
}

