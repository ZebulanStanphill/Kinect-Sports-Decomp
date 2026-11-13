typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B80EE0();


unsigned __int64
fn_82AF5160(unsigned __int64 param_1,unsigned int param_2,int param_3,int *param_4,int param_5,unsigned int param_6,
             int param_7,int param_8)

{
  int iVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  int in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned int *in_stack_00000064;
  
  iVar7 = 0;
  *in_stack_00000064 = 0;
  uVar3 = 0;
  uVar5 = 0;
  if (param_6 != 0) {
    uVar4 = 0;
    do {
      bVar2 = false;
      uVar6 = 0;
      if (param_2 != 0) {
        piVar8 = param_4;
        do {
          iVar1 = *(int *)((param_3 - (int)param_4) + (int)piVar8);
          if (((iVar1 == *(int *)(iVar7 + param_7)) &&
              (*(int *)((param_5 - (int)param_4) + (int)piVar8) ==
               *(int *)(iVar7 + in_stack_00000054))) &&
             (bVar2 = true, *piVar8 == *(int *)(iVar7 + param_8))) break;
          if (((*(unsigned int *)(*(int *)(iVar7 + param_7) + 8) & 0x3f80) == 16000) &&
             ((*(unsigned int *)(iVar1 + 8) & 0x3f80) == 16000)) {
            dVar9 = (double)fn_82B80EE0(iVar1,*piVar8,
                                         *(unsigned int *)((param_5 - (int)param_4) + (int)piVar8));
            dVar10 = (double)fn_82B80EE0(*(unsigned int *)(iVar7 + param_7),
                                          *(unsigned int *)(iVar7 + param_8),
                                          *(unsigned int *)(iVar7 + in_stack_00000054));
            if (dVar9 == dVar10) break;
          }
          uVar6 = uVar6 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar6 < param_2);
      }
      if (uVar6 == param_2) {
        if (!bVar2) {
          return 0;
        }
        *in_stack_00000064 = 1 << (uVar5 & 0x3f) | *in_stack_00000064;
      }
      else {
        uVar3 = uVar3 & ~(3 << (uVar4 & 0x3f)) | uVar6 << (uVar4 & 0x3f);
      }
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 4;
      uVar4 = uVar4 + 2;
    } while (uVar5 < param_6);
  }
  *in_stack_0000005c = uVar3;
  return 1;
}

