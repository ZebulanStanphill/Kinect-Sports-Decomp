typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE250();
extern int fn_82AD5F68();
extern int fn_82AD6008();
extern int fn_82AD7E28();
extern int fn_82B41D68();
extern int fn_82B82D28();
extern unsigned int uStack_70;


unsigned __int64
fn_82AD8278(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,int param_7)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int *puVar7;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar8;
  unsigned __int64 uVar6;
  int iVar9;
  int *piVar10;
  unsigned int uStack_70;
  int aiStack_6c;
  
  puVar7 = (unsigned int *)fn_82ABE250(param_1,8,8);
  puVar1 = puVar7 + 1;
  puVar7[1] = (unsigned int)puVar7 | 1;
  *puVar7 = (unsigned int)puVar1 | 1;
  piVar10 = *(int **)(param_7 + 0x14);
  if ((((unsigned int)piVar10 & 1) == 0) && (piVar10 != (int *)0x0)) {
    do {
      if ((piVar10[2] & 0x3f80U) == 0x3800) {
        if ((*piVar10 == 0) || (bVar3 = true, *(int *)(*piVar10 + 4) == 0)) {
          bVar3 = false;
        }
        if (bVar3) {
          uVar4 = fn_82B41D68(param_1,piVar10,param_5,0,1);
          uVar5 = fn_82B41D68(param_1,piVar10,param_6,0,1);
          if ((uVar4 & 0xffffffff) != (uVar5 & 0xffffffff)) {
            if ((*puVar1 & 1) == 0) {
              uVar2 = *puVar7 & 0xfffffffe;
              iVar8 = uVar2 - 4;
              if ((iVar8 == 0) || (*(unsigned int *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U))
              goto LAB_82ad837c;
            }
            else {
LAB_82ad837c:
              iVar8 = fn_82AD6008(puVar7,1);
            }
            iVar9 = *(int *)(iVar8 + 8) * 0x24 + iVar8;
            *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
            *(int **)(iVar9 + 0x24) = piVar10;
            *(unsigned int *)(iVar9 + 0x20) = *(unsigned int *)(iVar9 + 0x20) & 0xfffffff0 | 9;
            fn_82B82D28(uVar4,0,iVar9 + 0x10,&uStack_70,&aiStack_6c,0,piVar10,0);
            *(unsigned int *)(iVar9 + 0x18) = uStack_70 | 0xe4;
            if (aiStack_6c == 0) {
              fn_82B82D28(uVar5,0,iVar9 + 0x14,&uStack_70,&aiStack_6c,0,piVar10,0);
              *(unsigned int *)(iVar9 + 0x1c) = uStack_70 | 0xe4;
              if (aiStack_6c == 0) goto LAB_82ad842c;
            }
            fn_82AD5F68(puVar7);
            break;
          }
        }
      }
LAB_82ad842c:
      piVar10 = *(int **)(((unsigned int)piVar10 & 0xfffffffe) + 0x28);
      if ((((unsigned int)piVar10 & 1) != 0) || (piVar10 == (int *)0x0)) break;
    } while( true );
  }
  if (((*puVar1 & 1) == 0) && (*puVar1 != 0)) {
    fn_82AD7E28(param_1,puVar7,param_3,param_4,param_7,0);
    fn_82AD5F68(puVar7);
    uVar6 = 1;
    *puVar7 = *(unsigned int *)(param_1 + 0x3d0);
    *(unsigned int **)(param_1 + 0x3d0) = puVar7;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

