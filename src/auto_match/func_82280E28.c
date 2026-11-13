typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_80;
extern int fn_8226B6A8();
extern int fn_8226CA38();
extern int fn_82275128();
extern int fn_822811F8();
extern int fn_82F68CC0();
extern unsigned int lbl_821954C8;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82280E28(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned __int64 uStack_88;
  unsigned char auStack_80 [112];
  
  fn_8226B6A8(*(unsigned int *)(param_1 + 0x7c));
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x84);
  if (uVar4 != 0) {
    fn_822811F8(auStack_80);
    fn_82F68CC0(uVar4 + 0x38,auStack_80,0x70);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar2 = fn_82275128();
    iVar2 = *(int *)(*(int *)(iVar2 + 8) * 4 + iVar2);
    if (iVar2 == 0) {
      return;
    }
    if ((*(char *)(iVar2 + 0x41) == '\0') || (bVar1 = true, *(char *)(iVar2 + 0x42) == '\0')) {
      bVar1 = false;
    }
    if (bVar1) {
      uStack_88 = *(unsigned __int64 *)(iVar2 + 0x24);
      cVar3 = fn_8226CA38(*(unsigned int *)(param_1 + 0x7c),&uStack_88,&uStack_90);
      if (cVar3 != '\0') {
        *(unsigned __int64 *)(*(int *)(param_1 + 0x84) + 0xa8) = CONCAT44(uStack_90,uStack_8c);
        return;
      }
    }
    *(unsigned __int64 *)(*(int *)(param_1 + 0x84) + 0xa8) = CONCAT44(lbl_821954C8,lbl_821954C8);
    return;
  }
  return;
}

