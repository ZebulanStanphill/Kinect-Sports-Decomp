#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82F91650();
extern int fn_82F921A0();
extern int fn_82F94750();
extern int fn_82F949D0();
extern int fn_82F952E8();
extern int fn_82F96930();
extern int fn_82F969B8();
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;


unsigned int *
fn_82F96848(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  char cVar3;
  unsigned __int64 *puVar2;
  unsigned int *puStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000020;
  unsigned int uStack00000024;
  unsigned __int64 uStack00000028;
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [8];
  unsigned char auStack_20 [8];
  unsigned char auStack_18 [24];
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  _uStack00000020 = param_3;
  uStack00000028 = param_4;
  uVar1 = fn_82F91650(auStack_30,param_2);
  cVar3 = fn_82F921A0(&stack0x00000020,uVar1);
  if (cVar3 != '\0') {
    uVar1 = fn_82F94750(auStack_28,uStack0000001c);
    cVar3 = fn_82F921A0(&stack0x00000028,uVar1);
    if (cVar3 != '\0') {
      fn_82F96930(uStack0000001c);
      fn_82F91650(puStack00000014,uStack0000001c);
      return puStack00000014;
    }
  }
  while (cVar3 = fn_82F952E8(&stack0x00000020,&stack0x00000028), cVar3 != '\0') {
    puVar2 = (unsigned __int64 *)fn_82F969B8(auStack_20,&stack0x00000020,0);
    fn_82F949D0(auStack_18,uStack0000001c,*puVar2);
  }
  *puStack00000014 = uStack00000020;
  puStack00000014[1] = uStack00000024;
  return puStack00000014;
}

