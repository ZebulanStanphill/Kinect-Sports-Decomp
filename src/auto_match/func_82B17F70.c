#define true 1
extern int fn_82ABE250();
extern int fn_82B167E0();
extern unsigned int lbl_82005710;


unsigned int * fn_82B17F70(unsigned __int64 param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  double dVar9;
  
  if (((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x680) && ((*(unsigned int *)(param_2 + 8) >> 0x1a & 1) == 0)) {
    uVar1 = **(unsigned int **)(param_2 + 0x2c);
    if (((uVar1 & 0x1f) == 0) &&
       (((uVar1 & 0xe000000) == 0x2000000 &&
        (puVar2 = *(unsigned int **)(param_2 + 0x30), (*puVar2 & 0x1f) == 0)))) {
      uVar3 = (*(unsigned int **)(param_2 + 0x2c))[3];
      uVar7 = 0;
      if ((uVar3 == param_3) ||
         (((((*(unsigned int *)(uVar3 + 8) & 0x3f80) == 0x80 &&
            (*(unsigned int *)(*(int *)(uVar3 + 0x2c) + 0xc) == param_3)) &&
           (iVar4 = *(int *)(*(int *)(uVar3 + 0x30) + 0xc), (*(unsigned int *)(iVar4 + 8) & 0x3f80) == 16000
           )) && ((dVar9 = (double)fn_82B167E0(iVar4,uVar1 >> 5 & 3), dVar9 <= lbl_82005710 &&
                  (uVar7 = (__int64)-dVar9 & 0xffffffff, (double)uVar7 == -dVar9)))))) {
        puVar5 = (unsigned int *)*param_4;
        puVar8 = param_4;
        while( true ) {
          if (puVar5 == (unsigned int *)0x0) {
            *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) | 0x4000000;
            puVar6 = (unsigned int *)fn_82ABE250(param_1,0xc,1);
            *puVar6 = (int)uVar7;
            puVar6[1] = param_2;
            puVar6[2] = *puVar8;
            *puVar8 = (unsigned int)puVar6;
            param_4[1] = param_4[1] + 1;
            if (uVar3 == param_3) {
              param_4[2] = *(unsigned int *)(param_2 + 0x34);
            }
            uVar1 = *(unsigned int *)(puVar2[3] + 8) >> 7 & 0x7f;
            if (uVar1 == 0x7d) {
              param_4[3] = param_4[3] & 0xffffe000 | param_4[3] + 1 & 0x1fff;
              return puVar6;
            }
            if (uVar1 != 0x7c) {
              return puVar6;
            }
            param_4[3] = param_4[3] & 0xfc001fff | (param_4[3] & 0xffffe000) + 0x2000 & 0x3ffe000;
            return puVar6;
          }
          if (uVar7 == *puVar5) break;
          if (*puVar5 < uVar7) {
            puVar8 = puVar5 + 2;
          }
          puVar5 = (unsigned int *)puVar5[2];
        }
      }
    }
  }
  return (unsigned int *)0x0;
}

