typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_828114A8();
extern int fn_828116B8();
extern int fn_8285A7E8();
extern int fn_8285A818();
extern int fn_8285C968();
extern int fn_8285CBC8();
extern int fn_8285CD58();
extern int fn_8285D840();
extern int fn_8285DF00();
extern int fn_82862C60();
extern int fn_82862D20();
extern int fn_82862E08();
extern int fn_828632A8();
extern int fn_828632B8();
extern unsigned int lbl_8321157C;
extern unsigned int lbl_83211588;
extern unsigned int lbl_83211590;
extern unsigned int lbl_83211594;
extern unsigned int lbl_83211598;
extern unsigned int lbl_832115A5;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


void fn_8285DCF0(int param_1,int param_2,unsigned char *param_3,unsigned char *param_4,
                  unsigned char *param_5)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  char cVar7;
  unsigned char auStack_a0 [2];
  short sStack_9e;
  int *piStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int auStack_90 [2];
  unsigned char auStack_88 [8];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [112];
  
  bVar2 = false;
  piStack_9c = (int *)0x0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x30) + param_1 * 4);
  auStack_90[0] = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  sStack_9e = 0;
  lVar4 = fn_8285A7E8(iVar1,lbl_8321157C);
  uVar5 = fn_8285A818(iVar1,lbl_8321157C);
  fn_8285C968(param_2,iVar1,uVar5,&piStack_9c,auStack_90,&uStack_94,&uStack_98);
  piVar3 = piStack_9c;
  if ((lbl_832115A5 != '\0') && (iVar6 = fn_8285D840(piStack_9c), iVar6 != 0)) {
    if (iVar6 == 2) {
      iVar6 = fn_828632A8();
      if ((iVar6 != 0) && (*piVar3 == -1)) {
        bVar2 = true;
      }
      if (bVar2) {
        fn_828632B8(iVar1,param_3,param_4,param_5);
      }
    }
    else {
      iVar6 = fn_828116B8(lbl_83211598,*(unsigned int *)(iVar1 + 0x3c));
      if (iVar6 == 0) {
        uVar5 = fn_828114A8(lbl_83211598,*(unsigned int *)(iVar1 + 0x3c));
        fn_8285CBC8((double)*(float *)(param_3 + 0x10),uVar5,&sStack_9e);
        if (sStack_9e == 0) {
          return;
        }
        lbl_83211588 = sStack_9e;
        fn_8285CD58(lbl_83211590,0xffffffff832113c0,0xffffffff83211554,0xffffffff8321154c,
                      lbl_83211594);
        fn_82862C60(lbl_83211594,lbl_83211588,lVar4 + 4,lVar4 + 0xc);
      }
      cVar7 = fn_82862D20(param_4,param_5,lVar4 + 4,lVar4 + 0xc,auStack_80,auStack_88,auStack_a0);
      if (cVar7 == '\0') {
        return;
      }
      fn_82862E08(auStack_80,auStack_88,auStack_a0[0],param_3,0xffffffff8321156c,0xffffffff83211554
                   ,auStack_70);
      iVar6 = fn_828632A8();
      if ((iVar6 != 0) && (*piVar3 == -1)) {
        bVar2 = true;
      }
      if (bVar2) {
        fn_828632B8(iVar1,auStack_70,auStack_80,auStack_88);
      }
      param_5 = auStack_88;
      param_4 = auStack_80;
      param_3 = auStack_70;
    }
    fn_8285DF00(piVar3,param_3,param_4,param_5,1);
  }
  return;
}

