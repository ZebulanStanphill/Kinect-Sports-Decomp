extern unsigned int *auStack_30;
extern int fn_82AAC8C0();
extern unsigned int lbl_83160500;
extern unsigned int lbl_83160510;


void fn_82AACF70(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int auStack_30 [12];
  
  puVar8 = (unsigned int *)*param_3;
  uVar1 = (param_1 & 0xffffffff) >> 0x18;
  uVar6 = uVar1 & 0xf;
  uVar3 = 0;
  if ((param_1 & 0x100000) != 0) {
    uVar3 = 0x100;
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    if ((uVar1 & 8) == 0) {
      puVar4 = &lbl_83160500;
    }
    else {
      uVar6 = ~uVar6 + 1;
      puVar4 = &lbl_83160510;
    }
    uVar5 = *(int *)(puVar4 + ((unsigned int)((uVar6 & 0xffffffff) << 2) & 0xc)) << 9;
  }
  uVar2 = fn_82AAC8C0(((param_1 & 0xffffffff) >> 0x14 & 0x700 | param_1 & 0x1800) >> 8,
                        param_1 & 0x7ff,param_2,auStack_30);
  if (((uVar5 | uVar3) == 0) && ((param_1 & 0xf0000) == 0xf0000)) {
    *puVar8 = (auStack_30[0] & 0x3f) << 0x10 | uVar2 & 0xffff;
  }
  else {
    uVar7 = (unsigned int)((param_1 & 0x10000) != 0);
    if ((param_1 & 0x20000) != 0) {
      uVar7 = uVar7 | 4;
    }
    if ((param_1 & 0x40000) != 0) {
      uVar7 = uVar7 | 0x10;
    }
    if ((param_1 & 0x80000) != 0) {
      uVar7 = uVar7 | 0x40;
    }
    *puVar8 = (auStack_30[0] & 0x3f) << 0x10 | 0x400000 | uVar2 & 0xffff;
    puVar8 = puVar8 + 1;
    *puVar8 = uVar7 | uVar5 | uVar3;
  }
  *param_3 = (int)(puVar8 + 1);
  return;
}

