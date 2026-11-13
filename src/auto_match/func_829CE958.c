#define TBLr 0
extern unsigned int *auStack_30;
extern int fn_8264D6C0();
extern int fn_829C5960();
extern int fn_829C7030();
extern int fn_829C9540();
extern int fn_829CB790();
extern int fn_829CB8E8();
extern int fn_829CCBC0();
extern int fn_829CD2E0();
extern int fn_829CE110();
extern int fn_829F4E60();
extern unsigned int lbl_83215008;
extern unsigned int lbl_83215060;
extern unsigned int lbl_83215068;
extern unsigned int lbl_83215074;
extern unsigned int lbl_83215078;
extern unsigned int lbl_83217238;
extern unsigned int lbl_83217270;
extern unsigned int lbl_832177B4;
extern unsigned int lbl_832177BC;


int fn_829CE958(void)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar2;
  unsigned __int64 *puVar5;
  unsigned int uVar6;
  unsigned __int64 auStack_30 [6];
  
  iVar3 = fn_829C9540();
  if (iVar3 != 0) {
    puVar4 = (unsigned int *)fn_829CD2E0();
    *(unsigned int **)(iVar3 + 0x110) = puVar4;
    if (puVar4 != (unsigned int *)0x0) {
      uVar1 = TBLr;
      *(int *)(iVar3 + 0x120) = (int)uVar1;
      if ((*puVar4 & 0x40) == 0) {
        if (lbl_83215078 == 1) {
          lbl_83215078 = 0;
          lbl_83215074 = *(int *)(*(int *)(iVar3 + 0x110) + 0x48);
        }
        *(int *)(*(int *)(iVar3 + 0x110) + 0x48) =
             *(int *)(*(int *)(iVar3 + 0x110) + 0x48) - lbl_83215074;
      }
      if ((**(unsigned int **)(iVar3 + 0x110) & 0x20) == 0x20) {
        fn_829CCBC0();
      }
      if (lbl_83215008 != 0) {
        fn_829CB8E8(*(unsigned int *)(iVar3 + 0x110));
        fn_829C5960();
        if (*(int *)(iVar3 + 0x118) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(unsigned int *)(*(int *)(iVar3 + 0x118) + 100);
        }
        RtlEnterCriticalSection(0xffffffff8315c3cc);
        puVar5 = &lbl_832177BC;
        if (lbl_83215060 == 0) {
          puVar5 = &lbl_832177B4;
        }
        auStack_30[0] = *puVar5;
        RtlLeaveCriticalSection(0xffffffff8315c3cc);
        fn_829F4E60(*(unsigned int *)(*(int *)(iVar3 + 0x110) + 100),lbl_83217238,auStack_30,
                          uVar6,(unsigned __int64)*(unsigned int *)(lbl_83217270 + 0x70) +
                                (unsigned __int64)*(unsigned int *)(iVar3 + 0x11c),iVar3,iVar3 + 0x20);
        fn_829C7030(iVar3);
        if ((unsigned __int64)*(unsigned int *)(iVar3 + 0x118) != 0) {
          fn_829CB790((unsigned __int64)*(unsigned int *)(iVar3 + 0x118) + 0x30);
        }
        lVar2 = (unsigned __int64)*(unsigned int *)(lbl_83217270 + 0x70) + (unsigned __int64)*(unsigned int *)(iVar3 + 0x11c);
        fn_8264D6C0(lVar2,lVar2 + 0x4b00,1);
      }
      lVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x110) + 0x68) + (unsigned __int64)lbl_83215068;
      fn_8264D6C0(lVar2,lVar2 + 0x96000,1);
      uVar1 = TBLr;
      *(int *)(iVar3 + 0x124) = (int)uVar1;
      return iVar3;
    }
    fn_829CE110(iVar3);
  }
  return 0;
}

