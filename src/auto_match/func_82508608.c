extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_825200F0();
extern int fn_827D6968();
extern unsigned int lbl_83265A24;
extern unsigned int lbl_83283E3C;
extern unsigned int lbl_83283E40;


__int64 fn_82508608(unsigned __int64 param_1,int param_2)

{
  char cVar1;
  __int64 lVar2;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [32];
  
  auStack_70[0] = lbl_83283E3C;
  fn_825200F0(auStack_60,auStack_70);
  if ((*(char *)(param_2 + 0xd8) == '\0') && (*(int *)(param_2 + 0x120) != -1)) {
    cVar1 = fn_827D6968(lbl_83265A24,auStack_60);
    lVar2 = 1;
    if (cVar1 != '\0') goto LAB_8250866c;
  }
  lVar2 = 0;
LAB_8250866c:
  if (lVar2 == 0) {
    auStack_70[0] = lbl_83283E40;
    fn_825200F0(auStack_40,auStack_70);
    if (((*(char *)(param_2 + 0xd8) == '\0') && (*(int *)(param_2 + 0x120) != -1)) &&
       (cVar1 = fn_827D6968(lbl_83265A24,auStack_40), cVar1 != '\0')) {
      return 1;
    }
    lVar2 = 0;
  }
  return lVar2;
}

