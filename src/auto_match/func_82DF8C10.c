typedef unsigned char bool;

/* WARNING: Inlined function: __savegprlr_26 */

void fn_82DF8C10(int *param_1,unsigned char *param_2,unsigned __int64 param_3,char param_4,unsigned int *param_5,
                unsigned char *param_6)

{
  bool bVar1;
  unsigned char uVar2;
  __int64 lVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  
  *param_6 = 0;
  switch(*param_2) {
  case 0:
  case 1:
    *param_5 = 0x10;
    return;
  case 2:
  case 3:
  case 10:
  case 0xb:
    if (param_4 == '\0') {
      uVar2 = param_2[4];
      puVar5 = param_2 + 0x10;
      param_2[4] = param_2[7];
      param_2[7] = uVar2;
      uVar2 = param_2[5];
      param_2[5] = param_2[6];
      param_2[6] = uVar2;
      uVar2 = param_2[8];
      param_2[8] = param_2[0xb];
      param_2[0xb] = uVar2;
      uVar2 = param_2[9];
      param_2[9] = param_2[10];
      param_2[10] = uVar2;
    }
    else {
      puVar5 = param_2 + 0x20;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 0xc:
  case 0xd:
  case 0xe:
    if (param_4 == '\0') {
      puVar5 = param_2 + 0x20;
      fn_82DF89C8(param_2);
    }
    else {
      puVar5 = param_2 + 0x30;
      fn_82DF8968();
    }
    break;
  default:
    goto __restgprlr_26;
  }
  lVar3 = fn_82DF6BF0(*(unsigned int *)((unsigned int)(unsigned char)param_2[1] * 0x50 + *param_1 + 0x16dc));
  *param_5 = (unsigned int)(unsigned char)param_2[3];
  if ((lVar3 - 1U & 0xffffffff) < 9) {
    bVar1 = (int)(lVar3 - 1U) != 0;
    if (lVar3 == 2 && bVar1) {
      fn_82DF8B08(puVar5);
      return;
    }
    if ((lVar3 != 3 || !bVar1) && (lVar3 != 4 || !bVar1)) {
      if (lVar3 == 5 && bVar1) {
        if ((puVar5[0xb] & 0x20) != 0) {
          puVar4 = puVar5 + -1;
          lVar3 = 4;
          do {
            uVar2 = puVar4[1];
            puVar4[1] = puVar4[2];
            puVar4 = puVar4 + 2;
            *puVar4 = uVar2;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
          fn_82DF8BA0(puVar5 + 0xc);
          return;
        }
      }
      else if ((((lVar3 != 6 || !bVar1) && (lVar3 != 7 || !bVar1)) && (lVar3 != 8 || !bVar1)) &&
              (!bVar1)) {
        fn_82DF8A78(puVar5);
        return;
      }
      fn_82DF8E40(param_1,param_3);
      *param_6 = 1;
      return;
    }
    puVar4 = puVar5 + -1;
    lVar3 = 4;
    do {
      uVar2 = puVar4[1];
      puVar4[1] = puVar4[2];
      puVar4 = puVar4 + 2;
      *puVar4 = uVar2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    fn_82DF8BA0(puVar5 + 0xc);
    return;
  }
__restgprlr_26:
  return;
}
