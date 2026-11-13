extern unsigned int *auStack_190;
extern int fn_82A1E658();
extern int fn_82A2A438();
extern int fn_82A2AAA8();
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68278();
extern int fn_82F682B0();
extern int fn_82F82330();
extern int fn_82F82460();
extern int fn_82F82708();
extern int fn_82F82750();
extern int fn_8306C788();
extern unsigned int iStack_160;
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int iStack_174;
extern unsigned int iStack_178;
extern unsigned int iStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_194;
extern unsigned int uStack_196;
extern unsigned int uStack_198;
extern unsigned int uStack_19a;
extern unsigned int uStack_19e;
extern unsigned int uStack_1a0;


unsigned __int64 fn_82F6B2E8(char *param_1,int *param_2)

{
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 uVar1;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned short uVar6;
  unsigned __int64 uVar7;
  unsigned short uStack_1a0;
  unsigned short uStack_19e;
  unsigned short uStack_19a;
  unsigned short uStack_198;
  unsigned short uStack_196;
  unsigned short uStack_194;
  unsigned char auStack_190 [16];
  unsigned int uStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  
  uVar7 = 0;
  if ((param_1 == (char *)0x0) || (param_2 == (int *)0x0)) {
    puVar3 = (unsigned int *)fn_82F68278();
    *puVar3 = 0;
    puVar3 = (unsigned int *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
    return 0xffffffffffffffff;
  }
  iVar4 = fn_82F82750(param_1,0xffffffff8216838c);
  if (iVar4 != 0) {
LAB_82f6b348:
    puVar3 = (unsigned int *)fn_82F68240();
    *puVar3 = 2;
    puVar3 = (unsigned int *)fn_82F68278();
    *puVar3 = 2;
    return 0xffffffffffffffff;
  }
  if (param_1[1] == ':') {
    if ((*param_1 != '\0') && (param_1[2] == '\0')) goto LAB_82f6b348;
    iVar4 = fn_82F82708();
    iVar4 = iVar4 + -0x60;
  }
  else {
    iVar4 = 0;
  }
  uVar1 = fn_82A2A438(param_1,&uStack_180);
  if ((int)uVar1 == -1) goto LAB_82f6b348;
  if ((iStack_168 == 0) && (iStack_16c == 0)) {
    param_2[8] = 0;
    param_2[9] = 0;
  }
  else {
    iVar5 = fn_8306C788(&iStack_16c,auStack_190);
    if ((iVar5 == 0) || (iVar5 = fn_82A2AAA8(auStack_190,&uStack_1a0), iVar5 == 0))
    goto LAB_82f6b558;
    uVar2 = fn_82F82460(uStack_1a0,uStack_19e,uStack_19a,uStack_198,uStack_196,uStack_194,
                            0xffffffffffffffff);
    *(unsigned __int64 *)(param_2 + 8) = uVar2;
  }
  if ((iStack_170 == 0) && (iStack_174 == 0)) {
    *(unsigned __int64 *)(param_2 + 6) = *(unsigned __int64 *)(param_2 + 8);
  }
  else {
    iVar5 = fn_8306C788(&iStack_174,auStack_190);
    if ((iVar5 == 0) || (iVar5 = fn_82A2AAA8(auStack_190,&uStack_1a0), iVar5 == 0))
    goto LAB_82f6b558;
    uVar2 = fn_82F82460(uStack_1a0,uStack_19e,uStack_19a,uStack_198,uStack_196,uStack_194,
                            0xffffffffffffffff);
    *(unsigned __int64 *)(param_2 + 6) = uVar2;
  }
  if ((iStack_178 == 0) && (iStack_17c == 0)) {
    *(unsigned __int64 *)(param_2 + 10) = *(unsigned __int64 *)(param_2 + 8);
  }
  else {
    iVar5 = fn_8306C788(&iStack_17c,auStack_190);
    if ((iVar5 == 0) || (iVar5 = fn_82A2AAA8(auStack_190,&uStack_1a0), iVar5 == 0)) {
LAB_82f6b558:
      thunk_FUN_82a2b798();
      fn_82F682B0();
      fn_82A1E658(uVar1);
      return 0xffffffffffffffff;
    }
    uVar2 = fn_82F82460(uStack_1a0,uStack_19e,uStack_19a,uStack_198,uStack_196,uStack_194,
                            0xffffffffffffffff);
    *(unsigned __int64 *)(param_2 + 10) = uVar2;
  }
  fn_82A1E658(uVar1);
  uVar6 = fn_82F82330(uStack_180,param_1);
  *(unsigned short *)((int)param_2 + 6) = uVar6;
  *(unsigned short *)(param_2 + 2) = 1;
  param_2[5] = iStack_160;
  if (iStack_164 != 0) {
    uVar7 = 0xffffffffffffffff;
    param_2[5] = 0;
  }
  *(unsigned short *)(param_2 + 1) = 0;
  *(unsigned short *)(param_2 + 3) = 0;
  *param_2 = iVar4 + -1;
  *(unsigned short *)((int)param_2 + 10) = 0;
  param_2[4] = iVar4 + -1;
  return uVar7;
}

