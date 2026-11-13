typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_8218EE24;
extern unsigned int lbl_8218EFB4;


unsigned short fn_8255C068(int *param_1)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  bool bVar3;
  short *psVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  
  puVar2 = (unsigned int *)*param_1;
  if (puVar2 != (unsigned int *)0x0) {
    uVar6 = *puVar2;
    uVar5 = 0;
    piVar7 = (int *)(-(unsigned int)(uVar6 != 0) & (unsigned int)(puVar2 + 2));
    if (uVar6 != 0) {
      do {
        if (*(short *)(piVar7 + 1) == 0x2a) {
          bVar1 = *(unsigned char *)(piVar7 + 4);
          if ((piVar7[3] == 0) || ((unsigned int)bVar1 + (-(unsigned int)(bVar1 == 0) - (bVar1 - 1)) != 0))
          goto code_r0x8255c100;
        }
        uVar5 = uVar5 + 1;
        piVar7 = (int *)(*piVar7 + (int)piVar7);
      } while (uVar5 < uVar6);
    }
  }
  bVar3 = false;
  if (**(char **)(param_1[2] + 0xd48) == '\0') {
    psVar4 = &lbl_8218EFB4;
  }
  else {
    psVar4 = &lbl_8218EE24;
  }
  uVar6 = 0;
  do {
    if ((-(unsigned int)(**(char **)(param_1[2] + 0xd48) != '\0') & 0xfffffff6) + 0x10 <= uVar6) {
code_r0x8255c14c:
      puVar2 = (unsigned int *)param_1[1];
      if ((puVar2 != (unsigned int *)0x0) && (bVar3)) {
        uVar6 = *puVar2;
        uVar5 = 0;
        piVar7 = (int *)(-(unsigned int)(uVar6 != 0) & (unsigned int)(puVar2 + 2));
        if (uVar6 != 0) {
          do {
            if (*(short *)(piVar7 + 1) == 0x2a) {
              bVar1 = *(unsigned char *)(piVar7 + 4);
              if ((piVar7[3] == 0) || ((unsigned int)bVar1 + (-(unsigned int)(bVar1 == 0) - (bVar1 - 1)) != 0)) {
code_r0x8255c100:
                return *(unsigned short *)((int)piVar7 + 6);
              }
            }
            uVar5 = uVar5 + 1;
            piVar7 = (int *)(*piVar7 + (int)piVar7);
          } while (uVar5 < uVar6);
        }
      }
      return 0;
    }
    if (*psVar4 == 0x2a) {
      bVar3 = true;
      goto code_r0x8255c14c;
    }
    uVar6 = uVar6 + 1;
    psVar4 = psVar4 + 1;
  } while( true );
}

