extern int fn_824B4300();
extern int fn_82F4DA50();
extern int fn_82F4DDD8();
extern int fn_82F51AC0();
extern int fn_82F528E0();
extern unsigned int lbl_83262350;
extern unsigned int lbl_83262360;


void fn_82F4EAD0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  uVar3 = fn_824B4300();
  puVar2 = &lbl_83262350;
  if (lbl_83262360 != 0) {
    fn_82F528E0();
  }
  cVar1 = fn_82F4DA50(0x10);
  if (cVar1 != '\0') {
    fn_82F4DDD8(0xc);
  }
  do {
    fn_82F51AC0(uVar3,*puVar2,param_2,0,2);
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < -0x7cd9dca8);
  return;
}

