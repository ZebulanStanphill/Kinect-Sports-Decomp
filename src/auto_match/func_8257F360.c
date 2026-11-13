#define true 1
extern unsigned int *auStack_bf;
extern int fn_8251E370();
extern int fn_8251E400();
extern int fn_8251E4D0();
extern int fn_8265BF48();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D88EF8();
extern int fn_82D890C8();
extern int fn_82D89D70();
extern int fn_82D89E30();
extern int fn_82D89E40();
extern int fn_82D93880();
extern int fn_82D93B08();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8213CE14;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821954E4;
extern unsigned int lbl_82195574;
extern unsigned int lbl_82195578;
extern unsigned int uStack_c0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8257F360(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  int iVar5;
  __int64 lVar3;
  int iVar6;
  unsigned int *puVar7;
  int *piVar8;
  __int64 lVar9;
  unsigned int uVar10;
  double extraout_f1;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  unsigned char uStack_c0;
  unsigned char auStack_bf [15];
  int *piStack_b0;
  int *piStack_ac;
  
  iVar4 = fn_82F6A540();
  dVar11 = extraout_f1;
  fn_8251E370(&piStack_b0,4,0);
  iVar1 = *(int *)(iVar4 + 0x3e4);
  iVar5 = fn_8265BF48(param_4,0);
  uVar10 = *(unsigned int *)(iVar1 + 0x758);
  while( true ) {
    if (*(unsigned int *)(iVar1 + 0x75c) <= uVar10) {
      if (piStack_b0 < piStack_ac) {
        dVar15 = (double)lbl_82191FCC;
        dVar14 = (double)lbl_82195578;
        dVar13 = (double)lbl_82195574;
        dVar12 = (double)lbl_821954E4;
        piVar8 = piStack_b0;
        do {
          iVar1 = *(int *)(*piVar8 + 0xd4);
          lVar3 = fn_82D89E30(iVar1);
          if (0 < lVar3) {
            lVar9 = 0;
            if (0 < (int)lVar3) {
              do {
                iVar5 = fn_82D89E40(iVar1,lVar9);
                piVar2 = *(int **)(iVar5 + 0xc);
                iVar6 = (**(int (***)())(*piVar2 + 0x20))(piVar2);
                if (iVar6 == 2) {
                  if (*(int *)(iVar1 + 8) != 0) {
                    fn_82D890C8(auStack_bf,*(unsigned int *)(iVar4 + 0x1f8),iVar5);
                  }
                  iVar6 = fn_82CE5410();
                  puVar7 = (unsigned int *)
                           (**(int (***)())(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),0x20)
                  ;
                  *(unsigned short *)(puVar7 + 1) = 0x20;
                  *(unsigned short *)((int)puVar7 + 6) = 1;
                  *(unsigned char *)(puVar7 + 2) = 0;
                  puVar7[4] = (float)(param_2 * dVar12);
                  puVar7[6] = (float)dVar11;
                  *puVar7 = &lbl_8213CE14;
                  puVar7[5] = (float)dVar15;
                  *(unsigned char *)(puVar7 + 2) = 2;
                  puVar7[3] = -(float)(param_2 * dVar12);
                  *(unsigned char *)(puVar7 + 7) = 0;
                  piVar2[0x31] = (int)(float)dVar13;
                  piVar2[0x32] = (int)(float)dVar14;
                  fn_82D93880(piVar2,puVar7);
                  fn_82CE4118(puVar7);
                  fn_82D88EF8(*(unsigned int *)(iVar4 + 0x1f8),iVar5);
                  fn_82D93B08(piVar2,iVar5,uStack_c0);
                  fn_82D89D70(iVar1);
                }
                lVar9 = lVar9 + 1;
              } while ((int)lVar9 < (int)lVar3);
            }
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 < piStack_ac);
      }
      fn_8251E400(&piStack_b0);
      fn_82F6A58C();
      return;
    }
    if (*(int *)(uVar10 + 0xe8) == iVar5) break;
    uVar10 = uVar10 + 0x3f0;
  }
                    /* WARNING: Subroutine does not return */
  fn_8251E4D0(&piStack_b0);
}

