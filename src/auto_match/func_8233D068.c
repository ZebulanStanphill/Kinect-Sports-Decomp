#define true 1
extern unsigned int lbl_82192F70;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83276540;
extern unsigned int lbl_83276544;


unsigned int fn_8233D068(void)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned char *puVar5;
  unsigned int uVar6;
  
  fVar2 = lbl_821CA460;
  fVar1 = lbl_82192F70;
  uVar3 = lbl_83265A28;
  do {
    lVar4 = 10;
    do {
      uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
      uVar6 = (unsigned int)(((float)(uVar3 & 0x7fffff | 0x3f800000) - fVar2) * fVar1);
      lbl_83265A28 = uVar3;
      if ((&lbl_83276544)[uVar6] == '\0') {
        (&lbl_83276544)[uVar6] = 1;
        if (uVar6 != 0xffffffff) {
          return uVar6;
        }
        break;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    uVar6 = 0;
    do {
      if ((&lbl_83276544)[uVar6] == '\0') {
        (&lbl_83276544)[uVar6] = 1;
        if (uVar6 != 0xffffffff) {
          return uVar6;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    puVar5 = (unsigned char *)((int)&lbl_83276540 + 3);
    lVar4 = 8;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  } while( true );
}

