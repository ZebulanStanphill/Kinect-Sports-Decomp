typedef unsigned char bool;
#define false 0
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696AD0();


void fn_826BDC38(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar4;
  int uVar3;
  int *piVar5;
  unsigned char uVar6;
  int lVar7;
  unsigned char *puVar8;
  
  if (1 <= *(int *)(param_1 + 0x1c)) {
    iVar4 = (*(int (**)())(**(int **)(param_1 + 8) + 8))(*(void **)(param_1 + 8));
    bVar2 = (iVar4 < 2 || iVar4 > 5) ? 0 : 1;
    if (!bVar2) {
      lVar7 = *(void **)(param_1 + 8) ? *(int *)(param_1 + 8) - 0x10 : 0;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      piVar5 = (int *)fn_82696AD0(uVar3,uVar1);
      if (piVar5 != (int *)0x0) {
        uVar6 = (*(int (**)())(*piVar5 + 0x48))(piVar5,*(unsigned int *)(param_1 + 0x18),lVar7,0);
        puVar8 = *(unsigned char **)(param_1 + 4);
        fn_826959C8(puVar8);
        puVar8[4] = uVar6;
        puVar8[0] = 2;
        return;
      }
    }
  }
  puVar8 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar8);
  puVar8[4] = false;
  puVar8[0] = 2;
  return;
}

