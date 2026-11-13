typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_50;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern int fn_8225F670();
extern int fn_8225F748();
extern int fn_82A1C120();
extern int fn_82A25E38();
extern unsigned int lbl_8328111C;
extern unsigned int lbl_83281120;
extern unsigned int lbl_8329774C;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_825594C0(void)

{
  bool bVar1;
  int iVar2;
  char in_RESERVE;
  unsigned char auStack_a0 [4];
  unsigned char auStack_9c [4];
  unsigned char auStack_98 [8];
  unsigned char auStack_90 [64];
  unsigned char auStack_50 [64];
  
  if (lbl_8329774C == '\0') {
    fn_82A25E38(0xffffffffc0000020,0,3,0,0);
    iVar2 = fn_82A1C120(0xffffffff821a6764,auStack_50,0x40,auStack_a0,auStack_98,auStack_9c,
                              auStack_90,0x40);
    bVar1 = iVar2 == 0;
    if (!bVar1) {
      lbl_8328111C = 1;
    }
    sync(1);
    do {
      if (in_RESERVE != '\0') {
        lbl_83281120 = storeWordConditionalIndexed((unsigned __int64)lbl_83281120 + 1,0,0xffffffff83281120)
        ;
        bVar1 = true;
      }
    } while (!bVar1);
    lbl_8329774C = '\x01';
    fn_8225F670();
    fn_8225F748();
  }
  return;
}

