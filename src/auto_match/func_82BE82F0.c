extern unsigned int *auStack_50;
extern int fn_82BE5240();
extern int fn_82BE5B38();
extern int fn_82BE6638();
extern int fn_82BE7908();
extern int fn_82BE79F0();
extern int fn_82BE7A68();
extern int fn_82BE7AE0();
extern int fn_82BEE7D0();
extern int fn_82BF2BE0();
extern unsigned int iStack_60;
extern unsigned int lbl_83175240;
extern unsigned int lbl_83175244;


unsigned __int64 fn_82BE82F0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iStack_60;
  int aiStack_5c [3];
  unsigned char auStack_50 [80];
  
  uVar4 = fn_82BE5B38(*(unsigned int *)(param_1 + 0x80));
  uVar5 = fn_82BE7908(uVar4,&iStack_60);
  if ((int)uVar5 != 0) {
    if (iStack_60 == 0) {
      fn_82BE6638(*(unsigned int *)(param_1 + 0x80),2);
      *(unsigned int *)(param_1 + 0x80) = 0;
      uVar4 = 0x321;
    }
    else {
      uVar5 = fn_82BE79F0(*(unsigned int *)(param_1 + 0x80));
      aiStack_5c[0] = iStack_60;
      fn_82BEE7D0(2,aiStack_5c,auStack_50,0x10);
      uVar3 = lbl_83175244;
      uVar2 = lbl_83175240;
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x80) + 0x14);
      uVar4 = fn_82BE7A68(uVar4);
      iVar6 = fn_82BF2BE0(param_1 + 0xa0,uVar4,iStack_60,uVar5,uVar3,uVar2,
                              (uVar1 & 0xf000) == 0x1000);
      if (iVar6 != 0) {
        *(unsigned int *)(param_1 + 0x9c) = 1;
        return 0;
      }
      fn_82BE7AE0(param_1);
      uVar4 = 800;
    }
    uVar5 = fn_82BE5240(param_1,uVar4,0xffffffff82196582);
  }
  return uVar5;
}

