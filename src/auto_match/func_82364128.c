#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82365B38();
extern int fn_82365BD8();
extern int fn_82365DD8();
extern int fn_824C5748();
extern int fn_82566018();
extern int fn_8265C9E0();
extern unsigned int iStack_48;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82364128(int param_1)

{
  unsigned __int64 uVar1;
  char cVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  struct { int first; int second; } stack_pair_68;

  unsigned char auStack_60 [4];
  int iStack_5c;
  int iStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [8];
  unsigned __int64 uStack_38;

  stack_pair_70.second = *(unsigned int *)(param_1 + 0x530);
  stack_pair_70.first = *(unsigned int *)(param_1 + 0x534);
  stack_pair_68.first = 1;
  fn_82365B38(auStack_60,&stack_pair_68.first,&stack_pair_70.second,&stack_pair_70.first);
  fn_82365BD8(&stack_pair_68.first,auStack_60);
  fn_82566018(param_1 + 0x518,&stack_pair_68.first);
  if (stack_pair_68.second != 0) {
    fn_822315A0();
  }
  stack_pair_68.second = 0;
  uStack_38 = CONCAT44(param_1,uStack_44);
  stack_pair_68.first = 2;
  iStack_48 = param_1;
  uVar1 = fn_8265C9E0(0x40);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82365DD8(uVar1,&stack_pair_68.first,auStack_40,&stack_pair_70.second,&stack_pair_70.first);
  }
  stack_pair_68.first = 0;
  stack_pair_68.second = 0;
  if (((uVar1 & 0xffffffff) != 0) && (cVar2 = fn_8223AAC0(uVar1), cVar2 != '\0')) {
    stack_pair_68.first = (int)uVar1 + 0x10;
    stack_pair_68.second = (int)uVar1;
  }
  fn_82566018(param_1 + 0x518,&stack_pair_68.first);
  if (stack_pair_68.second != 0) {
    fn_822315A0();
  }
  fn_82365BD8(&stack_pair_68.first,auStack_60);
  fn_824C5748(param_1 + 0x4f0,&stack_pair_68.first);
  if (stack_pair_68.second != 0) {
    fn_822315A0();
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_822315A0(uVar1);
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return;
}
