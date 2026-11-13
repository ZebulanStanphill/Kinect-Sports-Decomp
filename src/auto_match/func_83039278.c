typedef unsigned char bool;
#define false 0
extern int fn_82FAB9C0();
extern int fn_82FEF4C8();
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_830007F8();
extern int fn_83032BE0();
extern int fn_83032D88();
extern unsigned int lbl_832642E0;


void fn_83039278(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  
  fn_82FEFC98();
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    piVar2 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
  }
  if ((((*(unsigned char *)(param_1 + 0x1e4) & 0x20) == 0) || (*(int *)(param_1 + 0x1dc) == 0)) ||
     (cVar3 = fn_830007F8(piVar2,*(unsigned int *)(param_2 + 0xc),0), cVar3 != '\0')) {
    iVar1 = *(int *)(param_1 + 0x188);
    *(unsigned int *)(param_1 + 0x1dc) = 0;
    *(unsigned char *)(param_1 + 0x1e4) = *(unsigned char *)(param_1 + 0x1e4) & 0xdf;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 4)) {
        do {
          iVar1 = *(int *)(param_1 + 0x188);
          if (*(int *)(*(int *)(iVar1 + 8) + -8) == 0) {
            cVar3 = fn_830007F8(*(unsigned int *)(*(int *)(iVar1 + 8) + -0x14),
                                      *(unsigned int *)(param_2 + 0xc),0);
            if (cVar3 == '\0') break;
            iVar1 = *(int *)(param_1 + 0x18c);
            *(int *)(param_1 + 0x18c) = iVar1 + -1;
            while (iVar1 != 1) {
              uVar4 = *(int *)(param_1 + 0x18c) - 1;
              if (uVar4 < 0x20) {
                bVar6 = (*(unsigned int *)(param_1 + 0x1d0) & 1 << (uVar4 & 0x3f)) != 0;
              }
              else {
                bVar6 = false;
              }
              if (bVar6) break;
              iVar1 = *(int *)(param_1 + 0x18c);
              *(int *)(param_1 + 0x18c) = iVar1 + -1;
            }
            iVar1 = *(int *)(param_1 + 0x188);
            fn_83032BE0((unsigned __int64)*(unsigned int *)(iVar1 + 8) - 0x14);
            *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -0x14;
          }
          else {
            uVar5 = (unsigned __int64)*(unsigned int *)(iVar1 + 4);
            uVar4 = *(unsigned int *)(iVar1 + 8);
            if (uVar5 != uVar4) {
              do {
                fn_83032BE0(uVar5);
                uVar5 = uVar5 + 0x14;
              } while ((uVar5 & 0xffffffff) != (unsigned __int64)uVar4);
            }
            *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 4);
          }
        } while (*(int *)(*(int *)(param_1 + 0x188) + 8) != *(int *)(*(int *)(param_1 + 0x188) + 4))
        ;
      }
      iVar1 = *(int *)(param_1 + 0x188);
      if (((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x14 == 0) &&
         (*(unsigned int *)(param_1 + 0x188) = 0, iVar1 != 0)) {
        fn_83032D88();
      }
    }
  }
  if (piVar2 != (int *)0x0) {
    (**(int (***)())(*piVar2 + 8))(piVar2);
  }
  fn_82FEF4C8(param_1,param_2);
  fn_82FEFCC8(param_1);
  return;
}

