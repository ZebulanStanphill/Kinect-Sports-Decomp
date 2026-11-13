extern int fn_8277E998();
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


void fn_827810A8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned char *puVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  
  uVar2 = (param_2 & 0xffffffff) >> 0x1e & 1;
  uStack0000001c = (unsigned int)param_2 & 0xbfffffff;
  uStack00000024 = (unsigned int)param_3 & 0xbfffffff;
  uStack0000002c = param_4 & 0xbfffffff;
  lVar3 = param_1 + 0x194;
  if (uVar2 == ((param_3 & 0xffffffff) >> 0x1e & 1)) {
    fn_8277E998(lVar3,&stack0x00000024);
    fn_8277E998(param_1 + 0x1a4,&stack0x00000024);
    if (uVar2 == 0) {
      fn_8277E998(param_1 + 0x1a4,&stack0x0000001c);
      puVar1 = (unsigned char *)&stack0x0000002c;
      goto LAB_82781174;
    }
    fn_8277E998(lVar3,&stack0x0000001c);
    puVar1 = (unsigned char *)&stack0x0000002c;
  }
  else {
    fn_8277E998(lVar3,&stack0x0000002c);
    fn_8277E998(param_1 + 0x1a4,&stack0x0000002c);
    if (uVar2 == 0) {
      fn_8277E998(param_1 + 0x1a4,&stack0x0000001c);
      puVar1 = (unsigned char *)&stack0x00000024;
      goto LAB_82781174;
    }
    fn_8277E998(lVar3,&stack0x0000001c);
    puVar1 = (unsigned char *)&stack0x00000024;
  }
  lVar3 = param_1 + 0x1a4;
LAB_82781174:
  fn_8277E998(lVar3,puVar1);
  return;
}

