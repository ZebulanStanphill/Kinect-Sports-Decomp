typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822314E8();
extern int fn_822315A0();
extern int fn_82248AE8();
extern int fn_82350688();
extern int fn_82365BD8();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82514888();
extern int fn_8251CD18();
extern int fn_82522588();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_8329615C;
extern unsigned int lbl_83297810;
extern unsigned int uStack_38;


void fn_82488BA0(unsigned int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int *piVar7;
  __int64 lVar8;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  struct { int first; int second; } stack_pair_50;

  int iStack_48;
  struct { int first; int second; } stack_pair_40;

  unsigned int uStack_38;
  int aiStack_30 [4];

  if ((param_1[1] != 0) && (param_1[2] == 0)) {
    fn_82350688();
    if (*(int *)(param_1[1] + 8) == 0x13) {
      bVar2 = false;
      bVar1 = true;
      uVar6 = 0;
      param_1[2] = 1;
      piVar7 = &lbl_8329615C;
      lVar8 = 4;
      do {
        if (*piVar7 != 0) {
          uVar6 = uVar6 + 1;
        }
        piVar7 = piVar7 + -0xc;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      if (uVar6 < 2) {
        uVar5 = (unsigned __int64)lbl_83297810;
        if (uVar5 == 0) {
          uVar5 = fn_82511928();
        }
        fn_825138E0(&iStack_60,uVar5,1);
        if (iStack_60 == 0) {
          aiStack_30[0] = 0;
          aiStack_30[1] = 0;
          aiStack_30[2] = 0;
          fn_82514888(aiStack_30);
        }
        else {
          fn_82522588(&iStack_58,&iStack_60);
          if (*(int **)(iStack_58 + 0x38) == (int *)0x0) {
            cVar4 = '\0';
          }
          else {
            iVar3 = (**(int (***)())(**(int **)(iStack_58 + 0x38) + 8))();
            cVar4 = (**(int (***)())(*(int *)(iVar3 + 0x198) + 0x3c))();
          }
          if (cVar4 == '\0') {
            aiStack_30[0] = 0;
            bVar2 = true;
            bVar1 = false;
            aiStack_30[1] = 0;
            piVar7 = aiStack_30;
            aiStack_30[2] = 0;
          }
          else {
            stack_pair_40.first = 0;
            stack_pair_40.second = 0;
            uStack_38 = 0;
            cVar4 = fn_82248AE8(&stack_pair_40.first,1);
            iVar3 = stack_pair_40.first;
            if (cVar4 != '\0') {
              if (stack_pair_40.first != 0) {
                fn_82365BD8(stack_pair_40.first,&iStack_60);
              }
              stack_pair_40.second = iVar3 + 8;
            }
            piVar7 = &stack_pair_40.first;
          }
          stack_pair_50.first = 0;
          stack_pair_50.second = 0;
          iStack_48 = 0;
          if (&stack_pair_50.first != piVar7) {
            stack_pair_50.first = *piVar7;
            stack_pair_50.second = piVar7[1];
            iStack_48 = piVar7[2];
            *piVar7 = 0;
            piVar7[1] = 0;
            piVar7[2] = 0;
          }
          fn_82514888(&stack_pair_50.first);
          if (bVar2) {
            fn_822314E8(aiStack_30);
          }
          if (bVar1) {
            fn_822314E8(&stack_pair_40.first);
          }
          if (iStack_54 != 0) {
            fn_822315A0();
          }
        }
        if (iStack_5c != 0) {
          fn_822315A0();
        }
      }
      else {
        fn_8251CD18(*param_1);
      }
    }
  }
  return;
}
