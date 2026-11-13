extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82522588();
extern unsigned int iStack_3c;
extern unsigned int ltcg_pool_0_0f;


void fn_824932C0(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar1 = *(int **)(param_1 + 0x5c);
    uVar2 = *(unsigned int *)(param_1 + 0x58);
    puVar3 = (unsigned int *)*piVar1;
    uVar6 = (unsigned __int64)*puVar3;
    if (uVar6 != puVar3[1]) {
      dVar7 = (double)ltcg_pool_0_0f;
      do {
        piVar5 = (int *)fn_82522588(auStack_40,uVar6);
        iVar4 = *piVar5;
        *(float *)(iVar4 + 0x2d0) = (float)dVar7;
        *(unsigned int *)(iVar4 + 0x2a8) = 0x831d33c8;
        *(unsigned int *)(iVar4 + 0x2b4) = uVar2;
        *(unsigned int *)(iVar4 + 0x284) = 2;
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        uVar6 = uVar6 + 8;
      } while ((uVar6 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(*piVar1 + 4));
    }
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  return;
}

