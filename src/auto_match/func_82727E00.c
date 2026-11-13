extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82697610();
extern int fn_826A79D8();
extern int fn_826C0B08();
extern int fn_827A1800();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_82005720;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82727E00(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  int iVar6;
  unsigned __int64 uVar3;
  __int64 lVar4;
  char cVar7;
  unsigned __int64 uVar5;
  unsigned __int64 uVar8;
  double dVar9;
  unsigned char auStack_b0 [8];
  double dStack_a8;
  unsigned char auStack_a0 [8];
  double dStack_98;
  unsigned char auStack_90 [8];
  double dStack_88;
  unsigned char auStack_80 [8];
  double dStack_78;
  unsigned char auStack_70 [8];
  double dStack_68;
  unsigned char auStack_60 [8];
  double dStack_58;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  int iStack_40;
  int iStack_3c;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar6 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if (iVar6 == 4) {
      uVar8 = 0;
      iVar6 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        lVar4 = fn_82697610(uVar3,uVar1);
        if ((lVar4 < 0) ||
           (cVar7 = fn_827A1800(*(unsigned int *)(iVar6 + 0xa0),lVar4,&uStack_50), cVar7 == '\0'
           )) {
          puVar2 = *(unsigned char **)(param_1 + 4);
          fn_826959C8(puVar2);
          *puVar2 = 0;
        }
        else {
          uVar5 = fn_8267B890(*(unsigned int *)
                                     (*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,0);
          if ((uVar5 & 0xffffffff) != 0) {
            uVar8 = fn_826C0B08(uVar5,*(unsigned int *)(param_1 + 0x18));
          }
          lVar4 = uVar8 + 0x10;
          auStack_b0[0] = 3;
          dStack_a8 = (double)uStack_48 * lbl_82005720;
          dVar9 = lbl_82005720;
          fn_826A79D8(lVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff820110f8,
                            auStack_b0);
          fn_82696330(auStack_b0);
          auStack_a0[0] = 3;
          dStack_98 = (double)uStack_44 * dVar9;
          fn_826A79D8(lVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff820110f0,
                            auStack_a0);
          fn_82696330(auStack_a0);
          auStack_90[0] = 3;
          dStack_88 = (double)uStack_50 * dVar9;
          fn_826A79D8(lVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff8200eaf0,
                            auStack_90);
          fn_82696330(auStack_90);
          auStack_80[0] = 3;
          dStack_78 = (double)uStack_4c * dVar9;
          fn_826A79D8(lVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff8200eae8,
                            auStack_80);
          fn_82696330(auStack_80);
          auStack_70[0] = 3;
          dStack_68 = (double)(__int64)iStack_3c * dVar9;
          fn_826A79D8(lVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff820110e8,
                            auStack_70);
          fn_82696330(auStack_70);
          auStack_60[0] = 3;
          dStack_58 = (double)(__int64)iStack_40 * dVar9;
          fn_826A79D8(lVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff821ce358,
                            auStack_60);
          fn_82696330(auStack_60);
          fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar8);
          if ((uVar8 & 0xffffffff) != 0) {
            fn_826824B0(uVar8);
          }
        }
      }
    }
  }
  return;
}

