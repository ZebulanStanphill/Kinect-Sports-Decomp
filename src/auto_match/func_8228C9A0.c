extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279768();
extern int fn_82279C58();
extern int fn_82279D28();
extern int fn_8228D478();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8248F4B8();
extern int fn_82672C20();
extern int fn_82BA02A8();
extern unsigned int iStack_8c;
extern unsigned int lbl_82195518;
extern unsigned int lbl_821A7FF4;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821A998C;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


/* WARNING: Removing unreachable block (ram,0x8228c9dc) */

unsigned int *
fn_8228C9A0(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,int param_6,unsigned int *param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned char auStack_90 [4];
  int iStack_8c;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned __int64 uStack_78;
  unsigned char **ppuStack_70;
  int (**pcStack_6c)();
  unsigned char ***pppuStack_60;
  
  pcStack_6c = fn_8248F4B8;
  pppuStack_60 = &ppuStack_70;
  ppuStack_70 = &lbl_821A7FF4;
  fn_82279768(param_1,param_2,0,1,1,&ppuStack_70,0,1);
  *param_1 = &lbl_821A998C;
  param_1[0x4c] = &lbl_821A8C90;
  param_1[0x51] = 0;
  fn_822C5B18(param_1 + 0x52,param_8);
  param_1[0x5c] = param_3;
  param_1[0x5d] = param_4;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 1;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = param_5;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 1;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x60] = *param_7;
  param_1[0x4d] = param_1;
  param_1[0x4e] = fn_8228D478;
  param_1[0x4f] = fn_82BA02A8;
  param_1[0x50] = fn_82BA02A8;
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  param_1[0x29] = param_1 + 0x4c;
  fn_82273CD8(&stack_pair_80.first,3);
  uStack_78 = lbl_82195518;
  puVar1 = (unsigned int *)fn_82279C58(auStack_90,param_1);
  fn_82672C20(*puVar1,0xffffffff821a9834,&stack_pair_80.first,1);
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  fn_82273C88(&stack_pair_80.first);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  *(unsigned int *)(iVar2 + 0x60) = 1;
  if ((param_6 != 0) && (param_1[99] == 0)) {
    fn_82279D28(param_1,1,1);
    param_1[99] = 1;
  }
  fn_82359C18(param_8);
  return param_1;
}

