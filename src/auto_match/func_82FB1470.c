extern unsigned int *auStack_60;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FB09A8();
extern int fn_82FB0E40();
extern int fn_82FB1078();
extern int fn_82FB11B8();
extern int fn_82FF9C88();
extern int fn_83007AE8();
extern unsigned int iStack_3c;
extern unsigned int lbl_831BC768;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_38;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


unsigned __int64
fn_82FB1470(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 *puVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int *puStack0000001c;
  unsigned int uStack00000024;
  unsigned char auStack_60 [4];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int iStack_3c;
  unsigned int uStack_38;
  
  uVar1 = *(unsigned int *)(param_2 + 4);
  puStack0000001c = (unsigned int *)(param_2 + 8);
  uVar8 = 1;
  uVar7 = 0;
  uStack00000024 = param_3;
  if (uVar1 != 0) {
    do {
      if ((int)uVar8 == 1) {
        uVar8 = fn_82FF9C88(&stack0x0000001c,&stack0x00000024,auStack_60);
        if ((int)uVar8 != 1) {
          return uVar8;
        }
        if (iStack_3c == 0) {
          uVar8 = fn_82FB1078();
        }
        else {
          uVar8 = fn_82FB11B8(param_1,uStack_58,uStack_5c,iStack_3c,uStack_38);
        }
        if ((int)uVar8 != 1) {
          return 2;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  uVar1 = *puStack0000001c;
  puStack0000001c = puStack0000001c + 1;
  if (uVar1 != 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,uVar1 * 5 & 0x1fffffff);
    if (iVar3 == 0) {
      return 2;
    }
    uVar7 = 0;
    if (3 < (int)uVar1) {
      puVar6 = (unsigned __int64 *)(iVar3 + -8);
      do {
        *(unsigned int *)(puVar6 + 1) = *puStack0000001c;
        *(unsigned int *)((int)puVar6 + 0xc) = puStack0000001c[1];
        puVar6[2] = *(unsigned __int64 *)(puStack0000001c + 2);
        puVar6[3] = *(unsigned __int64 *)(puStack0000001c + 4);
        puVar6[4] = *(unsigned __int64 *)(puStack0000001c + 6);
        puVar6[5] = *(unsigned __int64 *)(puStack0000001c + 8);
        *(unsigned int *)(puVar6 + 6) = puStack0000001c[10];
        *(unsigned int *)((int)puVar6 + 0x34) = puStack0000001c[0xb];
        puVar6[7] = *(unsigned __int64 *)(puStack0000001c + 0xc);
        puVar6[8] = *(unsigned __int64 *)(puStack0000001c + 0xe);
        uVar7 = uVar7 + 4;
        puVar6[9] = *(unsigned __int64 *)(puStack0000001c + 0x10);
        puVar6[10] = *(unsigned __int64 *)(puStack0000001c + 0x12);
        *(unsigned int *)(puVar6 + 0xb) = puStack0000001c[0x14];
        *(unsigned int *)((int)puVar6 + 0x5c) = puStack0000001c[0x15];
        puVar6[0xc] = *(unsigned __int64 *)(puStack0000001c + 0x16);
        puVar6[0xd] = *(unsigned __int64 *)(puStack0000001c + 0x18);
        puVar6[0xe] = *(unsigned __int64 *)(puStack0000001c + 0x1a);
        puVar6[0xf] = *(unsigned __int64 *)(puStack0000001c + 0x1c);
        *(unsigned int *)(puVar6 + 0x10) = puStack0000001c[0x1e];
        *(unsigned int *)((int)puVar6 + 0x84) = puStack0000001c[0x1f];
        puVar6[0x11] = *(unsigned __int64 *)(puStack0000001c + 0x20);
        puVar6[0x12] = *(unsigned __int64 *)(puStack0000001c + 0x22);
        puVar4 = puStack0000001c + 0x26;
        puVar6[0x13] = *(unsigned __int64 *)(puStack0000001c + 0x24);
        puStack0000001c = puStack0000001c + 0x28;
        puVar6 = puVar6 + 0x14;
        *puVar6 = *(unsigned __int64 *)puVar4;
      } while (uVar7 < uVar1 - 3);
    }
    if (uVar7 < uVar1) {
      iVar5 = uVar1 - uVar7;
      puVar6 = (unsigned __int64 *)(uVar7 * 0x28 + iVar3 + -8);
      do {
        *(unsigned int *)(puVar6 + 1) = *puStack0000001c;
        *(unsigned int *)((int)puVar6 + 0xc) = puStack0000001c[1];
        puVar6[2] = *(unsigned __int64 *)(puStack0000001c + 2);
        puVar6[3] = *(unsigned __int64 *)(puStack0000001c + 4);
        puVar4 = puStack0000001c + 8;
        puVar6[4] = *(unsigned __int64 *)(puStack0000001c + 6);
        puStack0000001c = puStack0000001c + 10;
        puVar6 = puVar6 + 5;
        *puVar6 = *(unsigned __int64 *)puVar4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar7 = *puStack0000001c;
    puStack0000001c = puStack0000001c + 1;
    uVar8 = fn_82FB0E40(param_1,uVar1,iVar3,uVar7);
    fn_82FA5190(lbl_831BC768,iVar3);
  }
  if ((((int)uVar8 == 1) &&
      (uVar8 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,param_5),
      (param_5 & 0xff) == 0)) && ((int)uVar8 == 1)) {
    *(unsigned short *)(param_1 + 0x84) = *(unsigned short *)puStack0000001c;
    *(short *)(param_1 + 0x80) = (short)*puStack0000001c;
    *(unsigned short *)(param_1 + 0x82) = *(unsigned short *)(puStack0000001c + 1);
    *(unsigned int *)(param_1 + 0xa8) = *(unsigned int *)((int)puStack0000001c + 6);
    puVar2 = (unsigned int *)((int)puStack0000001c + 10);
    puStack0000001c = (unsigned int *)((int)puStack0000001c + 0xe);
    fn_82FB09A8(param_1,*puVar2);
  }
  return uVar8;
}

