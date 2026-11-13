typedef unsigned char bool;
#define true 1
extern int fn_82558B08();
extern int fn_82569B10();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern unsigned int *lbl_8327F84C;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8256A938(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  char cVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  while( true ) {
    lVar3 = fn_82569B10();
    do {
      puVar6 = (unsigned int *)(lVar3 + 0x78);
      uVar1 = *puVar6;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar3 + 0x78);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((uVar1 == 0) && (cVar5 = (**(int (***)())(*lbl_8327F84C + 0x24))(), cVar5 == '\x01')) break;
    fn_82558B08();
  }
  sync(1);
  uVar4 = fn_82569B10();
  lVar3 = fn_82A1BB18();
  fn_8259C5D8(uVar4,0,lVar3 + 1);
  fn_82558B08();
  uVar4 = fn_82569B10();
  fn_82A1BB18();
  fn_8259C738(uVar4);
  return;
}

