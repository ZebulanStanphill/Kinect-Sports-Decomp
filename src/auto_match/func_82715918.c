extern unsigned int *auStack_80;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826A6A38();
extern int fn_826C8C70();
extern int fn_826DF4E8();
extern int fn_826E7990();
extern int fn_826E8AF0();
extern int fn_826E8E18();
extern int fn_826E92E8();
extern int fn_826E9330();
extern int fn_8278E9B0();
extern int fn_8278EA40();
extern unsigned int lbl_8200DBF8;
extern unsigned int lbl_831E7E64;


unsigned __int64 fn_82715918(int *param_1,int param_2,int param_3)

{
  unsigned char bVar6;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned short uVar5;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned char *puVar7;
  int iVar8;
  unsigned char auStack_80 [128];
  
  bVar6 = fn_826DF4E8(param_2);
  if (bVar6 == 0) {
    uVar1 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x314);
    if (iVar8 == 0) {
      iVar8 = param_2 + 0x28;
    }
    fn_826C8C70(iVar8,0xffffffff8200f6b4);
    *(unsigned char *)(param_1 + 0x12) = 0;
    if ((bVar6 & 8) != 0) {
      *(unsigned char *)(param_1 + 0x12) = 1;
      fn_826C8C70(iVar8,0xffffffff8200f6a8);
    }
    if ((bVar6 & 4) != 0) {
      *(unsigned char *)(param_1 + 0x12) = *(unsigned char *)(param_1 + 0x12) | 2;
      fn_826C8C70(iVar8,0xffffffff8200f6a0);
    }
    if ((bVar6 & 2) != 0) {
      *(unsigned char *)(param_1 + 0x12) = *(unsigned char *)(param_1 + 0x12) | 4;
      fn_826C8C70(iVar8,0xffffffff8200f698);
    }
    if ((bVar6 & 1) != 0) {
      *(unsigned char *)(param_1 + 0x12) = *(unsigned char *)(param_1 + 0x12) | 8;
      fn_826C8C70(iVar8,0xffffffff8200f694);
    }
    fn_826C8C70(iVar8,0xffffffff821cc86c);
    uVar3 = fn_826A6A38(param_2);
    param_1[0xf] = uVar3 & 0xffff;
    uVar5 = fn_826A6A38(param_2);
    *(unsigned short *)(param_1 + 0x10) = uVar5;
    fn_826E8AF0(iVar8,param_1 + 1);
    fn_826C8C70(iVar8,0xffffffff8200f670,uVar3 & 0xffff,*(unsigned short *)(param_1 + 0x10));
    fn_826C8C70(iVar8,0xffffffff8200f664);
    fn_826E9330(iVar8,param_1 + 1);
    if (param_3 == 0x22) {
      fn_826E8E18(iVar8,param_1 + 7);
      fn_826C8C70(iVar8,0xffffffff8200f658);
      fn_826E92E8(iVar8,param_1 + 7);
    }
    if ((bVar6 & 0x10) != 0) {
      fn_826C8C70(iVar8,0xffffffff8200f648);
      uVar2 = fn_8278EA40(iVar8,auStack_80,4);
      if (uVar2 != 0) {
        if (*param_1 == 0) {
          puVar4 = (unsigned int *)fn_8267B890(lbl_831E7E64,0x1c,0);
          if (puVar4 == (unsigned int *)0x0) {
            puVar4 = (unsigned int *)0x0;
          }
          else {
            puVar4[1] = 1;
            *(unsigned char *)(puVar4 + 2) = 0;
            *(unsigned char *)((int)puVar4 + 9) = 0;
            *(unsigned char *)(puVar4 + 3) = 0x40;
            *(unsigned char *)((int)puVar4 + 0xd) = 0x40;
            *puVar4 = &lbl_8200DBF8;
            *(unsigned char *)((int)puVar4 + 0xb) = 0x80;
            *(unsigned char *)((int)puVar4 + 10) = 0x10;
            *(unsigned char *)((int)puVar4 + 0xe) = 0x10;
            *(unsigned char *)((int)puVar4 + 0xf) = 0xff;
            *(unsigned short *)(puVar4 + 4) = 0x1c2;
            *(unsigned short *)((int)puVar4 + 0x12) = 0x50;
            *(unsigned short *)(puVar4 + 5) = 0x39;
            *(unsigned short *)((int)puVar4 + 0x16) = 0x39;
            puVar4[6] = 0;
          }
          if (*param_1 != 0) {
            fn_8267C498();
          }
          *param_1 = (int)puVar4;
        }
        if ((uVar2 & 0xffffffff) != 0) {
          puVar7 = auStack_80;
          do {
            fn_8278E9B0(*param_1,puVar7);
            uVar2 = uVar2 - 1;
            puVar7 = puVar7 + 0xc;
          } while (uVar2 != 0);
        }
      }
    }
    if ((bVar6 & 0x20) == 0) {
      param_1[0x11] = 0;
    }
    else {
      *(unsigned char *)(iVar8 + 0x15) = 0;
      if (*(int *)(iVar8 + 0x30) - *(int *)(iVar8 + 0x2c) < 1) {
        fn_826E7990(iVar8);
      }
      bVar6 = *(unsigned char *)(*(int *)(iVar8 + 0x3c) + *(int *)(iVar8 + 0x2c));
      uVar3 = (unsigned int)bVar6;
      *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + 1;
      if ((bVar6 == 0) || (0xe < bVar6)) {
        uVar3 = 1;
      }
      param_1[0x11] = uVar3;
      fn_826C8C70(iVar8,0xffffffff8200f634);
    }
    uVar1 = 1;
  }
  return uVar1;
}

