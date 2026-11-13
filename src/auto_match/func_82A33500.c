#define CONCAT24(h,l) ((unsigned __int64)((((unsigned short)(h)) << 32) | ((unsigned int)(l))))
#define CONCAT26(h,l) ((unsigned __int64)((((unsigned short)(h)) << 48) | ((unsigned __int64)(l))))
#define _uStack_58 ((*(unsigned __int64*)&uStack_58))
extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern unsigned int iStack_54;
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;
extern unsigned int uStack_56;
extern unsigned int uStack_58;


unsigned __int64 fn_82A33500(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,
                       unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int auStack_60 [2];
  unsigned short uStack_58;
  unsigned short uStack_56;
  int iStack_54;
  unsigned short uStack_50;
  unsigned short uStack_4e;
  char *pcStack_4c;
  unsigned int auStack_48;
  unsigned int uStack_40;
  unsigned short *puStack_3c;
  unsigned int uStack_38;
  
  uStack_40 = *param_1;
  uStack_38 = param_1[2];
  puStack_3c = &uStack_58;
  auStack_60[0] = 0;
  uStack_58 = (unsigned short)((unsigned __int64)*(unsigned __int64 *)param_1[1] >> 0x30);
  uVar2 = (unsigned int)uStack_58;
  iStack_54 = (int)*(unsigned __int64 *)param_1[1];
  uVar3 = uVar2;
  if (uVar2 != 0) {
    do {
      if (*(char *)(iStack_54 + -1 + uVar3) == '\\') break;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uStack_4e = (unsigned short)(uVar2 - uVar3);
  uVar2 = uVar2 - uVar3 & 0xffff;
  pcStack_4c = (char *)(iStack_54 + uVar3);
  _uStack_58 = CONCAT26((short)uVar3,CONCAT24((short)uVar3,iStack_54));
  if (((uVar3 & 0xffff) == 0) || (uVar2 == 0)) {
    uVar1 = 0xffffffffc000000d;
  }
  else {
    uStack_50 = uStack_4e;
    if (((uVar2 == 3) && (*pcStack_4c == '*')) && (pcStack_4c[1] == '.')) {
      uStack_50 = -(unsigned short)(pcStack_4c[2] != '*') & uStack_4e;
    }
    uVar1 = NtOpenFile(auStack_60,0x100001,&uStack_40,&auStack_48,3,0x4021);
    if (-1 < (int)uVar1) {
      uVar1 = (**(int (***)())(lbl_8315D3D0 + 0x18))
                        (auStack_60[0],0,0,0,&auStack_48,param_2,param_3,&uStack_50);
      if ((__int64)uVar1 < 0) {
        NtClose(auStack_60[0]);
      }
      else {
        if (param_4 == (unsigned int *)0x0) {
          NtClose(auStack_60[0]);
        }
        else {
          *param_4 = auStack_60[0];
        }
        uVar1 = (unsigned __int64)auStack_48;
      }
    }
  }
  return uVar1;
}

