extern unsigned int *auStack_14;
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_8225E7A0();
extern int fn_8265F8D8();
extern int fn_8265FF20();
extern int fn_826689B8();
extern int fn_82669808();
extern int fn_82F919C8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


unsigned int * fn_8265F9A0(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  char cVar2;
  unsigned int *puStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int auStack_20 [1];
  unsigned char auStack_18 [4];
  unsigned char auStack_14 [4];
  unsigned int *puStack_10;
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  fn_8265FF20(auStack_20,param_2,param_3);
  uVar1 = fn_8265F8D8(auStack_18,uStack0000001c);
  cVar2 = fn_82669808(auStack_20,uVar1);
  if (cVar2 == '\0') {
    fn_826689B8(auStack_20);
    uVar1 = fn_82F919C8();
    cVar2 = fn_8225E7A0(uStack0000001c,uStack00000024,uVar1);
    if (cVar2 == '\0') {
      puStack_10 = auStack_20;
      goto LAB_8265fa28;
    }
  }
  puStack_10 = (unsigned int *)fn_8265F8D8(auStack_14,uStack0000001c);
LAB_8265fa28:
  *puStack00000014 = *puStack_10;
  return puStack00000014;
}

