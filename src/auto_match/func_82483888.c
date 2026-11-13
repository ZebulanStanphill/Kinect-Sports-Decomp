extern unsigned int *auStack_420;
extern unsigned int *auStack_440;
extern unsigned int *auStack_834;
extern unsigned int *auStack_860;
extern unsigned int *auStack_870;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225DA70();
extern int fn_823AB478();
extern int fn_82486B08();
extern int fn_828B8F40();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern int fn_82A1DD38();
extern int fn_82E1DAA0();
extern unsigned int uStack_424;
extern unsigned int uStack_448;
extern unsigned int uStack_838;
extern unsigned int uStack_83c;
extern unsigned int uStack_840;


void fn_82483888(int param_1,int param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  char cVar3;
  unsigned __int64 *puVar2;
  unsigned char auStack_870 [16];
  unsigned char auStack_860 [32];
  unsigned int uStack_840;
  unsigned int uStack_83c;
  unsigned int uStack_838;
  unsigned char auStack_834 [1004];
  unsigned __int64 uStack_448;
  unsigned char auStack_440 [28];
  unsigned char uStack_424;
  unsigned char auStack_420 [1056];
  
  fn_82486B08(&uStack_840);
  fn_82230300(auStack_860,0,0);
  uVar1 = fn_8225C590();
  fn_8225DA70(uVar1,auStack_420,param_2,auStack_870);
  fn_82A1DD38(auStack_834,auStack_420,1000);
  cVar3 = fn_828EA5F8(param_2);
  if (cVar3 == '\0') {
    uStack_840 = 3;
  }
  else if ((*(char *)(param_2 + 0xd8) == '\0') && (cVar3 = fn_828EA610(param_2), cVar3 == '\0')) {
    uStack_840 = 0;
  }
  else {
    uStack_840 = 1;
  }
  cVar3 = fn_828EA5F8(param_2);
  if (cVar3 == '\0') {
    uStack_83c = 0xffffffff;
  }
  else {
    uStack_83c = fn_823AB478(param_2);
  }
  uStack_424 = 0;
  uStack_838 = 0xffffffff;
  puVar2 = (unsigned __int64 *)fn_828B8F40(param_2);
  uStack_448 = *puVar2;
  uVar1 = fn_82E1DAA0(param_2);
  fn_82230218(auStack_440,uVar1,0,0xffffffffffffffff);
  fn_82A1DD38(param_3 * 0x420 + (unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 0x838,&uStack_840,0x420
                   );
  fn_82230300(auStack_860,1,0);
  fn_82230300(auStack_440,1,0);
  return;
}

