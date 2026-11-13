extern int fn_82F63BA0();
extern int fn_82F67464();
extern int fn_82F68240();
extern int fn_82F6F890();
extern int fn_82F7B700();
extern int fn_82F7B940();
extern unsigned int stack0x00000000;


unsigned int
fn_82F67340(char *param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  unsigned int *puVar2;
  __int64 lVar1;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  if (((param_1 == (char *)0x0) || (param_2 == param_2 + ((param_2 == (unsigned char *)0x0) - 1))) ||
     (uVar4 = (unsigned __int64)*param_2, uVar4 == (uVar4 - 1) + (unsigned __int64)(uVar4 == 0))) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0;
  }
  lVar1 = fn_82F7B940();
  if (lVar1 == 0) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x18;
    return 0;
  }
  if (*param_1 == '\0') {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F6F890(&stack0x00000000,0xffffffff82f67438);
    return 0;
  }
  uVar3 = fn_82F7B700(param_1,param_2,param_3,lVar1,param_5,param_6);
  fn_82F67464();
  return uVar3;
}

