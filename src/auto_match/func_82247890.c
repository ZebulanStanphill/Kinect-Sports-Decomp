extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82248AE8();
extern int fn_8225F160();
extern int fn_82365BD8();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_8251CF80();
extern int fn_82522588();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int lbl_831D131C;
extern unsigned int lbl_831D1324;
extern unsigned int lbl_83297810;
extern unsigned int uStack_28;
extern unsigned int uStack_38;


void fn_82247890(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned int uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  uVar4 = (unsigned __int64)lbl_83297810;
  if (uVar4 == 0) {
    uVar4 = fn_82511928();
  }
  fn_82513A80(auStack_40,uVar4,uVar1);
  fn_82522588(&uStack_38,auStack_40);
  iVar2 = fn_8225F160();
  lbl_831D131C = ((unsigned int)LZCOUNT(*(unsigned int *)(iVar2 + 8)) >> 5) + 5;
  iVar2 = fn_8225F160();
  lbl_831D1324 = *(unsigned int *)(iVar2 + 0xc);
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  cVar3 = fn_82248AE8(&iStack_30,1);
  iVar2 = iStack_30;
  if (cVar3 != '\0') {
    if (iStack_30 != 0) {
      fn_82365BD8(iStack_30,auStack_40);
    }
    iStack_2c = iVar2 + 8;
  }
  fn_8251CF80((unsigned __int64)uStack_38 + 0x4c,1,&iStack_30);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

