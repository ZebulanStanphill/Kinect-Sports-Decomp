typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_831BC768;

/* WARNING: Inlined function: __savegprlr_26 */
/* WARNING: Inlined function: __savefpr_28 */
/* WARNING: Inlined function: __restfpr_28 */

char fn_830163C0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  char cVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  uVar8 = 0x3ff0000000000000;
  uVar7 = 0;
  bVar1 = false;
  if ((param_4 & 1) != 0) {
    uVar3 = fn_82FA5060(lbl_831BC768,0x1c);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_8302A8C8(uVar7,uVar8,uVar3,0xffffffff8302a640);
    }
    param_1[2] = iVar4;
    if (iVar4 != 0) {
      iVar4 = fn_8302A490();
      bVar1 = false;
      if (iVar4 == 1) goto LAB_83016460;
    }
    bVar1 = true;
  }
LAB_83016460:
  if ((!bVar1) && ((param_4 & 2) != 0)) {
    uVar3 = fn_82FA5060(lbl_831BC768,0x1c);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_8302A8C8(uVar7,uVar8,uVar3,0xffffffff8302a670);
    }
    param_1[3] = iVar4;
    if (iVar4 != 0) {
      iVar4 = fn_8302A490();
      bVar1 = false;
      if (iVar4 == 1) goto LAB_830164d0;
    }
    bVar1 = true;
  }
LAB_830164d0:
  if ((!bVar1) && ((param_4 & 4) != 0)) {
    uVar3 = fn_82FA5060(lbl_831BC768,0x1c);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_8302A8C8(uVar7,uVar8,uVar3,0xffffffff8302a978);
    }
    param_1[4] = iVar4;
    if (iVar4 != 0) {
      iVar4 = fn_8302A490();
      bVar1 = false;
      if (iVar4 == 1) goto LAB_83016540;
    }
    bVar1 = true;
  }
LAB_83016540:
  uVar3 = fn_82FA5060(lbl_831BC768,0x1c);
  uVar5 = 0x4058133340000000;
  uVar6 = 0xc058133340000000;
  if ((uVar3 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_8302A8C8(0xc058133340000000,0x4058133340000000,uVar3,0xffffffff8302a6b8);
  }
  *param_1 = iVar4;
  if ((bVar1) || (iVar4 == 0)) {
LAB_830165ac:
    bVar1 = true;
  }
  else {
    iVar4 = fn_8302A490();
    bVar1 = false;
    if (iVar4 != 1) goto LAB_830165ac;
  }
  uVar3 = fn_82FA5060(lbl_831BC768,0x1c);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_8302A8C8(uVar8,0x4024000000000000,uVar3,0xffffffff8302a6f8);
  }
  param_1[1] = iVar4;
  if ((bVar1) || (iVar4 == 0)) {
LAB_83016614:
    bVar1 = true;
  }
  else {
    iVar4 = fn_8302A490();
    bVar1 = false;
    if (iVar4 != 1) goto LAB_83016614;
  }
  uVar3 = fn_82FA5060(lbl_831BC768,0x1c);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_8302A8C8(uVar7,0x406fe00000000000,uVar3,0xffffffff8302a728);
  }
  param_1[5] = iVar4;
  if ((bVar1) || (iVar4 == 0)) {
LAB_8301667c:
    bVar1 = true;
  }
  else {
    iVar4 = fn_8302A490();
    bVar1 = false;
    if (iVar4 != 1) goto LAB_8301667c;
  }
  uVar3 = fn_82FA5060(lbl_831BC768,0x1c);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_8302A8C8(uVar6,uVar5,uVar3,0xffffffff8302a7c8);
  }
  param_1[6] = iVar4;
  if ((!bVar1) && (iVar4 != 0)) {
    iVar4 = fn_8302A490();
    cVar2 = '\0';
    if (iVar4 == 1) goto __restgprlr_26;
  }
  cVar2 = '\x01';
__restgprlr_26:
  return cVar2 + '\x01';
}
