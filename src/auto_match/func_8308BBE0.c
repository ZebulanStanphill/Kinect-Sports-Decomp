#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_8308A2F8();
extern int fn_8308AAA8();
extern int fn_8308B898();


void fn_8308BBE0(int param_1,unsigned int *param_2,unsigned int *param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 *puVar13;
  int iVar14;
  unsigned int *puVar15;
  unsigned __int64 uVar16;
  int *piVar17;
  
  uVar1 = param_3[1];
  uVar10 = param_3[4] >> 0xf;
  uVar2 = param_3[2];
  if (uVar10 != 0xffff) {
    uVar10 = uVar10 + 1;
  }
  uVar11 = param_3[5] >> 0xf;
  if (uVar11 != 0xffff) {
    uVar11 = uVar11 + 1;
  }
  uVar12 = param_3[6] >> 0xf;
  if (uVar12 != 0xffff) {
    uVar12 = uVar12 + 1;
  }
  uVar3 = *(unsigned int *)(param_1 + 0xa4);
  piVar9 = (int *)(param_1 + 0xa0);
  uVar5 = *param_3 >> 0xf & 0xfffe;
  iVar6 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0xa4) != (*(unsigned int *)(param_1 + 0xa8) & 0x3fffffff)) {
    iVar6 = *(int *)(param_1 + 0xa4);
    iVar8 = *piVar9;
    *(int *)(param_1 + 0xa4) = iVar6 + 1;
    piVar17 = (int *)(iVar6 * 0x10 + iVar8);
    fn_8308B898(param_1 + 0xac,iVar8,uVar3,uVar5,uVar10 & 0xffff | 1,piVar17 + 2,(int)piVar17 + 10
                 );
    fn_8308B898(param_1 + 0xb8,iVar8,uVar3,uVar1 >> 0xf & 0xfffe,uVar11 & 0xffff | 1,piVar17,
                  piVar17 + 1);
    fn_8308B898(param_1 + 0xc4,iVar8,uVar3,uVar2 >> 0xf & 0xfffe,uVar12 & 0xffff | 1,
                  (int)piVar17 + 2,(int)piVar17 + 6);
    fn_8308A2F8(param_1,iVar8,uVar3,piVar17);
    piVar17[3] = (int)param_2;
    *param_2 = uVar3;
    iVar6 = *(int *)(param_1 + 0xa4);
    piVar7 = (int *)fn_82CE5410();
    puVar4 = (unsigned int *)*piVar7;
    *piVar7 = ((iVar6 >> 5) * 4 + 0x9fU & 0xffffff80) + (int)puVar4;
    fn_8308AAA8(param_1,iVar6,uVar5,piVar17,uVar3 & 0xffff,puVar4);
    iVar6 = *(int *)(param_1 + 0xa4);
    piVar9 = (int *)*piVar9;
    puVar15 = puVar4;
    do {
      if (puVar4 + (iVar6 >> 5) + 1 <= puVar15) {
        piVar9 = (int *)fn_82CE5410();
        *piVar9 = (int)puVar4;
        return;
      }
      uVar16 = (unsigned __int64)*puVar15;
      piVar7 = piVar9;
      while (uVar16 != 0) {
        if ((uVar16 & 0xff) == 0) {
          piVar7 = piVar7 + 0x20;
          uVar16 = uVar16 >> 8;
        }
        else {
          if (((uVar16 & 1) != 0) &&
             (((piVar17[1] - *piVar7 | piVar7[1] - *piVar17) & 0x80008000U) == 0)) {
            uVar1 = piVar7[3];
            if ((uVar1 & 1) == 0) {
              iVar8 = fn_82CE5410();
              if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),param_4,8);
              }
              puVar13 = (unsigned __int64 *)(param_4[1] * 8 + *param_4);
              if (puVar13 != (unsigned __int64 *)0x0) {
                *puVar13 = CONCAT44(param_2,uVar1);
              }
              param_4[1] = param_4[1] + 1;
            }
            else {
              iVar14 = (uVar1 & 0xfffffffe) + *(int *)(param_1 + 0xd8);
              iVar8 = fn_82CE5410();
              if (*(unsigned int *)(iVar14 + 8) == (*(unsigned int *)(iVar14 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),(int *)(iVar14 + 4),2);
              }
              *(short *)(*(int *)(iVar14 + 8) * 2 + *(int *)(iVar14 + 4)) = (short)uVar3;
              *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
            }
          }
          piVar7 = piVar7 + 4;
          uVar16 = uVar16 >> 1;
        }
      }
      puVar15 = puVar15 + 1;
      piVar9 = piVar9 + 0x80;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),piVar9,0x10);
}

