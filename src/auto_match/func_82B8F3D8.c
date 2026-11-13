typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82AD1AC8();
extern int fn_82AD20C0();
extern int fn_82B8F0D0();


void fn_82B8F3D8(int param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  bool bVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  
  iVar1 = (param_2 + 0x17) * 4;
  puVar3 = (unsigned int *)0x0;
  puVar7 = *(unsigned int **)(iVar1 + param_1);
  while( true ) {
    if (puVar7 == param_3) {
      puVar4 = (unsigned int *)fn_82AD1AC8(param_3,param_2);
      puVar7 = param_3;
      if (puVar4 != (unsigned int *)0x0) {
        while( true ) {
          puVar5 = (unsigned int *)*puVar7;
          if (puVar5 == (unsigned int *)0x0) break;
          if (puVar5 != puVar4) {
            uVar6 = *puVar5;
            if (((uVar6 & 0x40000000) != 0) || (bVar2 = true, (uVar6 & 0xe000000) != 0)) {
              bVar2 = false;
            }
            if ((!bVar2) || (bVar2 = true, (uVar6 & 0x1ffe000) == 0)) {
              bVar2 = false;
            }
            if ((bVar2) && ((uVar6 >> 0xd & 0xfff) - 1 == param_2)) {
              fn_82AD20C0(param_3,puVar5,param_4);
            }
          }
          if ((unsigned int *)*puVar7 == puVar5) {
            puVar7 = puVar5 + 1;
          }
        }
      }
      if (puVar3 == (unsigned int *)0x0) {
        if (puVar4 == (unsigned int *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = puVar4[3];
        }
        *(unsigned int *)(iVar1 + param_1) = uVar6;
      }
      else {
        puVar7 = param_3 + 1;
        while( true ) {
          puVar5 = (unsigned int *)*puVar7;
          if (puVar5 == (unsigned int *)0x0) break;
          if ((puVar5[4] != 0) && (puVar5 != puVar3)) {
            uVar6 = *puVar5;
            if (((uVar6 & 0x40000000) != 0) || (bVar2 = true, (uVar6 & 0xe000000) != 0)) {
              bVar2 = false;
            }
            if ((!bVar2) || (bVar2 = true, (uVar6 & 0x1ffe000) == 0)) {
              bVar2 = false;
            }
            if ((bVar2) && ((uVar6 >> 0xd & 0xfff) - 1 == param_2)) {
              fn_82AD20C0(puVar5[4],puVar5,param_4);
            }
          }
          if ((unsigned int *)*puVar7 == puVar5) {
            puVar7 = puVar5 + 2;
          }
        }
        if (puVar4 == (unsigned int *)0x0) {
          fn_82AD20C0(puVar3[4],puVar3,param_4);
        }
        else {
          uVar6 = puVar4[3];
          puVar5 = (unsigned int *)(puVar3[3] + 4);
          for (puVar7 = (unsigned int *)*puVar5; puVar7 != puVar3; puVar7 = (unsigned int *)puVar7[2]) {
            puVar5 = puVar7 + 2;
          }
          *puVar5 = puVar3[2];
          puVar3[2] = *(unsigned int *)(uVar6 + 4);
          *(unsigned int **)(uVar6 + 4) = puVar3;
          puVar3[3] = uVar6;
        }
      }
      if (puVar4 != (unsigned int *)0x0) {
        fn_82AD20C0(param_3,puVar4,param_4);
      }
      fn_82B8F0D0(param_3,param_2);
      return;
    }
    if (puVar7 == (unsigned int *)0x0) break;
    puVar3 = (unsigned int *)fn_82AD1AC8(puVar7,param_2);
    if (puVar3 == (unsigned int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_4,0x12c0);
    }
    puVar7 = (unsigned int *)puVar3[3];
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_4,0x12c0);
}

