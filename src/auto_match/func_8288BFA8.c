#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack00000018 ((*(unsigned __int64*)&iStack00000018))
extern unsigned int iStack00000018;
extern unsigned int uStack0000001c;


void fn_8288BFA8(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned int param_3,short *param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iStack00000018;
  unsigned int uStack0000001c;
  
  uStack0000001c = (unsigned int)param_2;
  if (uStack0000001c == param_3) {
    *param_1 = param_2;
    return;
  }
  iStack00000018 = (int)((unsigned __int64)param_2 >> 0x20);
  puVar1 = (unsigned int *)(iStack00000018 + 8);
  piVar2 = (int *)(iStack00000018 + 4);
  uVar3 = uStack0000001c;
  _iStack00000018 = param_2;
  do {
    uVar4 = uVar3 >> 3;
    if (*puVar1 <= uVar4) {
      uVar4 = uVar4 - *puVar1;
    }
    if (*(short *)(*(int *)(uVar4 * 4 + *piVar2) + (uVar3 & 7) * 2) == *param_4) break;
    uVar3 = uVar3 + 1;
    _iStack00000018 = CONCAT44(iStack00000018,uVar3);
  } while (uVar3 != param_3);
  *param_1 = _iStack00000018;
  return;
}

