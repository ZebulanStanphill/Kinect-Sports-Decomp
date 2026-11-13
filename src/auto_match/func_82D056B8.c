#define true 1
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE7E00();
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82D04F70();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_68;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82D056B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  int iStack_70;
  int iStack_6c;
  unsigned int uStack_68;
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  fn_82CE7EE0(&iStack_70);
  while( true ) {
    while( true ) {
      uVar1 = uStack_68;
      uVar6 = uStack_68 & 0x3fffffff;
      iVar2 = thunk_FUN_82f6ede8(iStack_70,uVar6,param_2,&stack0x00000020);
      if (-1 < iVar2) break;
      uVar6 = (uVar1 & 0x3fffffff) << 1;
      if (uVar6 < 0x100) {
        uVar6 = 0xff;
      }
      iVar3 = uVar6 + 1;
      iVar2 = fn_82CE5410();
      if ((int)(uStack_68 & 0x3fffffff) < iVar3) {
        iVar5 = (uStack_68 & 0x3fffffff) << 1;
        if (iVar5 <= iVar3) {
          iVar5 = iVar3;
        }
        fn_82CE6310(*(unsigned int *)(iVar2 + 0xc),&iStack_70,iVar5,1);
      }
      *(unsigned char *)(uVar6 + iStack_70) = 0;
      iStack_6c = iVar3;
    }
    if (iVar2 < (int)uVar6) break;
    iVar5 = iVar2 + 1;
    iVar3 = fn_82CE5410();
    if ((int)(uStack_68 & 0x3fffffff) < iVar5) {
      iVar4 = (uStack_68 & 0x3fffffff) << 1;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0xc),&iStack_70,iVar4,1);
    }
    *(unsigned char *)(iStack_70 + iVar2) = 0;
    iStack_6c = iVar5;
  }
  fn_82CE7E00(&iStack_70,iVar2);
  fn_82D04F70(param_1,iStack_70,0xffffffffffffffff);
  fn_82CE7E68(&iStack_70);
  return;
}

