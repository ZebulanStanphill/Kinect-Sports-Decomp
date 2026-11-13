extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BC24F0();
extern int fn_82BC5580();
extern int fn_82BC7368();
extern unsigned int lbl_820DF0C4;
extern unsigned int uStack_50;


/* WARNING: Removing unreachable block (ram,0x82bae67c) */

void fn_82BAE4A8(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_50;
  
  if ((*(char *)(*(int *)(param_1 + 0x88) + 0x8c) != '\0') ||
     (*(char *)(*(int *)(param_1 + 0x88) + 0x8d) != '\0')) {
    iVar3 = fn_82BC7368(*(unsigned int *)(param_2 + 100));
    if (iVar3 != 3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfa08,0xffffffff820df268,0x318);
    }
    if (**(char **)(param_1 + 0x10) == '\0') {
      uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x68) + 4);
      if ((int)uVar1 < 1) {
        if ((*(int *)(*(int *)(param_2 + 100) + 4) != 1) ||
           (**(int **)(*(int *)(param_2 + 100) + 8) != 0)) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfa28,0xffffffff820df268,0x33c);
        }
      }
      else {
        uVar5 = (unsigned __int64)uVar1 - 1;
        uVar2 = fn_82BC7368();
        iVar3 = fn_82BA92B0(param_2);
        iVar3 = *(int *)(iVar3 + 0x38);
        piVar4 = (int *)fn_82BC24F0(0x5a,*(unsigned int *)(param_1 + 0xc));
        piVar4[0xe] = iVar3;
        piVar4[0x14] = 0;
        piVar4[0x20] = lbl_820DF0C4;
        fn_82BA05E8(piVar4,1,uVar2);
        if (2 < (int)uVar5) {
          if ((int)uVar5 < 7) {
            uVar5 = (unsigned __int64)uVar1 - 4;
          }
          else {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0x333);
            uVar5 = (unsigned __int64)uStack_50;
          }
        }
        (**(int (***)())(*piVar4 + 0x58))(piVar4,1,0,uVar5);
        (**(int (***)())(*piVar4 + 0x58))(piVar4,1,1,uVar5);
        (**(int (***)())(*piVar4 + 0x58))(piVar4,1,2,uVar5);
        (**(int (***)())(*piVar4 + 0x58))(piVar4,1,3,uVar5);
        fn_82BC5580(param_1,piVar4);
      }
    }
  }
  fn_82BABEF0(param_2,param_1 + 0x14,*(unsigned char *)(param_1 + 0x7c));
  return;
}

