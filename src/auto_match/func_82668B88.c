extern unsigned int *auStack_14;
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_8265F888();
extern int fn_8265F8D8();
extern int fn_8265FA90();
extern int fn_826600B8();
extern int fn_82668EE0();
extern int fn_826696A8();
extern int fn_826697B8();
extern int fn_82669808();
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


unsigned int
fn_82668B88(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  char cVar3;
  unsigned int *puVar2;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned char auStack_20 [4];
  unsigned char auStack_1c [4];
  unsigned char auStack_18 [4];
  unsigned char auStack_14 [20];
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uVar1 = fn_8265F888(auStack_20,param_2);
  cVar3 = fn_82669808(&stack0x00000024,uVar1);
  if (cVar3 != '\0') {
    uVar1 = fn_8265F8D8(auStack_1c,uStack0000001c);
    cVar3 = fn_82669808(&stack0x0000002c,uVar1);
    if (cVar3 != '\0') {
      fn_826696A8(uStack0000001c);
      fn_8265F888(uStack00000014,uStack0000001c);
      return uStack00000014;
    }
  }
  while (cVar3 = fn_8265FA90(&stack0x00000024,&stack0x0000002c), cVar3 != '\0') {
    puVar2 = (unsigned int *)fn_826697B8(auStack_18,&stack0x00000024,0);
    fn_82668EE0(auStack_14,uStack0000001c,*puVar2);
  }
  fn_826600B8(uStack00000014,uStack00000024,uStack0000001c);
  return uStack00000014;
}

