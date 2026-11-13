typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_163e;
extern unsigned int *auStack_183e;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82279D28();
extern int fn_8228D868();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_828ACCE8();
extern int fn_82F691F0();
extern unsigned int iStack_1844;
extern unsigned int iStack_1848;
extern unsigned int iStack_184c;
extern unsigned int iStack_1850;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_832975B0;
extern unsigned int lbl_83297810;
extern unsigned int uStack_1640;
extern unsigned int uStack_1840;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228D478(int param_1,int param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  char cVar4;
  int iVar3;
  unsigned __int64 uVar5;
  int iStack_1850;
  int iStack_184c;
  int iStack_1848;
  int iStack_1844;
  unsigned short uStack_1840;
  unsigned char auStack_183e [510];
  unsigned short uStack_1640;
  unsigned char auStack_163e [5694];
  
  bVar2 = false;
  uVar5 = (unsigned __int64)lbl_83297810;
  if (uVar5 == 0) {
    uVar5 = fn_82511928();
  }
  fn_825138E0(&iStack_1848,uVar5,1);
  if ((iStack_1848 != 0) && (cVar4 = fn_828ACCE8(*(unsigned int *)(iStack_1848 + 8)), cVar4 != '\0'))
  {
    bVar2 = true;
  }
  if (param_2 == 0) {
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if ((*(char *)(iVar3 + 4) == '\0') || (!bVar2)) {
      puVar1 = *(unsigned int **)(param_1 + 0x174);
LAB_8228d848:
      *puVar1 = 1;
      goto LAB_8228d84c;
    }
    if (*(int *)(param_1 + 0x16c) == 0) {
      uVar5 = (unsigned __int64)lbl_83297810;
      **(unsigned int **)(param_1 + 0x174) = 1;
      if (uVar5 == 0) {
        uVar5 = fn_82511928();
      }
      fn_825138E0(&iStack_1850,uVar5,1);
      if (iStack_1850 != 0) {
        uStack_1640 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_163e,0,0x1fe);
      }
LAB_8228d830:
      if (iStack_184c != 0) {
        fn_822315A0();
      }
      goto LAB_8228d84c;
    }
  }
  else {
    if (param_2 != 1) goto LAB_8228d84c;
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if ((*(char *)(iVar3 + 4) == '\0') || (!bVar2)) {
      puVar1 = *(unsigned int **)(param_1 + 0x170);
      goto LAB_8228d848;
    }
    if (*(int *)(param_1 + 0x16c) == 0) {
      if (*(int *)(param_1 + 0x18c) == 0) {
        fn_82279D28(param_1,1,1);
        *(unsigned int *)(param_1 + 0x18c) = 1;
      }
      uVar5 = (unsigned __int64)lbl_83297810;
      if (uVar5 == 0) {
        uVar5 = fn_82511928();
      }
      fn_825138E0(&iStack_1850,uVar5,1);
      if (iStack_1850 != 0) {
        uStack_1840 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_183e,0,0x1fe);
      }
      **(unsigned int **)(param_1 + 0x170) = 1;
      goto LAB_8228d830;
    }
  }
  fn_8228D868(param_1);
LAB_8228d84c:
  if (iStack_1844 != 0) {
    fn_822315A0();
  }
  return;
}

