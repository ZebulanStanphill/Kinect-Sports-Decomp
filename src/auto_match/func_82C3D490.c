extern int fn_82C107F8();
extern int fn_82C4D9B8();
extern int fn_82C4DC18();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_82C3D490(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int aiStack_70 [4];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (*param_4 != 0) {
    return 0;
  }
  if (param_2 != 0x80000) {
    return 0xffffffff805000b2;
  }
  uVar1 = *(unsigned int *)(param_3 + 0x1c);
  aiStack_70[0] = 0;
  uStack_60 = 0xc;
  uStack_5c = 1;
  uStack_58 = 2;
  uStack_54 = 3;
  uStack_50 = 4;
  uStack_4c = 5;
  uStack_48 = 6;
  uStack_44 = 7;
  uStack_40 = 8;
  uStack_3c = 9;
  uStack_38 = 10;
  uStack_34 = 0xb;
  uVar2 = fn_82C4D9B8(param_3,*(unsigned int *)(param_1 + 0x1084),&uStack_60,0xc,param_1 + 100,
                          (unsigned int *)(param_1 + 0x68),aiStack_70);
  if ((((-1 < (int)uVar2) &&
       (uVar2 = fn_82C4DC18(param_3,*(unsigned int *)(param_1 + 0x1084),
                                *(unsigned int *)(param_1 + 0x68),param_1 + 0x20,param_1 + 0x24,
                                param_1 + 0x6c,aiStack_70), -1 < (int)uVar2)) &&
      (uVar2 = fn_82C107F8(*(unsigned int *)(param_1 + 0x1084),uVar1,0x90000,0), -1 < (int)uVar2
      )) && (aiStack_70[0] != 0)) {
    uVar2 = 0x500009;
  }
  return uVar2;
}

