typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82246A40();
extern int fn_822471C8();
extern int fn_824C04E0();
extern int fn_8289AB78();
extern int fn_828AD740();


void fn_824C3F18(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar6;
  __int64 lVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x5c) != 0) {
    *(unsigned int *)(*(int *)(iVar1 + 0x48) + 0x4c) = *(unsigned int *)(*(int *)(iVar1 + 0x5c) + 0x40c)
    ;
  }
  iVar2 = *(int *)(iVar1 + 0x48);
  if ((iVar2 == 0) || (bVar4 = true, *(unsigned int *)(*(int *)(iVar2 + 8) + 0x204) < 2)) {
    bVar4 = false;
  }
  if (bVar4) {
    if (*(int *)(iVar1 + 0x5c) != 0) {
      cVar6 = fn_828AD740(*(unsigned int *)(iVar2 + 8));
      if (cVar6 != '\0') {
        cVar6 = fn_82246A40(*(unsigned int *)(iVar1 + 0x48));
        if (cVar6 != '\0') {
          piVar3 = *(int **)(*(int *)(iVar1 + 0x48) + 0x38);
          if (piVar3 != (int *)0x0) {
            lVar5 = (**(int (***)())(*piVar3 + 8))();
            cVar6 = fn_8289AB78(lVar5 + 0xf0);
            if (cVar6 != '\0') {
              fn_822471C8(*(unsigned int *)(*(int *)(iVar1 + 0x48) + 0x38),1);
            }
          }
        }
      }
    }
  }
  else {
    *(unsigned int *)(iVar1 + 0x44) = 6;
    fn_824C04E0(iVar1,1);
  }
  return;
}

