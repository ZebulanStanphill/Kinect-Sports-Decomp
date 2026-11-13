typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_23e;
extern unsigned int *auStack_43e;
extern int fn_82297DB0();
extern int fn_822ABA88();
extern int fn_822AC2D0();
extern int fn_82F64988();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int uStack_240;
extern unsigned int uStack_440;
extern unsigned int uStack_44c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822ABCE0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  bool bVar1;
  int iVar3;
  int iVar4;
  __int64 lVar2;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int **appuStack_460 [5];
  unsigned int uStack_44c;
  unsigned short uStack_440;
  unsigned char auStack_43e [510];
  unsigned short uStack_240;
  unsigned char auStack_23e [574];
  
  fn_82297DB0(appuStack_460,0,0);
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  uVar6 = 0;
  bVar1 = true;
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      iVar3 = fn_822ABA88(param_1);
      if (*(int *)(iVar3 + 0x74) != 0) {
        uVar6 = 1;
        bVar1 = (bool)(*(char *)(*(int *)(iVar3 + 0x74) + 0xd8) != '\0' & bVar1);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
    if ((int)uVar6 != 0) {
      iVar3 = 0;
      uVar5 = 0;
      do {
        iVar4 = fn_822ABA88(param_1,uVar5);
        if ((*(int *)(iVar4 + 0x74) != 0) &&
           ((bVar1 || (*(char *)(*(int *)(iVar4 + 0x74) + 0xd8) == '\0')))) {
          if ((uVar5 & 0xffffffff) != 0) {
            fn_822AC2D0(appuStack_460,param_3);
          }
          fn_822AC2D0(appuStack_460,iVar4 + 0x30);
          iVar3 = iVar3 + 1;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 8));
      if ((iVar3 == 1) && (1 < *(unsigned int *)(param_1 + 8))) {
        uStack_440 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_43e,0,0x1fe);
      }
      goto LAB_822abee4;
    }
  }
  uVar5 = 0;
  if (2 < (uVar7 & 0xffffffff)) {
    uStack_240 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_23e,0,0x1fe);
  }
  if ((uVar7 & 0xffffffff) != 0) {
    do {
      lVar2 = fn_822ABA88(param_1);
      if ((uVar5 & 0xffffffff) != 0) {
        if ((uVar7 & 0xffffffff) == 2) {
          fn_822AC2D0(appuStack_460,param_3);
          fn_822AC2D0(appuStack_460,lVar2 + 0x30);
        }
        break;
      }
      fn_822AC2D0(appuStack_460,lVar2 + 0x30);
      uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
      uVar5 = 1;
    } while (1 < uVar7);
  }
LAB_822abee4:
  if (uStack_44c < 8) {
    appuStack_460[0] = appuStack_460;
  }
  fn_82F64988(param_1 + 0xa8,0x40,appuStack_460[0]);
  fn_82297DB0(appuStack_460,1,0);
  return;
}

