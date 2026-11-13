typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827B7AE0();
extern int fn_827B7BF8();
extern int fn_827B7D10();
extern int fn_827B8C60();


unsigned __int64 fn_827B8FC8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  bool bVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  
  uVar1 = *(unsigned int *)(param_1 + 0x38);
  puVar2 = *(unsigned int **)(param_1 + 0x34);
  uVar12 = 0;
  puVar11 = (unsigned int *)(param_1 + 0x30);
  do {
    if (puVar2 == puVar11) break;
    if ((*(unsigned short *)(puVar2 + 8) & 0x8000) == 0) {
      if ((param_2 & 0xffffffff) <= (unsigned __int64)*(unsigned short *)(puVar2 + 9)) goto LAB_827b903c;
      puVar8 = (unsigned int *)fn_827B7D10(param_1,puVar2);
      if (puVar8 != (unsigned int *)0x0) {
        if ((param_2 & 0xffffffff) <= (unsigned __int64)*(unsigned short *)(puVar8[2] + 0x1c)) goto LAB_827b9044;
        break;
      }
    }
    uVar12 = uVar12 + 1;
    puVar2 = (unsigned int *)puVar2[1];
  } while (uVar12 <= uVar1 >> 1);
  puVar8 = *(unsigned int **)(param_1 + 0x34);
  do {
    if (puVar8 == puVar11) {
      return 0;
    }
    if ((*(unsigned short *)(puVar8 + 8) & 0x8000) == 0) {
      iVar3 = puVar8[7];
      uVar9 = 0;
      puVar2 = puVar8;
      if (puVar8 != (unsigned int *)(iVar3 + 8)) {
        do {
          if ((*(unsigned short *)(puVar2 + 8) & 0x8000) != 0) break;
          puVar5 = puVar2;
          puVar6 = puVar2;
          if (puVar2 != puVar8) {
            for (; puVar5 != puVar11; puVar5 = (unsigned int *)*puVar5) {
              if (puVar6 == puVar11) {
                bVar4 = false;
                goto LAB_827b90dc;
              }
              puVar6 = (unsigned int *)puVar6[1];
            }
            bVar4 = true;
LAB_827b90dc:
            if (!bVar4) break;
          }
          if ((param_2 & 0xffffffff) <= (unsigned __int64)*(unsigned short *)(puVar2 + 9)) goto LAB_827b903c;
          uVar9 = *(unsigned short *)(puVar2 + 9) + uVar9;
          if ((((unsigned __int64)*(unsigned short *)(iVar3 + 6) != 0) &&
              (puVar2 == *(unsigned int **)(iVar3 + 0x14))) &&
             (uVar10 = *(unsigned short *)(iVar3 + 6) + uVar9,
             (param_2 & 0xffffffff) <= (uVar10 & 0xffffffff))) {
            *(unsigned short *)(iVar3 + 6) = 0;
            uVar9 = uVar10;
          }
          if ((param_2 & 0xffffffff) <= (uVar9 & 0xffffffff)) {
            fn_827B7BF8(param_1,puVar8,puVar2);
            goto LAB_827b9044;
          }
          puVar2 = (unsigned int *)puVar2[4];
        } while (puVar2 != (unsigned int *)(iVar3 + 8));
      }
    }
    puVar8 = (unsigned int *)puVar8[1];
  } while( true );
LAB_827b903c:
  puVar8 = puVar2;
  fn_827B7AE0(param_1,puVar8);
LAB_827b9044:
  uVar7 = fn_827B8C60(param_1,param_2,param_3,puVar8);
  return uVar7;
}

