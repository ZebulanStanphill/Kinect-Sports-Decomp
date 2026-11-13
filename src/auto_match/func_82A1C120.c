extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_ac;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1C424();
extern int fn_82A2B760();
extern int fn_82F63CA0();
extern unsigned int iStack_a4;
extern unsigned int uStack_b0;


unsigned int
fn_82A1C120(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6,int param_7,int param_8)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int uStack_b0;
  unsigned int auStack_ac [2];
  int iStack_a4;
  unsigned char auStack_98 [8];
  unsigned char auStack_90 [8];
  unsigned char auStack_88 [136];
  
  uVar5 = (param_3 & 0x7fffffff) * 2;
  RtlInitAnsiString(auStack_90,param_1);
  puVar2 = (unsigned int *)0x0;
  iStack_a4 = 0;
  uVar1 = NtOpenFile(auStack_ac,0x100001,auStack_88,auStack_98,3,0x4021);
  if ((int)uVar1 < 0) goto LAB_82a1c1b0;
  if (param_2 != 0) {
    lVar6 = uVar5 + 0x18;
LAB_82a1c1e0:
    iStack_a4 = fn_8265C940(lVar6,0x24830000);
    if (iStack_a4 != 0) goto LAB_82a1c210;
    NtClose(auStack_ac[0]);
LAB_82a1c200:
    uVar1 = 0xffffffffc0000017;
LAB_82a1c1b0:
    fn_82A2B760(uVar1);
    return 0;
  }
  if (param_4 != (unsigned int *)0x0) {
    lVar6 = 0x11c;
    goto LAB_82a1c1e0;
  }
  lVar6 = 0;
LAB_82a1c210:
  if (param_7 == 0) {
    if ((param_5 != (unsigned int *)0x0) || (iVar4 = iStack_a4, param_6 != (unsigned int *)0x0)) {
      iVar4 = 0x114;
      goto LAB_82a1c23c;
    }
  }
  else {
    iVar4 = param_8 * 2 + 0x10;
LAB_82a1c23c:
    puVar2 = (unsigned int *)fn_8265C940(iVar4,0x24830000);
    if (puVar2 == (unsigned int *)0x0) {
      NtClose(auStack_ac[0]);
      if (iStack_a4 != 0) {
        fn_8265C990(iStack_a4,0x24830000);
      }
      goto LAB_82a1c200;
    }
  }
  if (((iStack_a4 == 0) ||
      (iVar3 = NtQueryVolumeInformationFile(auStack_ac[0],auStack_98,iStack_a4,lVar6,1), -1 < iVar3)
      ) && ((puVar2 == (unsigned int *)0x0 ||
            (iVar4 = NtQueryVolumeInformationFile(auStack_ac[0],auStack_98,puVar2,iVar4,5),
            -1 < iVar4)))) {
    if (param_2 != 0) {
      if (uVar5 <= *(unsigned int *)(iStack_a4 + 0xc)) {
        thunk_FUN_82a2b748(0x18);
        uStack_b0 = 0;
        goto LAB_82a1c3dc;
      }
      fn_82F63CA0(param_2,iStack_a4 + 0x11);
      *(unsigned char *)(param_2 + *(int *)(iStack_a4 + 0xc)) = 0;
    }
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = *(unsigned int *)(iStack_a4 + 8);
    }
    if (param_7 != 0) {
      if ((unsigned int)(param_8 * 2) <= (unsigned int)puVar2[2]) {
        thunk_FUN_82a2b748(0x18);
        uStack_b0 = 0;
        goto LAB_82a1c3dc;
      }
      fn_82F63CA0(param_7,puVar2 + 3);
      *(unsigned char *)(puVar2[2] + param_7) = 0;
    }
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = puVar2[1];
    }
    if (param_6 != (unsigned int *)0x0) {
      *param_6 = *puVar2;
    }
    uStack_b0 = 1;
  }
  else {
    fn_82A2B760();
    uStack_b0 = 0;
  }
LAB_82a1c3dc:
  fn_82A1C424();
  return uStack_b0;
}

