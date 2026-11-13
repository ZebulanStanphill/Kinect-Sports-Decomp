extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82292AE8();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();


void fn_82292B40(void)

{
  int iVar1;
  int iVar2;
  unsigned int auStack_50 [4];
  unsigned char auStack_40 [48];
  
  iVar1 = fn_82292AE8();
  if ((*(int *)(iVar1 + 0x20) == 0) && (iVar2 = fn_82292AE8(), *(unsigned int *)(iVar2 + 0x24) == 0)) {
    fn_82864988(auStack_40,"Play_music_hero_moment");
    auStack_50[0] = fn_828647D8();
    fn_82864898(auStack_40);
    fn_82536590(auStack_50,0);
    *(unsigned int *)(iVar1 + 0x20) = 1;
  }
  return;
}

