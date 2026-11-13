extern int fn_827554A8();
extern int fn_8279FB38();
extern int fn_827A1FB0();
extern int fn_827A9CF0();
extern unsigned int uStack_32;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_39;
extern unsigned int uStack_3a;
extern unsigned int uStack_3b;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_46;
extern unsigned int uStack_47;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_827A2128(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uStack_50;
  unsigned short uStack_4c;
  unsigned char uStack_4a;
  unsigned char bStack_49;
  unsigned char uStack_48;
  unsigned char uStack_47;
  unsigned char uStack_46;
  unsigned char bStack_45;
  unsigned int uStack_44;
  unsigned short uStack_40;
  unsigned char uStack_3e;
  unsigned char bStack_3d;
  unsigned char uStack_3c;
  unsigned char uStack_3b;
  unsigned char uStack_3a;
  unsigned char uStack_39;
  unsigned int uStack_38;
  unsigned short uStack_34;
  unsigned short uStack_32;
  
  if ((*(unsigned char *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38();
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_4a = 0;
  bStack_49 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_46 = 0x10;
  bStack_45 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  bStack_3d = 0;
  uStack_3c = 0;
  uStack_3b = 0;
  uStack_3a = 0x10;
  uStack_39 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  fn_827554A8(&uStack_50,param_1 + 0x118);
  if ((*(unsigned char *)(param_1 + 0x13d) & 0x40) != 0) {
    bStack_3d = bStack_3d | 1;
    bStack_49 = bStack_49 | 1;
  }
  if ((*(unsigned char *)(param_1 + 0x13d) & 0x80) != 0) {
    bStack_3d = bStack_3d | 2;
    bStack_49 = bStack_49 | 2;
  }
  if ((*(unsigned char *)(param_1 + 0x13f) & 0x20) == 0) {
    bStack_45 = bStack_45 & 0xfe;
  }
  else {
    bStack_45 = bStack_45 | 1;
    bStack_49 = bStack_49 & 0xf8 | 1;
  }
  if ((*(unsigned char *)(param_1 + 0x13e) & 1) == 0) {
    bStack_49 = bStack_49 & 0xf7;
  }
  else {
    bStack_49 = bStack_49 | 8;
  }
  if ((*(unsigned char *)(param_1 + 0x13e) & 2) == 0) {
    bStack_49 = bStack_49 & 0xef;
  }
  else {
    bStack_49 = bStack_49 | 0x10;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    fn_827A1FB0(*(int *)(param_1 + 0x14),param_1,param_2,param_3,param_4);
    uVar1 = *(unsigned int *)(param_1 + 0x14);
  }
  fn_827A9CF0(param_1 + 0x24,param_2,param_3,param_4,param_5,&uStack_50,uVar1);
  return;
}

