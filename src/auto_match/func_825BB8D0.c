extern unsigned int *auStack_110;
extern unsigned int *auStack_c5;
extern unsigned int *auStack_ce;
extern int fn_82526C70();
extern int fn_82529A38();
extern int fn_82558150();
extern int fn_82587AC0();
extern int fn_82587B68();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_8c;


void fn_825BB8D0(int param_1,unsigned int param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned short auStack_110 [33];
  unsigned char auStack_ce [9];
  unsigned char auStack_c5 [57];
  unsigned int uStack_8c;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_82558150(auStack_110);
    auStack_110[0] = 0xe8;
    puVar2 = (unsigned int *)fn_82587B68(0x11);
    fn_82526C70(auStack_ce,0x40,0xffffffff821c4dd0,*puVar2);
    uStack_48 = *(unsigned int *)(param_1 + 0x34);
    uStack_4c = *(unsigned int *)(param_1 + 0x3c);
    uStack_44 = *(unsigned int *)(param_1 + 0x40);
    uStack_40 = *(unsigned int *)(param_1 + 0x44);
    uStack_3c = *(unsigned int *)(param_1 + 0x48);
    uStack_38 = *(unsigned int *)(param_1 + 0x4c);
    uStack_6c = *(unsigned int *)(param_1 + 0x14);
    uStack_68 = *(unsigned int *)(param_1 + 0x18);
    uStack_64 = *(unsigned int *)(param_1 + 0x1c);
    uStack_60 = *(unsigned int *)(param_1 + 0x20);
    uStack_5c = *(unsigned int *)(param_1 + 0x24);
    uStack_58 = *(unsigned int *)(param_1 + 0x28);
    uStack_50 = *(unsigned int *)(param_1 + 0x38);
    uStack_54 = *(unsigned int *)(param_1 + 0x2c);
    uStack_34 = *(unsigned int *)(param_1 + 0x50);
    uStack_30 = *(unsigned int *)(param_1 + 0x54);
    uStack_2c = *(unsigned int *)(param_1 + 0x58);
    uStack_8c = param_2;
    uVar1 = fn_82587AC0(auStack_c5);
    fn_82529A38(uVar1,auStack_110,0);
  }
  return;
}

