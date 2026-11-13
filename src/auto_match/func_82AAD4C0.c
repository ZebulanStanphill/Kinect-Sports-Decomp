extern unsigned int *auStack_40;
extern int fn_82A29A38();
extern int fn_82AAC8C0();
extern unsigned int lbl_83160520;


void fn_82AAD4C0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int auStack_40;
  
  puVar1 = (unsigned int *)*param_5;
  *puVar1 = 0x47;
  uVar2 = fn_82AAC8C0(((param_1 & 0xffffffff) >> 0x14 & 0x700 | param_1 & 0x1800) >> 8,
                        param_1 & 0x7ff,param_4,&auStack_40);
  if (((param_2 & 0xffffffff) >> 0x14 & 0x700) != 0 || (param_2 & 0x1800) != 0) {
    fn_82A29A38();
  }
  if ((param_1 & 0xf0000) == 0xf0000) {
    puVar3 = puVar1 + 2;
    puVar1[1] = (auStack_40 & 0x3f) << 0x10 | uVar2 & 0xffff;
  }
  else {
    puVar1[1] = (auStack_40 & 0x3f) << 0x10 | 0x400000 | uVar2 & 0xffff;
    uVar2 = (unsigned int)((param_1 & 0x10000) != 0);
    if ((param_1 & 0x20000) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((param_1 & 0x40000) != 0) {
      uVar2 = uVar2 | 0x10;
    }
    if ((param_1 & 0x80000) != 0) {
      uVar2 = uVar2 | 0x40;
    }
    puVar1[2] = uVar2;
    puVar3 = puVar1 + 3;
  }
  *puVar3 = (unsigned int)param_2 & 0x7ff | 0x440000;
  puVar3[1] = *(int *)(&lbl_83160520 + (param_3 >> 0x14 & 0xc)) << 0xc |
              *(int *)(&lbl_83160520 + (param_3 >> 0x14 & 3) * 4) << 8 |
              *(int *)(&lbl_83160520 + (param_3 >> 0x12 & 3) * 4) << 4 |
              *(unsigned int *)(&lbl_83160520 + (param_3 >> 0xe & 0xc));
  *param_5 = puVar3 + 2;
  return;
}

