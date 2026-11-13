#define true 1


void fn_828246F8(int param_1,int *param_2,int *param_3)

{
  unsigned int in_r11;
  int iVar1;
  
  do {
    if (0x30 < in_r11) {
      if (((in_r11 != 0x40) && (in_r11 != 0x84)) && (in_r11 != 0x100)) {
        return;
      }
code_r0x82824718:
      iVar1 = param_2[4];
code_r0x8282471c:
      *param_3 = iVar1;
      return;
    }
    if (in_r11 == 0x30) {
code_r0x8282472c:
      iVar1 = param_2[7];
      goto code_r0x8282471c;
    }
    if ((in_r11 == 2) || (in_r11 == 4)) goto code_r0x82824718;
    if (in_r11 != 8) {
      if (in_r11 != 0x10) {
        return;
      }
      goto code_r0x8282472c;
    }
    param_2 = (int *)(**(int **)(param_1 + 0x388) + *param_2 * 0x20);
    in_r11 = param_2[2];
  } while( true );
}

