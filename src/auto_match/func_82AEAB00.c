typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACA920();
extern int fn_82AD17B0();
extern int fn_82AD1978();


void fn_82AEAB00(unsigned __int64 param_1,int *param_2,int *param_3,int param_4,int param_5,
                  unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  
  puVar6 = (unsigned int *)0x0;
  for (puVar1 = (unsigned int *)*param_3; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[1]) {
    uVar2 = *puVar1;
    puVar10 = puVar6;
    if (((uVar2 & 0xe000000) == 0) &&
       (((uVar2 >> 0x1e & 1) == 0 || (puVar10 = puVar1, (uVar2 & 0x1ffe000) != 0)))) {
      fn_82AD1978(param_2,puVar1);
      puVar10 = puVar6;
    }
    puVar6 = puVar10;
  }
  if (puVar6 != (unsigned int *)0x0) {
    for (puVar1 = (unsigned int *)*param_2; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[1]) {
      if (((*puVar1 & 0xe000000) != 0) && ((*puVar1 & 8) != 0)) {
        fn_82AD1978(param_2,puVar6);
        break;
      }
    }
  }
  if ((param_6 & 0xffffffff) < 4) {
    if ((param_3[2] & 1U) != 0) {
      param_2[2] = param_2[2] | 1;
    }
    if (param_4 == 0) {
      if (((unsigned int)param_3[2] >> 5 & 1) != 0) {
        param_2[2] = param_2[2] & 0xffffffc1U | 0x22;
        for (puVar1 = (unsigned int *)param_3[1];
            (puVar1 != (unsigned int *)0x0 && ((puVar1[4] == 0 || ((*puVar1 & 0xe000000) == 0))));
            puVar1 = (unsigned int *)puVar1[2]) {
        }
        puVar6 = (unsigned int *)fn_82ACA920(param_1,puVar1,param_2);
        uVar2 = *puVar6;
        uVar7 = 0;
        *puVar6 = uVar2 & 0xf1ffe01f | 0x2001c80;
        uVar9 = (unsigned int)param_3[2] >> 1 & 0xf;
        uVar8 = *puVar1 >> 0xd & 0xf;
        while ((uVar9 != 0 &&
               (uVar7 = uVar8 & ~(uVar8 - 1),
               (0x1fU - LZCOUNT(uVar9 & ~(uVar9 - 1)) & 0xffffffff) != (param_6 & 0xffffffff)))) {
          uVar8 = uVar8 - uVar7;
          uVar9 = uVar9 - (uVar9 & ~(uVar9 - 1));
        }
        *puVar6 = (uVar7 & 0xf) << 0xd | uVar2 & 0xf1fe001f | 0x2001c80;
        fn_82AD1978(puVar1[4]);
        for (puVar1 = (unsigned int *)*param_3; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[1]) {
          if (((*puVar1 & 0x40000000) != 0) || (bVar3 = true, (*puVar1 & 0xe000000) != 0)) {
            bVar3 = false;
          }
          if (bVar3) {
            fn_82AD1978(param_2,puVar1);
          }
        }
        for (puVar1 = (unsigned int *)param_3[1]; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
          if (puVar1[4] != 0) {
            if (((*puVar1 & 0x40000000) != 0) || (bVar3 = true, (*puVar1 & 0xe000000) != 0)) {
              bVar3 = false;
            }
            if (bVar3) {
              fn_82AD1978(puVar1[4],puVar1);
            }
          }
        }
      }
    }
    else {
      uVar4 = fn_82AD17B0(param_1,param_2);
      uVar5 = fn_82AD1978(param_4,uVar4);
      *(unsigned int *)((param_5 + 0xb) * 4 + param_4) = uVar5;
    }
  }
  return;
}

