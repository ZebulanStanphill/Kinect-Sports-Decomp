extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_822A8928();
extern int fn_822A8D30();
extern int fn_825363B8();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_828647F0();
extern int fn_82864848();
extern int fn_82864898();
extern int iRam83296bc4;
extern int iRam83296bd4;
extern unsigned int lbl_821C3FEC;
extern unsigned int lbl_821C4014;
extern unsigned int *lbl_8327F864;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F874;
extern unsigned int lbl_8327F878;
extern unsigned int lbl_83296BC0;
extern unsigned int lbl_83296BD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82535780(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  unsigned int **ppuVar4;
  unsigned int uVar5;
  unsigned int *puStack_90;
  unsigned int *apuStack_8c [3];
  unsigned char auStack_80 [48];
  unsigned char auStack_50 [80];
  
  (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x3c1,0xffffffff821c3c84);
  fn_82864848(auStack_80);
  iVar2 = fn_822A8928(lbl_8327F878,1,*param_1,auStack_80);
  uVar5 = (unsigned int)param_2;
  if (iVar2 < 0) {
    puVar3 = (unsigned int *)fn_8265C9E0(8);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3[1] = uVar5;
      *puVar3 = &lbl_821C4014;
    }
    puStack_90 = puVar3;
    uVar1 = fn_828647F0(auStack_50,param_2);
    iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
    if (*(char *)(iVar2 + 0x5c) != '\0') goto LAB_82535850;
    ppuVar4 = &puStack_90;
  }
  else {
    puStack_90 = (unsigned int *)0x0;
    if (((lbl_83296BC0 != iRam83296bc4) || (lbl_83296BD0 != iRam83296bd4)) &&
       (iVar2 = fn_825363B8(lbl_8327F864), iVar2 < 0)) {
      (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x3d9,0xffffffff821c3c40);
    }
    iVar2 = (**(int (***)())(*lbl_8327F864 + 0x10))(lbl_8327F864,auStack_80,&puStack_90);
    if (iVar2 < 0) {
      iVar2 = (**(int (***)())(*lbl_8327F864 + 0x14))(lbl_8327F864,&puStack_90);
      if (iVar2 < 0) {
        (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x3ea,0xffffffff821c3cb0);
      }
      puVar3 = (unsigned int *)fn_8265C9E0(8);
      if (puVar3 == (unsigned int *)0x0) {
LAB_8253596c:
        puVar3 = (unsigned int *)0x0;
      }
      else {
        puVar3[1] = uVar5;
        *puVar3 = &lbl_821C4014;
      }
    }
    else {
      puVar3 = (unsigned int *)fn_8265C9E0(0xc);
      if (puVar3 == (unsigned int *)0x0) goto LAB_8253596c;
      puVar3[1] = uVar5;
      *puVar3 = &lbl_821C3FEC;
      puVar3[2] = puStack_90;
    }
    apuStack_8c[0] = puVar3;
    uVar1 = fn_828647F0(auStack_50,param_2);
    iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
    if (*(char *)(iVar2 + 0x5c) != '\0') goto LAB_82535850;
    ppuVar4 = apuStack_8c;
  }
  fn_82536690(iVar2 + 0x24,ppuVar4);
LAB_82535850:
  fn_82864898(auStack_50);
  fn_82864898(auStack_80);
  return puVar3;
}

