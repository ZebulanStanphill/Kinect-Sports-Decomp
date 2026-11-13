extern unsigned int *auStack_40;
extern int fn_82E50D88();
extern int fn_82E50FA0();
extern int fn_82E64450();
extern int fn_82E644B8();


unsigned __int64 fn_82E64E30(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_40;
  
  uVar4 = 0;
  fn_82E50D88(param_1 + 0xc);
  if (param_3 == (unsigned int *)0x0) {
LAB_82e64e60:
    uVar4 = 0xffffffff80070057;
  }
  else {
    if (*(int *)(param_1 + 0xb8) == -1) {
      uVar4 = 0xffffffff80004005;
      goto LAB_82e64f08;
    }
    lVar1 = fn_82E644B8(param_1 + 0x4c,*(int *)(param_1 + 0xb8),&auStack_40);
    uVar2 = -(unsigned int)(lVar1 != 0) & auStack_40;
    if (uVar2 != 0) {
      if ((unsigned __int64)*(unsigned int *)(uVar2 + 0x6c) <= (param_2 & 0xffffffff)) goto LAB_82e64e60;
      lVar1 = fn_82E64450(uVar2 + 4,param_2,&auStack_40);
      puVar3 = (unsigned int *)(-(unsigned int)(lVar1 != 0) & auStack_40);
      if (puVar3 != (unsigned int *)0x0) {
        *param_3 = *puVar3;
        param_3[1] = puVar3[1];
        param_3[2] = puVar3[2];
        param_3[3] = puVar3[3];
        param_3[4] = puVar3[4];
        goto LAB_82e64f08;
      }
    }
    uVar4 = 0xffffffff80004003;
  }
LAB_82e64f08:
  fn_82E50FA0(param_1 + 0xc);
  return uVar4;
}

