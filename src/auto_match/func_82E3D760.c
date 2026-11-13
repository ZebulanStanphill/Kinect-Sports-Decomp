extern unsigned int *auStack_50;
extern unsigned int *auStack_78;
extern int fn_82E3ACD8();
extern int fn_82E3BDF8();
extern int fn_82E3C690();
extern int fn_82E6EEC0();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


unsigned __int64
fn_82E3D760(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  int * apiStack_80;
  unsigned char auStack_78 [8];
  unsigned char abStack_70 [4];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  unsigned char abStack_60 [16];
  unsigned char auStack_50 [32];
  
  uVar7 = 1;
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (unsigned int *)0x0) {
    *param_5 = 0;
  }
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  fn_82E3ACD8(abStack_60,param_1,&stack0x00000020);
  param_1 = param_1 + 0x1ac;
  apiStack_80 = (int *)0x0;
  fn_82E3BDF8(param_1,auStack_78);
  iVar4 = fn_82E3C690(param_1,auStack_78,auStack_50,&apiStack_80);
  if (iVar4 != 0) {
    uVar7 = 0;
    do {
      piVar3 = apiStack_80;
      pbVar6 = abStack_70;
      pbVar5 = abStack_60;
      iStack_6c = apiStack_80[8];
      iStack_68 = apiStack_80[9];
      iStack_64 = apiStack_80[10];
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != abStack_60);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        if (param_4 != (unsigned int *)0x0) {
          (**(int (***)())(*apiStack_80 + 0xc))(apiStack_80,param_4);
        }
        if (param_5 == (unsigned int *)0x0) {
          return 0;
        }
        fn_82E6EEC0(piVar3,param_5,0);
        return 0;
      }
      iVar4 = fn_82E3C690(param_1,auStack_78,auStack_50,&apiStack_80);
    } while (iVar4 != 0);
  }
  return uVar7;
}

