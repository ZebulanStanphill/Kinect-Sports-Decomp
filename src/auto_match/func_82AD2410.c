typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD15F0();
extern int fn_82AD1750();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64
fn_82AD2410(unsigned __int64 param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5,
             int *param_6)

{
  unsigned __int64 uVar1;
  bool bVar2;
  bool bVar3;
  unsigned int uVar5;
  char cVar6;
  unsigned __int64 uVar4;
  int *piVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  
  iVar9 = 0;
  bVar3 = false;
  bVar2 = param_5 == 0;
  stack_pair_70.first = param_2;
  stack_pair_70.second = param_2;
  uVar5 = fn_82AD1750(&stack_pair_70.first);
  do {
    if (uVar5 == 0) {
      if ((bVar3) || (iVar9 != 0)) {
        *param_6 = iVar9;
        if (param_5 != 0) {
          *(bool *)param_5 = bVar2;
        }
        *(bool *)param_4 = bVar3;
        uVar4 = 1;
      }
      else {
LAB_82ad2558:
        uVar4 = 0;
      }
      return uVar4;
    }
    if ((param_3 == 0) ||
       (uVar1 = (unsigned __int64)*(unsigned int *)(param_3 + 0x30) & 0x7ffff,
       (*(unsigned int *)(((int)(uVar1 >> 5) + 1) * 4 + *(int *)(uVar5 + 0x28)) & 1 << ((unsigned int)uVar1 & 0x1f))
       == 0)) {
      piVar7 = *(int **)(uVar5 + 0xc);
      if ((piVar7 == (int *)0x0) || (*piVar7 == 0)) {
        bVar3 = true;
      }
      else {
        for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
          iVar11 = *piVar7;
          uVar1 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff;
          iVar10 = iVar9;
          if (((((1 << ((unsigned int)uVar1 & 0x1f) &
                 *(unsigned int *)(((int)(uVar1 >> 5) + 1) * 4 + *(int *)(iVar11 + 0x28))) == 0) ||
               ((param_3 != 0 &&
                (uVar1 = (unsigned __int64)*(unsigned int *)(param_3 + 0x30) & 0x7ffff,
                (1 << ((unsigned int)uVar1 & 0x1f) &
                *(unsigned int *)(((int)(uVar1 >> 5) + 1) * 4 + *(int *)(iVar11 + 0x28))) != 0)))) &&
              (iVar10 = iVar11, iVar9 != 0)) && (iVar10 = iVar9, iVar11 != iVar9))
          goto LAB_82ad2558;
          iVar9 = iVar10;
        }
      }
      if (!bVar2) {
        if ((*(unsigned int *)(uVar5 + 0x14) & 1) == 0) {
          uVar8 = *(unsigned int *)(uVar5 + 0x14);
          iVar11 = uVar5 + 0x10;
        }
        else if ((*(unsigned int *)(uVar5 + 0x1c) & 1) == 0) {
          uVar8 = *(unsigned int *)(uVar5 + 0x1c);
          iVar11 = uVar5 + 0x18;
        }
        else {
          uVar8 = *(unsigned int *)(uVar5 + 0x24);
          iVar11 = uVar5 + 0x20;
        }
        uVar8 = -(unsigned int)((uVar8 & 1) == 0) & uVar8;
        while (uVar8 != 0) {
          do {
            cVar6 = fn_82AD15F0(uVar8);
            if (cVar6 != '\0') {
              bVar2 = true;
              goto LAB_82ad263c;
            }
            uVar8 = *(unsigned int *)((uVar8 & 0xfffffffe) + 0x28);
          } while (((uVar8 & 1) == 0) && (uVar8 != 0));
          iVar10 = uVar5 + 0x20;
          if (iVar11 == iVar10) break;
          if ((iVar11 == uVar5 + 0x18) || ((*(unsigned int *)(uVar5 + 0x1c) & 1) != 0)) {
            uVar8 = *(unsigned int *)(uVar5 + 0x24);
          }
          else {
            uVar8 = *(unsigned int *)(uVar5 + 0x1c);
            iVar10 = uVar5 + 0x18;
          }
          iVar11 = iVar10;
          if ((uVar8 & 1) != 0) break;
        }
      }
    }
    else {
      for (; uVar5 != stack_pair_70.first; uVar5 = *(unsigned int *)(uVar5 + 0x34)) {
        stack_pair_70.second = *(unsigned int *)(uVar5 + 0x3c);
        if (stack_pair_70.second != 0) goto LAB_82ad263c;
      }
      stack_pair_70.second = 0;
    }
LAB_82ad263c:
    uVar5 = fn_82AD1750(&stack_pair_70.first);
  } while( true );
}

