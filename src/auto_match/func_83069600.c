typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F691F0();
extern int fn_83062E18();
extern int fn_83065890();
extern int fn_83065B90();
extern int fn_83065BA8();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern unsigned int iStack_48;
extern unsigned int lbl_8217E890;


void fn_83069600(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  int iVar5;
  __int64 lVar6;
  unsigned char **appuStack_50 [2];
  int iStack_48;
  
  lVar6 = ((unsigned __int64)*param_2 + 1 & 0x3fffffff) << 2;
  uVar2 = fn_83065B90(lVar6);
  iStack_48 = 0;
  appuStack_50[0] = &lbl_8217E890;
  if ((param_3 & 0xffffffff) != 0) {
    fn_830677A0(param_3,*(unsigned int *)(param_1 + 0xdc),0xffffffff8217eafc);
  }
  uVar3 = fn_83062E18(param_1);
  fn_83065890(appuStack_50,uVar3);
  do {
    if (iStack_48 == 0) {
      if ((param_3 & 0xffffffff) != 0) {
        fn_830678C8(param_3);
      }
      fn_83065BA8(uVar2);
      return;
    }
    if (*(int *)(iStack_48 + 0x38) == 0) {
      if (*(int *)(iStack_48 + 0x40) == 0) {
        uVar1 = *param_2;
        *param_2 = uVar1 + 1;
        *(unsigned int *)(iStack_48 + 0x38) = uVar1 + 1;
      }
      else {
        iVar5 = *(int *)(*(int *)(iStack_48 + 0x40) + 0x10);
        bVar4 = false;
        uVar1 = *(unsigned int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x28) + 0x38);
        do {
          iVar5 = *(int *)(iVar5 + 4);
          if (iVar5 == 0) goto LAB_830696dc;
        } while (*(unsigned int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x28) + 0x38) == uVar1);
        bVar4 = true;
LAB_830696dc:
        if (bVar4) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uVar2,0,lVar6);
        }
        *(unsigned int *)(iStack_48 + 0x38) = uVar1;
      }
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_830679A8(param_3,iStack_48);
    }
    iStack_48 = (*(int (**)())appuStack_50[0][1])(appuStack_50,iStack_48);
  } while( true );
}

