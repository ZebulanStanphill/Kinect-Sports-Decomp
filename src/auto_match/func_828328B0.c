typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82824308();
extern int fn_82824338();
extern int fn_828243B8();
extern int fn_828243E8();
extern int fn_82833628();
extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


bool fn_828328B0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char cVar4;
  int *piVar3;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  iVar1 = param_4[1];
  iVar2 = **(int **)(*(int *)(*param_4 + 8) + 0x388);
  cVar4 = fn_82824338(param_2);
  if (cVar4 == '\0') {
    cVar4 = fn_828243E8(param_2);
    if (cVar4 != '\0') {
      return *(int *)(param_2 + 0x14) == 0;
    }
    cVar4 = fn_82824308(param_2);
    if ((cVar4 == '\0') && (cVar4 = fn_828243B8(param_2), cVar4 == '\0')) {
      return true;
    }
    uStack_2c = *(unsigned int *)(param_2 + 0x10);
    if (1 < uStack_2c) {
      uStack_28 = *(unsigned int *)(iVar2 + iVar1 * 0x20 + 0x10);
      iStack_30 = param_4[3];
      piVar3 = (int *)fn_82833628(*(unsigned int *)(*param_4 + 0x50),&iStack_30);
      *piVar3 = *piVar3 + 1;
    }
  }
  return false;
}

