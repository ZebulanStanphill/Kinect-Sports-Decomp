#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_80 ((*(unsigned __int64*)&uStack_80))
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_826809F0();
extern int fn_827B6F18();
extern int fn_827B8018();
extern unsigned int iStack_70;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_827B8068(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6,int param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_74;
  int iStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  
  fn_827B8018();
  uVar7 = 0x3f;
  if (0x3f < (param_2 & 0xffffffff)) {
    uVar7 = param_2 - 1;
  }
  uVar4 = 0x3f;
  if (0x3f < (param_3 & 0xffffffff)) {
    uVar4 = param_3 - 1;
  }
  uVar3 = 0;
  uVar6 = 0;
  uVar1 = uVar7 & 0xffffffff;
  while (uVar1 != 0) {
    uVar3 = uVar3 + 1;
    uVar7 = (uVar7 & 0xffffffff) >> 1;
    uVar1 = uVar7;
  }
  uVar7 = uVar4 & 0xffffffff;
  while (uVar7 != 0) {
    uVar6 = uVar6 + 1;
    uVar4 = (uVar4 & 0xffffffff) >> 1;
    uVar7 = uVar4;
  }
  if (0x20 < (param_4 & 0xffffffff)) {
    param_4 = 0x20;
  }
  param_1[2] = (unsigned int)param_4;
  param_1[3] = (unsigned int)param_5;
  uVar6 = 1 << (uVar6 & 0x3f);
  param_1[4] = param_6;
  uVar3 = 1 << (uVar3 & 0x3f);
  param_1[1] = uVar6;
  fVar2 = lbl_82002AE0;
  *param_1 = uVar3;
  _uStack_80 = CONCAT44(3,uVar3);
  param_1[5] = (unsigned int)(fVar2 / (float)uVar3);
  param_1[6] = (unsigned int)(fVar2 / (float)uVar6);
  uVar7 = fn_8267BED0(param_1,0x30,&uStack_80);
  if ((uVar7 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_826809F0(uVar7,9,param_7 + 3U & 0xfffffffc,param_8);
  }
  if (param_1[0xae] != 0) {
    fn_8267C498();
  }
  param_1[0xae] = uVar3;
  uStack_6c = (unsigned int)param_8;
  puVar5 = param_1 + 0xae;
  uStack_68 = 0;
  uStack_64 = 0;
  lVar9 = 5;
  uStack_60 = 0;
  puVar8 = &uStack_74;
  do {
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iStack_70 = param_7;
  fn_827B6F18(param_1 + 0x1c4,0,param_4,param_2,param_3,param_5);
  return;
}

