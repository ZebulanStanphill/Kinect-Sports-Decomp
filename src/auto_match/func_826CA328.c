typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_af;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_826972E0();
extern int fn_8269A240();
extern int fn_826C59F8();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82005720;
extern unsigned int uStack_b0;


void fn_826CA328(int param_1)

{
  unsigned char *puVar1;
  int iVar2;
  bool bVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int *puVar7;
  double dVar8;
  double dVar9;
  unsigned char uStack_b0;
  unsigned char auStack_af;
  struct { float first; float second; } stack_pair_a8;

  float fStack_a0;
  float fStack_9c;
  char acStack_90;
  char acStack_80 [16];
  unsigned char auStack_70 [8];
  double dStack_68;
  unsigned char auStack_60 [8];
  double dStack_58;
  unsigned char auStack_50 [48];

  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  lVar4 = fn_826C59F8(param_1);
  if ((lVar4 != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    iVar2 = *(int *)(param_1 + 0x18);
    puVar7 = (unsigned int *)(iVar2 + 0x78);
    uVar5 = fn_826957D0(param_1,0);
    piVar6 = (int *)fn_82696AD0(uVar5,iVar2);
    if (piVar6 != (int *)0x0) {
      acStack_80[0] = '\0';
      acStack_90 = '\0';
      (**(int (***)())(*piVar6 + 0x2c))(piVar6,puVar7,(unsigned __int64)*puVar7 + 0x1ec,acStack_80);
      (**(int (***)())(*piVar6 + 0x2c))(piVar6,puVar7,(unsigned __int64)*puVar7 + 0x1f0,&acStack_90);
      if ((acStack_80[0] == '\x03') || (bVar3 = false, acStack_80[0] == '\x04')) {
        bVar3 = true;
      }
      if (bVar3) {
        if ((acStack_90 == '\x03') || (bVar3 = false, acStack_90 == '\x04')) {
          bVar3 = true;
        }
        if (bVar3) {
          dVar8 = (double)fn_826972E0(&acStack_90,*(unsigned int *)(param_1 + 0x18));
          dVar9 = (double)(float)dVar8;
          dVar8 = (double)fn_826972E0(acStack_80,*(unsigned int *)(param_1 + 0x18));
          stack_pair_a8.second = (float)(dVar9 * (double)lbl_8200571C);
          stack_pair_a8.first = (float)((double)(float)dVar8 * (double)lbl_8200571C);
          fn_8268CC00(auStack_50);
          fn_8269A240(lVar4,auStack_50);
          fn_8268D008(auStack_50,&fStack_a0,&stack_pair_a8.first);
          stack_pair_a8.first = fStack_a0;
          uStack_b0 = 0;
          auStack_70[0] = 3;
          dStack_68 = (double)fStack_a0 * lbl_82005720;
          stack_pair_a8.second = fStack_9c;
          dVar8 = lbl_82005720;
          (**(int (***)())(*piVar6 + 0x28))
                    (piVar6,puVar7,(unsigned __int64)*puVar7 + 0x1ec,auStack_70,&uStack_b0);
          fn_82696330(auStack_70);
          dStack_58 = (double)stack_pair_a8.second * dVar8;
          auStack_60[0] = 3;
          auStack_af = 0;
          (**(int (***)())(*piVar6 + 0x28))
                    (piVar6,puVar7,(unsigned __int64)*puVar7 + 0x1f0,auStack_60,&auStack_af);
          fn_82696330(auStack_60);
        }
      }
      fn_82696330(&acStack_90);
      fn_82696330(acStack_80);
    }
  }
  return;
}
