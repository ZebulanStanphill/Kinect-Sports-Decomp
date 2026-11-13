#define true 1
extern int fn_82FA5190();
extern int fn_82FF38E8();
extern int fn_82FF4618();
extern unsigned int iStack_50;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_4c;


unsigned __int64 fn_83015318(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  unsigned int *puVar8;
  struct { int first; unsigned int second; } stack_pair_50;

  int *piStack_48;
  
  piVar3 = (int *)(param_1 + 4);
  fn_82FF4618(&stack_pair_50.first,piVar3);
  uVar4 = stack_pair_50.second;
  piVar6 = piStack_48;
joined_r0x83015340:
  if (piVar6 == (int *)0x0) {
    if (*piVar3 != -1) {
      fn_82FF38E8(piVar3);
      *piVar3 = -1;
    }
    iVar7 = *(int *)(param_1 + 0x88);
    if (iVar7 != *(int *)(param_1 + 0x8c)) {
      do {
        if (*(int *)(iVar7 + 0x10) != 0) {
          fn_82FA5190(lbl_831BC768);
          *(unsigned int *)(iVar7 + 0x10) = 0;
        }
        *(unsigned int *)(iVar7 + 0x14) = 0;
        *(unsigned int *)(iVar7 + 0x18) = 0;
        iVar7 = iVar7 + 0x1c;
      } while (iVar7 != *(int *)(param_1 + 0x8c));
    }
    if (*(int *)(param_1 + 0x88) != 0) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x88);
      fn_82FA5190(lbl_831BC768);
      *(unsigned int *)(param_1 + 0x88) = 0;
      *(unsigned int *)(param_1 + 0x8c) = 0;
      *(unsigned int *)(param_1 + 0x90) = 0;
    }
    iVar7 = 0xd;
    do {
      iVar5 = 0;
      do {
        iVar2 = (iVar7 + iVar5) * 0xc;
        puVar8 = (unsigned int *)(iVar2 + param_1);
        if (*(int *)(iVar2 + param_1) != 0) {
          fn_82FA5190(lbl_831BC768);
          *puVar8 = 0;
        }
        iVar5 = iVar5 + 1;
        puVar8[1] = 0;
        puVar8[2] = 0;
      } while (iVar5 < 2);
      iVar7 = iVar7 + 2;
    } while (iVar7 < 0x11);
    return 1;
  }
  do {
    do {
      piVar1 = (int *)piVar6[3];
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0x10))(piVar1,0xffffffff831bc7f4);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
    do {
      uVar4 = uVar4 + 1;
      if (0x1e < uVar4) goto joined_r0x83015340;
      piVar6 = *(int **)(uVar4 * 4 + stack_pair_50.first);
    } while (piVar6 == (int *)0x0);
  } while( true );
}

