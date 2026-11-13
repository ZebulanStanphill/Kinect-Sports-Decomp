extern unsigned int *auStack_130;
extern unsigned int *auStack_13c;
extern int fn_82AA66A8();
extern int fn_82AE6CC0();
extern int fn_82AE6D50();
extern int fn_82F6DCE0();
extern unsigned int uStack_140;


void fn_82AE6E80(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char *puVar4;
  unsigned char uVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_140;
  unsigned int auStack_13c [3];
  unsigned char auStack_130 [304];
  
  fn_82AE6D50(param_1,param_2,auStack_13c,&uStack_140);
  puVar1 = (unsigned int *)((int)param_2 * 0x28 + *(int *)(param_1 + 0xc));
  uVar5 = 0x3f;
  uVar2 = puVar1[1] >> 4 & 7;
  if (uVar2 == 0) {
    uVar5 = 0x62;
  }
  else if (uVar2 == 1) {
    uVar5 = 0x69;
  }
  else if (uVar2 < 3) {
    uVar5 = 99;
  }
  else if (uVar2 == 3) {
    uVar5 = 0x73;
  }
  iVar3 = fn_82AE6CC0(param_1,param_2);
  uVar6 = (unsigned __int64)auStack_13c[0];
  if (iVar3 == 0) {
    fn_82F6DCE0(auStack_130,0x100,0xffffffff820d31c8,uVar5,
                      ((unsigned __int64)(*puVar1 >> 0x14) & 0x1ff) - uVar6);
    puVar4 = auStack_130;
  }
  else {
    puVar4 = *(unsigned char **)(iVar3 + 0x18);
  }
  if (uVar6 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdeb,puVar4,uVar5,0,uVar5,(uStack_140 - uVar6) + -1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x119d,puVar4);
}

