extern unsigned int *auStack_30;
extern int fn_82AAC8C0();


void fn_82AAD208(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int auStack_30;
  
  puVar1 = (unsigned int *)*param_4;
  uVar2 = fn_82AAC8C0(((param_1 & 0xffffffff) >> 0x14 & 0x700 | param_1 & 0x1800) >> 8,
                        param_1 & 0x7ff,param_3,&auStack_30);
  *puVar1 = 0x47;
  puVar3 = puVar1 + 1;
  if ((param_1 & 0xf0000) == 0xf0000) {
    *puVar3 = (auStack_30 & 0x3f) << 0x10 | uVar2 & 0xffff;
  }
  else {
    *puVar3 = (auStack_30 & 0x3f) << 0x10 | 0x400000 | uVar2 & 0xffff;
    puVar3 = puVar1 + 2;
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
    *puVar3 = uVar2;
  }
  puVar3[1] = param_2 & 0xffff | 0x40000;
  *param_4 = puVar3 + 2;
  return;
}

