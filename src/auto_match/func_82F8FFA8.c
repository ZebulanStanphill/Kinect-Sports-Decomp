extern unsigned int *auStack_2e;
extern int fn_82F90110();
extern int fn_82F90188();
extern int fn_82F901A0();
extern int fn_82F901B0();
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_27;
extern unsigned int uStack_28;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;


void fn_82F8FFA8(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned char *puVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned char uStack_30;
  unsigned char uStack_2f;
  unsigned char auStack_2e [2];
  unsigned char *puStack_2c;
  unsigned char uStack_28;
  unsigned char uStack_27;
  
  puStack_2c = &uStack_30;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack_2f = fn_82F901A0(&stack0x00000024);
  uStack_28 = uStack_30;
  uStack_27 = uStack_2f;
  puVar5 = (unsigned char *)fn_82F90188(auStack_2e,&stack0x00000014,&stack0x00000024);
  uVar2 = uStack00000024;
  uVar1 = *puVar5;
  uVar3 = fn_82F90110(&stack0x0000001c);
  uVar4 = fn_82F90110(&stack0x00000014);
  fn_82F901B0(uVar4,uVar3,uVar2,uVar1,uStack_27,uStack_28);
  return;
}

