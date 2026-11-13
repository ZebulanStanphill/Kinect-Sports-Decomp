typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_827450A8();
extern unsigned int lbl_82005710;


void fn_827465C0(int param_1)

{
  unsigned char *puVar1;
  bool bVar2;
  char cVar4;
  __int64 lVar3;
  unsigned __int64 *puVar5;
  unsigned char uVar7;
  unsigned char *puVar6;
  __int64 lVar8;
  double dVar9;
  double dVar10;
  unsigned __int64 auStack_70 [1];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [8];
  
  cVar4 = fn_82695468(param_1,0x11);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
    return;
  }
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
    lVar3 = 0;
  }
  puVar5 = auStack_70;
  lVar8 = 4;
  do {
    puVar5 = puVar5 + 2;
    *(unsigned char *)puVar5 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  fn_827450A8(lVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_60);
  auStack_70[0] = fn_826972E0(auStack_40,*(unsigned int *)(param_1 + 0x18));
  if (((auStack_70[0] & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (bVar2 = true, (auStack_70[0] & 0xfffffffffffff) == 0)) {
    bVar2 = false;
  }
  if (!bVar2) {
    auStack_70[0] = fn_826972E0(auStack_30,*(unsigned int *)(param_1 + 0x18));
    if (((auStack_70[0] & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (bVar2 = true, (auStack_70[0] & 0xfffffffffffff) == 0)) {
      bVar2 = false;
    }
    if (!bVar2) {
      fn_826972E0(auStack_60,*(unsigned int *)(param_1 + 0x18));
      fn_826972E0(auStack_50,*(unsigned int *)(param_1 + 0x18));
      dVar9 = (double)fn_826972E0(auStack_30,*(unsigned int *)(param_1 + 0x18));
      dVar10 = (double)fn_826972E0(auStack_40,*(unsigned int *)(param_1 + 0x18));
      if ((dVar10 <= lbl_82005710) || (uVar7 = 0, dVar9 <= lbl_82005710)) {
        uVar7 = 1;
      }
      goto LAB_82746734;
    }
  }
  uVar7 = 1;
LAB_82746734:
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  puVar1[4] = uVar7;
  puVar6 = auStack_20;
  *puVar1 = 2;
  lVar3 = 3;
  do {
    puVar6 = puVar6 + -0x10;
    fn_82696330(puVar6);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

