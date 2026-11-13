#define true 1
extern int fn_822315A0();
extern int fn_82248B90();
extern int fn_8225C590();
extern int fn_823AB158();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828AD740();
extern int memcpy();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int lbl_83297810;


unsigned __int64 fn_822AC078(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar8;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar9;
  int iStack_3c;
  struct { int first; int second; } stack_pair_38;

  
  if (*(int *)(*(int *)(param_3 + 0x90) + 4) == 0) {
    return 0;
  }
  if ((*(int *)(*(int *)(param_3 + 0x90) + 8) == 0) ||
     ((*(int *)(param_1 + 0x10) != 0 && (*(int *)(param_1 + 0x10) != 1)))) {
    iVar7 = fn_8225C590();
    uVar2 = *(unsigned int *)(iVar7 + 0x30);
    if (uVar2 < (unsigned int)(*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2)) {
      uVar3 = *(unsigned int *)(uVar2 * 4 + *(int *)(iVar7 + 0x10));
      *(unsigned int *)(iVar7 + 0x30) = uVar2 + 1;
      return (unsigned __int64)uVar3;
    }
    return 0;
  }
  cVar8 = fn_828AD740();
  iVar7 = *(int *)(param_1 + 0x10);
  if (cVar8 == '\0') {
    iVar7 = iVar7 + -1;
  }
  uVar2 = (unsigned int)LZCOUNT(iVar7) >> 5;
  uVar9 = (unsigned __int64)lbl_83297810;
  if (uVar9 == 0) {
    uVar9 = fn_82511928();
  }
  fn_825138E0(&stack_pair_38.first,uVar9,1);
  if (stack_pair_38.first != 0) {
    uVar1 = *(unsigned int *)(stack_pair_38.first + 8);
    iVar7 = 0;
    uVar4 = fn_828A12E8(uVar1);
    iVar5 = fn_8288F948(uVar4,1);
    iStack_3c = **(int **)(iVar5 + 4);
    while( true ) {
      iVar5 = iStack_3c;
      uVar4 = fn_828A12E8(uVar1);
      iVar6 = fn_8288F948(uVar4,1);
      if (iVar5 == *(int *)(iVar6 + 4)) break;
      iVar7 = *(int *)(iVar5 + 0x14);
      if (uVar2 == 0) {
        cVar8 = fn_8288B760(iVar7);
        if (cVar8 == '\0') goto LAB_822ac168;
      }
      else {
        cVar8 = fn_8288B760(iVar7);
        if (cVar8 != '\0') {
LAB_822ac168:
          if (**(int **)(param_2 + 0x48) == 0) {
            if (*(int *)(iVar7 + 0x470) == 0) {
LAB_822ac1bc:
              iVar5 = 0;
            }
            else {
              iVar5 = iVar7 + 0x88;
            }
          }
          else {
            iVar5 = iVar7 + 0x475;
            if (*(int *)(iVar7 + 0x860) == 0) goto LAB_822ac1bc;
          }
          if (iVar5 != 0) {
            memcpy(*(int **)(param_2 + 0x48) + 0x10,iVar5,1000);
            *(unsigned int *)(*(int *)(param_2 + 0x48) + 0x30) = 1;
          }
          break;
        }
      }
      fn_82248B90(&iStack_3c);
    }
    if (((uVar2 == 0) && (iVar7 != 0)) && (cVar8 = fn_8288B760(iVar7), cVar8 == '\0')) {
      if (**(int **)(param_2 + 0x48) == 0) {
        uVar9 = fn_823AB158(iVar7);
      }
      else {
        uVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x864);
      }
      if ((uVar9 & 0xffffffff) != 0) goto LAB_822ac268;
    }
  }
  iVar7 = fn_8225C590();
  uVar2 = *(unsigned int *)(iVar7 + 0x30);
  if (uVar2 < (unsigned int)(*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2)) {
    uVar9 = (unsigned __int64)*(unsigned int *)(uVar2 * 4 + *(int *)(iVar7 + 0x10));
    *(unsigned int *)(iVar7 + 0x30) = uVar2 + 1;
  }
  else {
    uVar9 = 0;
  }
LAB_822ac268:
  if (stack_pair_38.second != 0) {
    fn_822315A0();
  }
  return uVar9;
}

