extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_6c;
extern int fn_827D51A0();
extern int memcpy();


int * fn_827D52F8(int *param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int *piStack00000014;
  unsigned char auStack_6c [28];
  unsigned char auStack_50 [4];
  unsigned char auStack_4c [44];
  
  piVar1 = (int *)*param_2;
  piStack00000014 = param_1;
  memcpy(auStack_6c,param_2 + 1,0x18);
  uVar2 = (**(int (***)())(*piVar1 + 0xc))(piVar1,0x40,auStack_6c);
  if ((uVar2 & 0xffffffff) != 0) {
    memcpy(auStack_4c,param_2 + 1,0x18);
    fn_827D51A0(uVar2,auStack_50);
  }
  param_1[1] = (int)uVar2;
  *param_1 = (int)uVar2 + 0xc;
  return param_1;
}

