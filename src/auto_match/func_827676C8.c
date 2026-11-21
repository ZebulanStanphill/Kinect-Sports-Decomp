#define CONCAT11(a, b) ((unsigned short)(((unsigned __int64)(a) << 8) | (unsigned __int64)(unsigned char)(b)))

/* WARNING: Inlined function: __savegprlr_25 */

void fn_827676C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char bStack_50;
  unsigned char bStack_4f;
  unsigned char bStack_4e;
  unsigned char bStack_4d;
  unsigned char bStack_4c;
  unsigned char bStack_4b;
  unsigned char bStack_4a;
  unsigned char bStack_49;
  unsigned char uStack_48;
  unsigned char uStack_47;
  
  fn_827668B8(param_1,param_2,&bStack_50);
  switch(bStack_50 & 0xf) {
  case 0:
    uVar2 = 0;
    goto LAB_8276771c;
  case 1:
    uVar2 = 0;
    goto LAB_82767740;
  case 2:
    uVar2 = 1;
LAB_8276771c:
    *param_3 = uVar2;
    uVar5 = (unsigned int)(bStack_50 >> 4) | (int)(char)bStack_4f << 4;
LAB_82767734:
    param_3[1] = uVar5;
    return;
  case 3:
    uVar2 = 1;
LAB_82767740:
    *param_3 = uVar2;
    uVar5 = (unsigned int)CONCAT11(bStack_4e,bStack_4f);
LAB_82767754:
    uVar5 = uVar5 << 4 | (unsigned int)(bStack_50 >> 4);
    goto LAB_82767734;
  case 4:
    *param_3 = 2;
    param_3[1] = (int)((int)(char)(bStack_4f << 6) | (unsigned int)(bStack_50 >> 2)) >> 2;
    param_3[2] = (int)(char)bStack_4f >> 2;
    return;
  case 5:
    *param_3 = 2;
    uVar4 = (unsigned int)(bStack_4f >> 6) | (int)(char)bStack_4e << 2;
    uVar5 = (int)(char)(bStack_4f << 2) << 2;
    goto LAB_827677d8;
  case 6:
    *param_3 = 2;
    uVar5 = (int)(char)(bStack_4e << 6) << 2 | (unsigned int)bStack_4f;
    param_3[2] = (unsigned int)(bStack_4e >> 2) | (int)(char)bStack_4d << 6;
    goto LAB_82767754;
  case 7:
    *param_3 = 2;
    uVar4 = (int)CONCAT11(bStack_4c,bStack_4d) << 2 | (unsigned int)(bStack_4e >> 6);
    uVar5 = ((int)(char)(bStack_4e << 2) << 6 | (unsigned int)bStack_4f) << 4;
LAB_827677d8:
    param_3[2] = uVar4;
    uVar5 = uVar5 | bStack_50 >> 4;
    goto LAB_82767734;
  case 8:
    *param_3 = 3;
    param_3[1] = (int)((int)(char)(((__int64)(char)bStack_4f & 0xffffffffU) << 7) |
                      (unsigned int)(bStack_50 >> 1)) >> 3;
    uVar4 = (int)((int)(char)(bStack_4e << 5) | (unsigned int)(bStack_4f >> 3)) >> 3;
    uVar5 = (int)(char)bStack_4e >> 3;
    param_3[2] = (int)(char)(((__int64)(char)bStack_4f & 0xffffffffU) << 2) >> 3;
    goto LAB_82767cb4;
  case 9:
    *param_3 = 3;
    uVar4 = (int)((int)(char)(bStack_4e << 6) | (unsigned int)(bStack_4f >> 2)) >> 1;
    param_3[1] = (int)((int)(char)(bStack_4f << 5) | (unsigned int)(bStack_50 >> 3)) >> 1;
    uVar3 = (int)((int)(char)(bStack_4d << 7) | (unsigned int)(bStack_4e >> 1)) >> 1;
    uVar5 = (int)(char)bStack_4d >> 1;
    break;
  case 10:
    *param_3 = 3;
    uVar1 = (int)(char)(bStack_4f << 3) << 1;
    uVar4 = (int)(char)(bStack_4e << 2) << 1;
    bStack_4f = bStack_4f >> 5;
    uVar3 = (int)(char)(bStack_4d << 1) << 1;
    bStack_4e = bStack_4e >> 6;
    bStack_4d = bStack_4d >> 7;
    uVar5 = (int)(char)bStack_4c << 1;
    goto LAB_8276799c;
  case 0xb:
    *param_3 = 3;
    param_3[1] = (int)(char)(bStack_4f << 1) << 3 | (unsigned int)(bStack_50 >> 4);
    uVar3 = ((int)(char)(bStack_4d << 6) << 2 | (unsigned int)bStack_4e) << 1 | (unsigned int)(bStack_4f >> 7);
    uVar4 = (int)(char)(bStack_4c << 3) << 3 | (unsigned int)(bStack_4d >> 2);
    uVar5 = (unsigned int)(bStack_4c >> 5) | (int)(char)bStack_4b << 3;
    goto LAB_82767cb0;
  case 0xc:
    *param_3 = 3;
    param_3[1] = ((int)(char)(bStack_4e << 7) << 1 | (unsigned int)bStack_4f) << 4 | (unsigned int)(bStack_50 >> 4);
    uVar5 = (unsigned int)(bStack_4b >> 3) | (int)(char)bStack_4a << 5;
    param_3[2] = (int)(char)(bStack_4d << 2) << 5 | (unsigned int)(bStack_4e >> 1);
    param_3[3] = ((int)(char)(bStack_4b << 5) << 3 | (unsigned int)bStack_4c) << 2 | (unsigned int)(bStack_4d >> 6);
    goto LAB_82767cb8;
  case 0xd:
    *param_3 = 3;
    uVar1 = ((int)(char)(bStack_4e << 5) << 3 | (unsigned int)bStack_4f) << 4;
    uVar4 = ((int)(char)(bStack_4c << 6) << 2 | (unsigned int)bStack_4d) << 5;
    bStack_4f = bStack_4e >> 3;
    uVar3 = ((int)(char)(bStack_4a << 7) << 1 | (unsigned int)bStack_4b) << 6;
    bStack_4e = bStack_4c >> 2;
    bStack_4d = bStack_4a >> 1;
    uVar5 = (int)(char)bStack_49 << 7;
LAB_8276799c:
    uVar4 = uVar4 | bStack_4f;
    param_3[1] = uVar1 | bStack_50 >> 4;
    uVar3 = uVar3 | bStack_4e;
    uVar5 = bStack_4d | uVar5;
    break;
  case 0xe:
    *param_3 = 3;
    param_3[1] = ((int)(char)(bStack_4e << 3) << 5 | (unsigned int)bStack_4f) << 4 | (unsigned int)(bStack_50 >> 4);
    uVar4 = ((int)(char)(bStack_4c << 2) << 6 | (unsigned int)bStack_4d) << 3 | (unsigned int)(bStack_4e >> 5);
    uVar3 = ((int)(char)(bStack_4a << 1) << 7 | (unsigned int)bStack_4b) << 2 | (unsigned int)(bStack_4c >> 6);
    uVar5 = (int)CONCAT11(uStack_48,bStack_49) << 1 | (unsigned int)(bStack_4a >> 7);
    break;
  case 0xf:
    *param_3 = 3;
    param_3[1] = ((int)(char)(bStack_4e << 1) << 7 | (unsigned int)bStack_4f) << 4 | (unsigned int)(bStack_50 >> 4);
    uVar3 = ((((int)(char)(bStack_4b << 6) & 0x3fffffU) << 2 | (unsigned int)bStack_4c) << 8 |
            (unsigned int)bStack_4d) << 1 | (unsigned int)(bStack_4e >> 7);
    uVar4 = ((int)(char)(bStack_49 << 3) << 5 | (unsigned int)bStack_4a) << 6 | (unsigned int)(bStack_4b >> 2);
    uVar5 = (int)CONCAT11(uStack_47,uStack_48) << 3 | (unsigned int)(bStack_49 >> 5);
LAB_82767cb0:
    param_3[2] = uVar3;
LAB_82767cb4:
    param_3[3] = uVar4;
    goto LAB_82767cb8;
  default:
    goto __restgprlr_25;
  }
  param_3[2] = uVar4;
  param_3[3] = uVar3;
LAB_82767cb8:
  param_3[4] = uVar5;
__restgprlr_25:
  return;
}
