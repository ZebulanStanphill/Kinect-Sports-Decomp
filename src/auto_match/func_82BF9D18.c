extern int fn_82BF91D8();
extern int fn_82BF9700();
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322ECF8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FCF8;
extern unsigned int lbl_8322FD18;
extern unsigned int lbl_8322FD2C;
extern unsigned int lbl_8322FD30;


unsigned __int64 fn_82BF9D18(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int aiStack_50 [20];
  
  *param_1 = 0;
  if (lbl_8322FD18 == 0) {
    uVar2 = 0x8002;
  }
  else {
    RtlEnterCriticalSection(0xffffffff83231d48);
    if (lbl_8322FD30 == '\0') {
      lbl_8322FD2C = 0xffff;
      uVar4 = 0;
      puVar5 = (unsigned int *)&lbl_8322FCF8;
      do {
        if (*(short *)(puVar5 + 1) == -1) goto LAB_82bf9db4;
        uVar4 = uVar4 + 0x10;
        puVar5 = puVar5 + 4;
      } while ((uVar4 & 0xffffffff) < 0x10);
      puVar5 = (unsigned int *)0x0;
LAB_82bf9db4:
      if (puVar5 == (unsigned int *)0x0) {
        uVar2 = 0x8006;
      }
      else {
        iVar3 = fn_82BF9700(param_2,aiStack_50);
        if (iVar3 == 0xfffb) {
          uVar2 = 0x8003;
        }
        else if (iVar3 == 0xffff) {
          uVar2 = 0x8007;
        }
        else {
          iVar3 = fn_82BF91D8();
          (&lbl_8322F4F8)[iVar3] = 0xfffd;
          uVar2 = 0;
          (&lbl_8322B4F8)[iVar3] = 0xfffd;
          *param_3 = (unsigned __int64)*(unsigned int *)(aiStack_50[0] + 0x18);
          *(unsigned int *)(param_3 + 1) = *(unsigned int *)(aiStack_50[0] + 0x1c);
          *(unsigned int *)((int)param_3 + 0xc) = *(unsigned int *)(aiStack_50[0] + 0x20);
          *(unsigned int *)(param_3 + 2) = *(unsigned int *)(aiStack_50[0] + 0x24);
          *(unsigned int *)((int)param_3 + 0x14) = *(unsigned int *)(aiStack_50[0] + 0x28);
          *(unsigned int *)(param_3 + 3) = (unsigned int)*(unsigned short *)(aiStack_50[0] + 0x14);
          uVar1 = *(unsigned int *)(aiStack_50[0] + 0x18);
          *(unsigned short *)((int)puVar5 + 6) = (&lbl_8322ECF8)[iVar3];
          *puVar5 = uVar1;
          *(short *)(puVar5 + 1) = (short)iVar3;
          *(unsigned short *)(puVar5 + 2) = *(unsigned short *)(aiStack_50[0] + 0xe);
          *(short *)((int)puVar5 + 10) =
               *(short *)(aiStack_50[0] + 0x12) + *(short *)(aiStack_50[0] + 0x10) + 0x2c;
          *(unsigned short *)(puVar5 + 3) = *(unsigned short *)(aiStack_50[0] + 0x14);
          *(unsigned char *)((int)puVar5 + 0xe) = 1;
          *(unsigned char *)((int)puVar5 + 0xf) = 0;
          *param_1 = puVar5;
        }
      }
    }
    else {
      uVar2 = 0x8002;
    }
    RtlLeaveCriticalSection(0xffffffff83231d48);
  }
  return uVar2;
}

