extern unsigned int *auStack_40;
extern int fn_82CEAC20();
extern int fn_82CEAC28();
extern int fn_82D000A0();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D00450();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_82E12688(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned char auStack_40 [32];
  
  iVar5 = 0;
  fn_82D00388(auStack_40,0);
  for (; (param_3 & 0xffffffff) != 0; param_3 = fn_82CEAC28(param_3)) {
    uVar2 = fn_82CEAC20(param_3);
    fn_82D000A0(auStack_40,uVar2,param_3);
  }
  iVar4 = 0;
  if (0 < param_2[1]) {
    do {
      iVar3 = *(int *)(*(int *)(*param_2 + iVar5) + 0xc);
      iVar1 = *(int *)(*param_2 + iVar5);
      while (iVar3 != 0) {
        iVar3 = fn_82D00450(auStack_40,iVar3,0);
        if (iVar3 != 0) {
          fn_82D003F0(auStack_40);
          return iVar1;
        }
        iVar3 = *(int *)(iVar1 + 0x20);
        iVar1 = iVar1 + 0x14;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < param_2[1]);
  }
  fn_82D003F0(auStack_40);
  return 0;
}

