typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82580E60();
extern int fn_82580EF8();
extern int fn_8262FEC8();
extern int fn_82631BF8();
extern int fn_826438C0();
extern unsigned int lbl_83281124;
extern unsigned int uStack_32;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3a;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_52;
extern unsigned int uStack_54;
extern unsigned int uStack_56;
extern unsigned int uStack_57;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


bool fn_8252DF10(int param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  bool bVar3;
  unsigned int auStack_70 [4];
  unsigned short uStack_60;
  unsigned short uStack_5e;
  unsigned int uStack_5c;
  unsigned char uStack_58;
  unsigned char uStack_57;
  unsigned char uStack_56;
  unsigned short uStack_54;
  unsigned short uStack_52;
  unsigned int uStack_50;
  unsigned char uStack_4c;
  unsigned char uStack_4b;
  unsigned char uStack_4a;
  unsigned short uStack_48;
  unsigned short uStack_46;
  unsigned int uStack_44;
  unsigned char uStack_40;
  unsigned char uStack_3f;
  unsigned char uStack_3e;
  unsigned short uStack_3c;
  unsigned short uStack_3a;
  unsigned int uStack_38;
  unsigned char uStack_34;
  unsigned char uStack_33;
  unsigned char uStack_32;
  
  if (lbl_83281124 == 0) {
    bVar3 = false;
  }
  else {
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c37e8);
    fn_82580EF8(uVar1,param_1 + 8);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c380c);
    fn_82580EF8(uVar1,param_1 + 0x10);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3834);
    fn_82580EF8(uVar1,param_1 + 0xc);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c385c);
    fn_82580EF8(uVar1,param_1 + 0x18);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3884);
    fn_82580EF8(uVar1,param_1 + 0x14);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c38ac);
    fn_82580EF8(uVar1,param_1 + 0x1c);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c38ac);
    fn_82580EF8(uVar1,param_1 + 0x20);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c38d8);
    fn_82580EF8(uVar1,param_1 + 0x24);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3904);
    fn_82580EF8(uVar1,param_1 + 0x28);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3930);
    fn_82580EF8(uVar1,param_1 + 0x2c);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3960);
    fn_82580EF8(uVar1,param_1 + 0x30);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3990);
    fn_82580EF8(uVar1,param_1 + 0x34);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c39c0);
    fn_82580EF8(uVar1,param_1 + 0x38);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c39e8);
    fn_82580E60(uVar1,(unsigned int *)(param_1 + 4));
    uStack_3e = 1;
    uStack_5c = 0x2a23b9;
    uStack_60 = 0;
    uStack_5e = 0;
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_56 = 0;
    uStack_54 = 0;
    uStack_52 = 0xc;
    uStack_50 = 0x2c23a5;
    uStack_4c = 0;
    uStack_4b = 5;
    uStack_4a = 0;
    uStack_48 = 0;
    uStack_46 = 0x14;
    uStack_44 = 0x2c23a5;
    uStack_40 = 0;
    uStack_3f = 5;
    uStack_3c = 0xff;
    uStack_3a = 0;
    uStack_38 = 0xffffffff;
    uStack_34 = 0;
    uStack_33 = 0;
    uStack_32 = 0;
    lVar2 = fn_82631BF8(&uStack_60);
    bVar3 = lVar2 != 0;
    if (bVar3) {
      auStack_70[0] = 0x1c;
      fn_826438C0(*(unsigned int *)(param_1 + 4),0,lVar2,auStack_70,0);
      fn_8262FEC8(lVar2);
    }
  }
  return bVar3;
}

