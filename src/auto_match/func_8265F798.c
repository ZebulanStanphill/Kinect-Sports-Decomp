extern unsigned int *auStack_18;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_8225E7A0();
extern int fn_8265F8D8();
extern int fn_8265FF20();
extern int fn_826600F8();
extern int fn_826619F0();
extern int fn_826666A0();
extern int fn_826689B8();
extern int fn_82669808();
extern int fn_82F919C8();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_30;


__int64 fn_8265F798(unsigned int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  char cVar4;
  unsigned int *puVar3;
  __int64 lVar2;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack_30;
  unsigned char auStack_2c [4];
  unsigned char auStack_28 [8];
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned char auStack_18 [24];
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  fn_8265FF20(&uStack_30,param_1,param_2);
  uVar1 = fn_8265F8D8(auStack_2c,uStack00000014);
  cVar4 = fn_82669808(&uStack_30,uVar1);
  if (cVar4 == '\0') {
    fn_826689B8(&uStack_30);
    uVar1 = fn_82F919C8();
    cVar4 = fn_8225E7A0(uStack00000014,uStack0000001c,uVar1);
    if (cVar4 == '\0') goto LAB_8265f83c;
  }
  uStack_20 = 0;
  uStack_1c = uStack_30;
  uVar1 = fn_826600F8(auStack_28,uStack0000001c,&uStack_20);
  puVar3 = (unsigned int *)fn_826619F0(auStack_18,uStack00000014,uStack_1c,uVar1);
  uStack_30 = *puVar3;
LAB_8265f83c:
  lVar2 = fn_826666A0(&uStack_30);
  return lVar2 + 4;
}

