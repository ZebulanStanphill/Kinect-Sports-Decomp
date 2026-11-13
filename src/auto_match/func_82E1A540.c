#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CFBEB8();
extern int fn_82D00000();
extern int fn_82D00040();
extern int fn_82D000A0();
extern int fn_82D001D8();
extern int fn_82D002F0();
extern int fn_82D00388();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82E1A540(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  char acStack_3f [7];
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = fn_82CE5410();
    uVar1 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x10);
    uVar5 = (unsigned int)uVar1;
    if ((uVar1 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      fn_82D00388(uVar1,0);
    }
    *(unsigned int *)(param_1 + 0x30) = uVar5;
  }
  uVar5 = *(unsigned int *)(param_1 + 0x30);
  uVar2 = fn_82D001D8(uVar5,param_3);
  fn_82D002F0(acStack_3f,uVar5,uVar2);
  if (acStack_3f[0] == '\0') {
    iVar4 = fn_82CE5410();
    uVar3 = fn_82CFBEB8(param_3,*(unsigned int *)(iVar4 + 0x10));
    fn_82D000A0(uVar5,uVar3,0);
  }
  else {
    uVar3 = fn_82D00000(uVar5,uVar2);
    fn_82D00040(uVar5,uVar2,0);
  }
  uStack_34 = (unsigned int)uVar3;
  uStack_38 = param_2;
  iVar4 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0x28) == (*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),(int *)(param_1 + 0x24),8);
  }
  *(unsigned __int64 *)(*(int *)(param_1 + 0x28) * 8 + *(int *)(param_1 + 0x24)) =
       CONCAT44(uStack_38,uStack_34);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

