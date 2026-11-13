typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1a8;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1e8;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_1f8;
extern unsigned int *auStack_200;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7078();
extern int fn_822C8A18();
extern int fn_822C8C08();
extern int fn_822D47D0();
extern int fn_822D4F18();
extern int fn_822D50C0();
extern int fn_822D53F8();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_824060E8();
extern int fn_82522588();
extern unsigned int iStack_1a4;
extern unsigned int iStack_1ac;
extern unsigned int iStack_1ec;
extern unsigned int iStack_1fc;
extern unsigned int uStack_1cc;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_822D4178(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int ***pppuVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  int iVar11;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char auStack_200 [1];
  int iStack_1fc;
  unsigned char auStack_1f8 [8];
  unsigned char auStack_1f0 [4];
  int iStack_1ec;
  unsigned char auStack_1e8 [8];
  unsigned int **appuStack_1e0 [5];
  unsigned int uStack_1cc;
  unsigned char auStack_1c0 [4];
  int *piStack_1bc;
  unsigned char auStack_1b0 [4];
  int iStack_1ac;
  unsigned char auStack_1a8 [4];
  int iStack_1a4;
  unsigned char auStack_1a0 [16];
  unsigned char auStack_190 [32];
  unsigned char auStack_170 [32];
  unsigned char auStack_150 [32];
  unsigned char auStack_130 [32];
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  uVar1 = *(unsigned int *)(param_1 + 0x48);
  uVar2 = *(unsigned int *)(param_1 + 0x44);
  fn_824060E8(auStack_200,param_1 + 0x34);
  fn_822C7078(auStack_1c0,auStack_200,uVar2,uVar1);
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  fn_822D53F8(auStack_200,uVar1);
  fn_82230110(appuStack_1e0,0xffffffff821acfe4);
  fn_82230110(auStack_70,0xffffffff821aca94);
  iVar11 = param_1 + 0xc0;
  uVar4 = fn_822C8A18(auStack_1b0,param_1,0xffffffff821aca8c);
  uVar4 = fn_82522588(auStack_1a8,uVar4);
  fn_823F2E20(iVar11,uVar4);
  if (iStack_1a4 != 0) {
    fn_822315A0();
  }
  if (iStack_1ac != 0) {
    fn_822315A0();
  }
  pppuVar7 = (unsigned int ***)appuStack_1e0[0];
  if (uStack_1cc < 0x10) {
    pppuVar7 = appuStack_1e0;
  }
  fn_822C8A18(auStack_1f0,param_1,pppuVar7);
  fn_82230110(auStack_190,0xffffffff821ad26c);
  uVar4 = fn_82365BD8(auStack_1e8,iVar11);
  uVar5 = fn_82365BD8(auStack_1f8,auStack_1f0);
  fn_822D4F18(auStack_190,uVar5,uVar4);
  fn_82230300(auStack_190,1,0);
  fn_82230110(auStack_150,0xffffffff821ad25c);
  uVar4 = fn_82365BD8(auStack_1f8,iVar11);
  uVar5 = fn_82365BD8(auStack_1e8,auStack_1f0);
  fn_822D4F18(auStack_150,uVar5,uVar4);
  fn_82230300(auStack_150,1,0);
  fn_82230110(auStack_d0,0xffffffff821ad278);
  uVar4 = fn_82365BD8(auStack_1f8,iVar11);
  uVar5 = fn_82365BD8(auStack_1e8,auStack_1f0);
  fn_822D4F18(auStack_d0,uVar5,uVar4);
  fn_82230300(auStack_d0,1,0);
  fn_82230110(auStack_90,0xffffffff821ad758);
  fn_82230110(auStack_110,0xffffffff821ad26c);
  uVar4 = fn_82365BD8(auStack_1f8,auStack_200);
  fn_822D47D0(param_1,auStack_110,auStack_1c0,param_2,param_3,auStack_90,appuStack_1e0,uVar4);
  fn_82230300(auStack_110,1,0);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_130,0xffffffff821ad768);
  fn_82230110(auStack_170,0xffffffff821ad25c);
  uVar4 = fn_82365BD8(auStack_1f8,auStack_200);
  fn_822D47D0(param_1,auStack_170,auStack_1c0,param_2,param_3,auStack_130,appuStack_1e0,uVar4)
  ;
  fn_82230300(auStack_170,1,0);
  fn_82230300(auStack_130,1,0);
  fn_82230110(auStack_b0,0xffffffff821ad77c);
  fn_82230110(auStack_f0,0xffffffff821ad278);
  uVar4 = fn_82365BD8(auStack_1f8,auStack_200);
  fn_822D47D0(param_1,auStack_f0,auStack_1c0,param_2,param_3,auStack_b0,appuStack_1e0,uVar4);
  fn_82230300(auStack_f0,1,0);
  fn_82230300(auStack_b0,1,0);
  uVar4 = fn_82365BD8(auStack_1f8,auStack_200);
  uVar5 = fn_82365BD8(auStack_1e8,iVar11);
  uVar6 = fn_82365BD8(auStack_1a0,auStack_1f0);
  fn_822D50C0(param_1,uVar1,auStack_1c0,uVar6,uVar5,uVar4);
  if (uStack_1cc < 0x10) {
    appuStack_1e0[0] = appuStack_1e0;
  }
  fn_822C8C08(param_1,appuStack_1e0[0]);
  if (iStack_1ec != 0) {
    fn_822315A0();
  }
  fn_82230300(auStack_70,1,0);
  fn_82230300(appuStack_1e0,1,0);
  if (iStack_1fc != 0) {
    fn_822315A0();
  }
  if (ZEXT48(piStack_1bc) != 0) {
    lVar9 = ZEXT48(piStack_1bc) + 8;
    do {
      puVar10 = (unsigned int *)lVar9;
      lVar8 = (unsigned __int64)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(int (***)())(*piStack_1bc + 4))();
    }
  }
  return;
}

