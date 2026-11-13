extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8240D930();
extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_8258DE50();
extern int fn_8258DF98();
extern int fn_8258E3A8();
extern int fn_8265C990();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82A93F08();
extern int memcpy();


unsigned __int64 fn_825F0B68(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  char acStack_80 [4];
  int aiStack_7c [3];
  unsigned char auStack_70 [16];
  
  if (((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) {
    param_4 = param_4 * 4;
    iVar2 = *(int *)(*(int *)(param_1 + 0xb8) + param_4);
    if (iVar2 != 0) {
      fn_82522ED8(iVar2);
      uVar4 = *(unsigned int *)(param_1 + 0xb4);
      uVar3 = fn_8240D930(*(unsigned int *)(*(int *)(param_1 + 0x1c) + param_4));
      uVar3 = fn_82230110(auStack_70,uVar3);
      uVar1 = *(unsigned int *)(param_1 + 0xc0);
      fn_8258E3A8(aiStack_7c,uVar1,uVar3);
      lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_7c[0] + 0x2c) - 1;
      *(int *)(aiStack_7c[0] + 0x2c) = (int)lVar5;
      if (lVar5 == 0) {
        fn_8265C990(*(unsigned int *)(aiStack_7c[0] + 0x28),uVar4);
        *(unsigned int *)(aiStack_7c[0] + 0x28) = 0;
        fn_8258DF98(aiStack_7c,uVar1,aiStack_7c[0]);
      }
      fn_82230300(uVar3,1,0);
    }
    iVar2 = *(int *)(param_4 + *(int *)(param_1 + 0xb0));
    if (iVar2 != 0) {
      fn_8265CA20(iVar2);
      *(unsigned int *)(param_4 + *(int *)(param_1 + 0xb0)) = 0;
    }
    uVar4 = fn_8265C9E0(0x34);
    *(unsigned int *)(param_4 + *(int *)(param_1 + 0xb0)) = uVar4;
    memcpy(*(unsigned int *)(param_4 + *(int *)(param_1 + 0xb0)),param_2,0x34);
    uVar4 = *(unsigned int *)(param_1 + 0xb4);
    acStack_80[0] = '\0';
    uVar3 = fn_8240D930(*(unsigned int *)(*(int *)(param_1 + 0x1c) + param_4));
    uVar3 = fn_82230110(auStack_70,uVar3);
    lVar5 = fn_8258DE50(*(unsigned int *)(param_1 + 0xc0),uVar3,param_3 - 0x34,uVar4,acStack_80)
    ;
    if (lVar5 != 0) {
      if (acStack_80[0] == '\0') {
        memcpy(lVar5,param_2 + 0x34,param_3 - 0x34);
      }
      fn_82A93F08(*(unsigned int *)(param_4 + *(int *)(param_1 + 0xb0)),lVar5,lVar5);
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0x3c);
    }
    fn_8265CA20(*(unsigned int *)(param_4 + *(int *)(param_1 + 0xb0)));
    *(unsigned int *)(param_4 + *(int *)(param_1 + 0xb0)) = 0;
  }
  return 0;
}

