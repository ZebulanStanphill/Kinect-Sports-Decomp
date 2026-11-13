typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8225F160();
extern int fn_8247E4D8();
extern int fn_824C04E0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828AD740();


void fn_824C3E18(int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar7;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(iVar6 + 0x48);
  if ((iVar5 == 0) || (bVar2 = true, *(unsigned int *)(*(int *)(iVar5 + 8) + 0x204) < 2)) {
    bVar2 = false;
  }
  if (bVar2) {
    cVar7 = fn_828AD740(*(unsigned int *)(iVar5 + 8));
    if (cVar7 == '\0') {
      piVar1 = *(int **)(*(int *)(iVar6 + 0x48) + 0x38);
      if (piVar1 != (int *)0x0) {
        lVar3 = fn_8265C9E0(0x428);
        if (lVar3 == 0) {
          iVar5 = 0;
        }
        else {
          lVar4 = (**(int (***)())(*piVar1 + 8))(piVar1);
          iVar5 = fn_8247E4D8(lVar3,lVar4 + 0xf0);
        }
        if (iVar5 != *(int *)(iVar6 + 0x5c)) {
          if (*(int *)(iVar6 + 0x5c) != 0) {
            fn_8265CA20();
          }
          *(int *)(iVar6 + 0x5c) = iVar5;
        }
      }
    }
    if (*(int *)(iVar6 + 0x5c) != 0) {
      *(unsigned int *)(*(int *)(iVar6 + 0x48) + 0x4c) =
           *(unsigned int *)(*(int *)(iVar6 + 0x5c) + 0x40c);
    }
    iVar6 = fn_8225F160();
    if (iVar6 != 0) {
      *(unsigned int *)(iVar6 + 100) = 2;
    }
  }
  else {
    *(unsigned int *)(iVar6 + 0x44) = 6;
    fn_824C04E0(iVar6,1);
  }
  return;
}

