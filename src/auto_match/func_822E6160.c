#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_822E7DC8();
extern int fn_822E8BC8();
extern int fn_8265C9E0();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_831D154C;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_822E6160(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int auStack_78 [2];
  unsigned char auStack_70 [4];
  int iStack_6c;
  unsigned char auStack_68 [4];
  int iStack_64;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1bc) + 0x174);
    uStack_7c = uVar1;
    puVar4 = (unsigned int *)fn_8265C9E0(0x24);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4[1] = 1;
      puVar4[2] = 1;
      *puVar4 = &lbl_821AD588;
      if (puVar4 + 3 != (unsigned int *)0x0) {
        uStack_80 = CONCAT22(4,(((unsigned __int64)(uStack_80) >> 16) & 0xFFFF));
        fn_822E8BC8((double)lbl_831D154C,puVar4 + 3,uVar1,param_1,&uStack_80);
      }
    }
    iVar2 = *(int *)(param_1 + 0x1d0);
    *(unsigned int **)(param_1 + 0x1d0) = puVar4;
    *(unsigned int **)(param_1 + 0x1cc) = puVar4 + 3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    auStack_78[0] = 1;
    uStack_80 = 3;
    puVar4 = (unsigned int *)
             fn_822E7DC8(auStack_70,&uStack_7c,param_1,auStack_78,&uStack_80,
                               0xffffffff831d1554);
    uVar1 = puVar4[1];
    uVar3 = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1d8);
    *(unsigned int *)(param_1 + 0x1d8) = uVar1;
    *(unsigned int *)(param_1 + 0x1d4) = uVar3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_6c != 0) {
      fn_822315A0();
    }
    auStack_78[0] = 0xb;
    uStack_80 = 9;
    puVar4 = (unsigned int *)
             fn_822E7DC8(auStack_68,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1558);
    uVar1 = *puVar4;
    *puVar4 = 0;
    uVar3 = puVar4[1];
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1e0);
    *(unsigned int *)(param_1 + 0x1e0) = uVar3;
    *(unsigned int *)(param_1 + 0x1dc) = uVar1;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_64 != 0) {
      fn_822315A0();
    }
    auStack_78[0] = 10;
    uStack_80 = 8;
    puVar4 = (unsigned int *)
             fn_822E7DC8(auStack_60,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1558);
    uVar1 = puVar4[1];
    uVar3 = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1e8);
    *(unsigned int *)(param_1 + 0x1e8) = uVar1;
    *(unsigned int *)(param_1 + 0x1e4) = uVar3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_5c != 0) {
      fn_822315A0();
    }
    uStack_80 = 0xf;
    auStack_78[0] = 0x11;
    puVar4 = (unsigned int *)
             fn_822E7DC8(auStack_58,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1560);
    uVar1 = *puVar4;
    *puVar4 = 0;
    uVar3 = puVar4[1];
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1f0);
    *(unsigned int *)(param_1 + 0x1f0) = uVar3;
    *(unsigned int *)(param_1 + 0x1ec) = uVar1;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_54 != 0) {
      fn_822315A0();
    }
    uStack_80 = 0xe;
    auStack_78[0] = 0x10;
    puVar4 = (unsigned int *)
             fn_822E7DC8(auStack_50,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1560);
    uVar1 = *puVar4;
    uVar3 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1f8);
    *(unsigned int *)(param_1 + 0x1f8) = uVar3;
    *(unsigned int *)(param_1 + 500) = uVar1;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_4c != 0) {
      fn_822315A0();
    }
    uStack_80 = 0x11;
    auStack_78[0] = 0x13;
    puVar4 = (unsigned int *)
             fn_822E7DC8(auStack_48,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1564);
    uVar1 = *puVar4;
    *puVar4 = 0;
    uVar3 = puVar4[1];
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x200);
    *(unsigned int *)(param_1 + 0x200) = uVar3;
    *(unsigned int *)(param_1 + 0x1fc) = uVar1;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
    uStack_80 = 0x10;
    auStack_78[0] = 0x12;
    puVar4 = (unsigned int *)
             fn_822E7DC8(auStack_40,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1564);
    uVar1 = puVar4[1];
    uVar3 = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x208);
    *(unsigned int *)(param_1 + 0x208) = uVar1;
    *(unsigned int *)(param_1 + 0x204) = uVar3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  return;
}

