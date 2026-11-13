#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82BF90D0();
extern int fn_82BF92A8();
extern int fn_82BF9498();
extern int fn_82BF94E0();
extern int fn_82BF9620();
extern int fn_82BF9700();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322DCF8;
extern unsigned int lbl_8322ECF8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FCF8;
extern unsigned int lbl_8322FD18;
extern unsigned int lbl_8322FD20;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD26;
extern unsigned int lbl_8322FD2C;
extern unsigned int lbl_8322FD30;
extern unsigned int uRam8322fd28;


unsigned __int64 fn_82BF99F0(unsigned int *param_1,unsigned int *param_2,unsigned __int64 *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *apuStack_90 [36];
  
  *param_1 = 0;
  if (lbl_8322FD18 == 0) {
    return 0x8002;
  }
  RtlEnterCriticalSection(0xffffffff83231d48);
  if (lbl_8322FD30 == '\0') {
    lbl_8322FD2C = 0xffff;
    uVar2 = 0;
    puVar4 = &lbl_8322FCF8;
    do {
      if (*(short *)(puVar4 + 4) == -1) goto LAB_82bf9a8c;
      uVar2 = uVar2 + 0x10;
      puVar4 = puVar4 + 0x10;
    } while ((uVar2 & 0xffffffff) < 0x10);
    puVar4 = (unsigned char *)0x0;
LAB_82bf9a8c:
    if (puVar4 == (unsigned char *)0x0) {
      uVar5 = 0x8006;
    }
    else {
      if ((unsigned __int64)(unsigned int)param_2[1] < 0x1fd4) {
        uVar2 = 0x1fd4 - (unsigned __int64)(unsigned int)param_2[1];
        if ((unsigned __int64)(unsigned int)param_2[3] < (uVar2 & 0xffffffff)) {
          uVar2 = uVar2 - (unsigned int)param_2[3];
          if ((unsigned __int64)*(unsigned int *)((int)param_3 + 0x1c) <= (uVar2 & 0xffffffff)) {
            uVar2 = (*(unsigned int *)((int)param_3 + 0x1c) - uVar2) + 0x21ff & 0xfffffe00;
            if (*param_3 <= (0x2000000 - uVar2 & 0xffffffff)) {
              uVar6 = (*param_3 & 0xffffffff) + uVar2;
              iVar1 = fn_82BF9700(param_2,apuStack_90);
              if (iVar1 == 0xfffb) {
                uVar5 = 0x8003;
                goto LAB_82bf9d04;
              }
              if (iVar1 != 0xffff) {
                fn_82BF9498();
              }
              lVar7 = (unsigned __int64)((uVar6 & 0x1fff) != 0) + ((uVar6 & 0xffffffff) >> 0xd);
              iVar1 = fn_82BF94E0(lVar7);
              if (iVar1 != 0) {
                if (lbl_8322FD20 != 0x400) {
LAB_82bf9b7c:
                  uVar5 = fn_82BF90D0(lVar7);
                  fn_82BF92A8(lbl_8322FD26,0);
                  uVar3 = (unsigned int)lbl_8322FD26;
                  (&lbl_8322DCF8)[lbl_8322FD26] = uRam8322fd28;
                  (&lbl_8322ECF8)[uVar3] = (short)uVar5;
                  (&lbl_8322F4F8)[uVar3] = 0xfffe;
                  (&lbl_8322B4F8)[uVar3] = 0xfffe;
                  fn_82BF9620(uVar5,puVar4,1,apuStack_90);
                  lVar7 = ZEXT48(apuStack_90[0]) + 0x2c;
                  *apuStack_90[0] = 0x4355524c;
                  apuStack_90[0][2] = uRam8322fd28;
                  *(short *)(apuStack_90[0] + 3) = (short)uVar5;
                  *(short *)((int)apuStack_90[0] + 0xe) = (short)uVar2;
                  *(short *)(apuStack_90[0] + 4) = (short)param_2[1];
                  *(short *)((int)apuStack_90[0] + 0x12) = (short)param_2[3];
                  *(short *)(apuStack_90[0] + 5) = (short)*(unsigned int *)((int)param_3 + 0x1c);
                  *(unsigned short *)((int)apuStack_90[0] + 0x16) = *(unsigned short *)(param_2 + 4);
                  apuStack_90[0][6] = (int)*param_3;
                  apuStack_90[0][7] = *(unsigned int *)(param_3 + 1);
                  apuStack_90[0][8] = *(unsigned int *)((int)param_3 + 0xc);
                  apuStack_90[0][9] = *(unsigned int *)(param_3 + 2);
                  apuStack_90[0][10] = *(unsigned int *)((int)param_3 + 0x14);
                  uVar3 = param_2[1];
                  fn_82F68CC0(lVar7,*param_2,(unsigned __int64)uVar3);
                  lVar7 = (unsigned __int64)uVar3 + lVar7;
                  uVar3 = param_2[3];
                  fn_82F68CC0(lVar7,param_2[2],(unsigned __int64)uVar3);
                  lVar7 = (unsigned __int64)uVar3 + lVar7;
                  uVar3 = *(unsigned int *)((int)param_3 + 0x1c);
                  fn_82F68CC0(lVar7,*(unsigned int *)(param_3 + 3),(unsigned __int64)uVar3);
                  lVar7 = (unsigned __int64)uVar3 + lVar7;
                    /* WARNING: Subroutine does not return */
                  fn_82F691F0(lVar7,0,(ZEXT48(apuStack_90[0]) - lVar7) + uVar2);
                }
                if (lbl_8322FD22 != -1) {
                  fn_82BF9498();
                  goto LAB_82bf9b7c;
                }
              }
              uVar5 = 0x8005;
              goto LAB_82bf9d04;
            }
          }
        }
      }
      uVar5 = 0x8004;
    }
  }
  else {
    uVar5 = 0x8002;
  }
LAB_82bf9d04:
  RtlLeaveCriticalSection(0xffffffff83231d48);
  return uVar5;
}

