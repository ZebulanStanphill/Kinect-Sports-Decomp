extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_8225E7A0();
extern int fn_82F919C8();
extern int fn_82F921A0();
extern int fn_82F93A00();
extern int fn_82F94750();
extern int fn_82F953C8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


unsigned __int64 * fn_82F95200(unsigned __int64 *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  char cVar2;
  unsigned __int64 *puStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned __int64 auStack_30 [1];
  unsigned char auStack_20 [8];
  unsigned char auStack_18 [8];
  unsigned __int64 *puStack_10;
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  fn_82F953C8(auStack_30,param_2,param_3);
  uVar1 = fn_82F94750(auStack_20,uStack0000001c);
  cVar2 = fn_82F921A0(auStack_30,uVar1);
  if (cVar2 == '\0') {
    fn_82F93A00(auStack_30);
    uVar1 = fn_82F919C8();
    cVar2 = fn_8225E7A0(uStack0000001c,uStack00000024,uVar1);
    if (cVar2 == '\0') {
      puStack_10 = auStack_30;
      goto LAB_82f95290;
    }
  }
  puStack_10 = (unsigned __int64 *)fn_82F94750(auStack_18,uStack0000001c);
LAB_82f95290:
  *puStack00000014 = *puStack_10;
  return puStack00000014;
}

