extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_83219B8C;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


__int64 fn_82A20F98(__int64 *param_1)

{
  __int64 lVar1;
  unsigned int auStack_60 [2];
  unsigned char auStack_58 [8];
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  unsigned char *puStack_44;
  unsigned int uStack_40;
  unsigned char auStack_30 [8];
  __int64 lStack_28;
  int iStack_20;
  int iStack_1c;
  
  RtlInitAnsiString(auStack_58,0xffffffff821a6764);
  puStack_44 = auStack_58;
  uStack_48 = 0xfffffffd;
  uStack_40 = 0x40;
  lVar1 = NtOpenFile(auStack_60,0x100001,&uStack_48,auStack_50,3,0x800021);
  if (-1 < lVar1) {
    lVar1 = NtQueryVolumeInformationFile(auStack_60[0],auStack_50,auStack_30,0x18,3);
    (**(int (***)())(lbl_83219B8C + 4))(auStack_60[0]);
  }
  if (-1 < (int)lVar1) {
    *param_1 = ((__int64)iStack_20 * (__int64)iStack_1c & 0xffffffffU) * lStack_28;
  }
  return lVar1;
}

