extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_827D8830();
extern int fn_827D8910();
extern int fn_827DCA38();
extern int fn_827DCBF8();
extern int fn_827DE048();
extern int fn_827E81A8();
extern int fn_82811438();
extern int fn_82F6D6A0();
extern unsigned int lbl_83156AA0;


unsigned int *
fn_827E3DE0(double param_1, double param_2, double param_3, unsigned int *param_4, unsigned char param_5, unsigned char param_6, unsigned int param_7, unsigned int param_8, unsigned int in_stack_00000054, unsigned char in_stack_0000005f)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int *puStack00000014;


  unsigned char auStack_80 [16];
  unsigned char auStack_70 [32];
  
  puStack00000014 = param_4;
  uVar1 = fn_827DE048(auStack_70);
  fn_827D8910(param_4 + 1,uVar1);
  param_4[0x13] = (float)param_3;
  param_4[0x12] = param_8;
  param_4[0x14] = (float)param_1;
  param_4[0x15] = (float)param_2;
  *(unsigned char *)(param_4 + 0x17) = param_6;
  param_4[0x11] = param_7;
  puVar6 = param_4 + 0x19;
  param_4[0x16] = in_stack_00000054;
  *(unsigned char *)((int)param_4 + 0x5d) = param_5;
  *(unsigned char *)((int)param_4 + 0x5e) = in_stack_0000005f;
  fn_827D8830(puVar6);
  iVar7 = 0;
  param_4[0x23] = 0;
  lVar2 = -1;
  uVar5 = (unsigned __int64)param_6 << 6;
  if (0x3ffffff < (unsigned __int64)param_6) {
    uVar5 = 0xffffffffffffffff;
  }
  if ((uVar5 & 0xffffffff) < 0xfffffffc) {
    lVar2 = uVar5 + 4;
  }
  puVar3 = (unsigned int *)fn_827E81A8(lVar2);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = (unsigned int)param_6;
    puVar3 = puVar3 + 1;
    fn_82F6D6A0(puVar3,0x40,(unsigned __int64)param_6,0xffffffff827e82c0,0xffffffff827e82f0);
  }
  *param_4 = puVar3;
  if (*(char *)((int)param_4 + 0x5e) == '\0') {
    param_4[0x18] = 0;
  }
  else {
    fn_82811438(auStack_70,auStack_80,0x10);
    uVar4 = (**(int (***)())(*(int *)lbl_83156AA0 + 0xc))
                      (lbl_83156AA0,
                       (__int64)(int)(unsigned int)*(unsigned char *)((int)param_4 + 0x5e) *
                       (__int64)(int)param_4[0x11],auStack_70);
    param_4[0x18] = uVar4;
  }
  fn_827DCA38(puVar6,*(unsigned char *)((int)param_4 + 0x5e));
  if (*(char *)((int)param_4 + 0x5e) != '\0') {
    do {
      fn_827DCBF8(puVar6,auStack_80);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(unsigned int)*(unsigned char *)((int)param_4 + 0x5e));
  }
  return param_4;
}

