extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_1a0;
extern int fn_82230300();
extern int fn_825200F0();
extern int fn_82526C70();
extern int fn_82555040();
extern int fn_827D78D0();
extern int fn_82864E90();
extern int fn_82BFF338();
extern unsigned int iStack_1b0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A24;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1ac;


unsigned __int64 fn_82554E20(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 *puVar5;
  __int64 lVar6;
  unsigned int ***apppuStack_1c0 [4];
  int iStack_1b0;
  unsigned int uStack_1ac;
  unsigned __int64 uStack_1a8;
  unsigned int auStack_1a0 [8];
  unsigned char *puStack_180;
  unsigned char auStack_150 [32];
  unsigned char auStack_130 [304];
  
  uVar2 = fn_825200F0(auStack_150);
  fn_827D78D0(apppuStack_1c0,lbl_83265A24,uVar2,0xffffffffffffffff,0);
  if (uStack_1ac < 0x10) {
    apppuStack_1c0[0] = apppuStack_1c0;
  }
  fn_82526C70(auStack_130,0x104,0xffffffff821c4da8,apppuStack_1c0[0]);
  fn_82230300(apppuStack_1c0,1,0);
  if (iStack_1b0 != 0) {
    puVar5 = &uStack_1a8;
    lVar6 = 9;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puStack_180 = auStack_130;
    auStack_1a0[0] = 1;
    piVar3 = (int *)fn_82864E90();
    uVar1 = lbl_8320A898;
    uVar2 = (**(int (***)())(*piVar3 + 0x30))();
    iVar4 = fn_82BFF338(uVar1,uVar2,auStack_1a0,param_1 + 0x18);
    if (-1 < iVar4) {
      uVar2 = fn_82555040(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

