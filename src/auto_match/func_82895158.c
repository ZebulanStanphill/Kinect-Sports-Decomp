extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82230360();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_8265CA20();
extern int fn_8288BC38();
extern int fn_8288DF40();
extern int fn_8288E380();
extern int fn_828939C0();
extern int fn_8289F350();
extern int fn_828A12E8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828B5608();
extern unsigned int lbl_82023898;
extern unsigned int lbl_82023C3C;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned int * fn_82895158(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned short uVar5;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned char auStack_80 [8];
  unsigned int auStack_78 [2];
  unsigned char auStack_70 [8];
  unsigned char auStack_68 [8];
  unsigned int auStack_60 [4];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &lbl_82023898;
  param_1[4] = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x50);
  fn_828B5608(param_1 + 5);
  param_1[8] = &lbl_82023C3C;
  fn_828B5608(param_1 + 10);
  auStack_78[0] = 0;
  param_1[0xc] = 2;
  param_1[8] = &lbl_82023C3C;
  fn_8288E380(param_1 + 0xf,0,auStack_78,auStack_80);
  param_1[0x13] = 0;
  iVar3 = fn_828A12E8(param_1[4]);
  *(int *)(iVar3 + 0x8c) = *(int *)(iVar3 + 0x8c) + 1;
  uVar1 = *(unsigned int *)(param_2 + 0xc);
  fn_828B5580(auStack_68,param_2 + 4);
  fn_828B5580(auStack_70,param_2 + 4);
  uVar5 = fn_828B55F8(auStack_70);
  fn_828939C0(param_1,uVar5,auStack_68,uVar1);
  fn_828B55B0(auStack_70);
  fn_828B55B0(auStack_68);
  *(unsigned char *)((int)param_1 + 0x5d) = 1;
  *(unsigned char *)((int)param_1 + 0x5e) = 1;
  fn_8288BC38(param_1,*(unsigned int *)(param_2 + 0x10));
  uStack_4c = 0xf;
  uStack_50 = 0;
  auStack_60[0] = auStack_60[0] & 0xffffff;
  fn_82230360(auStack_60,0xffffffff820238e8,0x17);
  uVar2 = fn_823AA970(*(unsigned int *)(param_1[0xd] + 0x38));
  iVar3 = fn_8289F350(param_1[4],uVar2);
  if (iVar3 != 0) {
    uVar2 = fn_8240D928();
    puVar4 = (unsigned int *)fn_8288DF40(auStack_78,param_1 + 0xf,uVar2);
    *(unsigned int *)*puVar4 = 1 << (puVar4[1] & 0x3f) | *(unsigned int *)*puVar4;
  }
  if (0xf < uStack_4c) {
    fn_8265CA20(auStack_60[0]);
  }
  return param_1;
}

