typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern int fn_826F2ED8();
extern int fn_82F65B18();
extern int fn_82F66A80();
extern unsigned int uStack_3c;
extern unsigned int uStack_48;


void fn_826F2F38(int param_1,unsigned int *param_2)

{
  int iVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  unsigned int uVar5;
  unsigned int auStack_50 [2];
  unsigned __int64 uStack_48;
  unsigned char *puStack_40;
  unsigned int uStack_3c;
  
  uVar5 = param_2[1];
  bVar2 = false;
  auStack_50[0] = 0;
  puVar4 = (unsigned char *)*param_2;
  do {
    uStack_3c = 0;
    if (uVar5 != 0) {
      do {
        if ((puVar4[uStack_3c] == '\0') || (puVar4[uStack_3c] == ':')) break;
        uStack_3c = uStack_3c + 1;
      } while (uStack_3c < uVar5);
    }
    uStack_48 = CONCAT44(puVar4,uStack_3c);
    uVar3 = uStack_3c + 1;
    if (uVar5 < uStack_3c + 1) {
      uVar3 = uVar5;
    }
    uVar5 = uVar5 - uVar3;
    puStack_40 = puVar4;
    if (bVar2) {
      fn_826F2ED8(param_1 + 0x10,auStack_50,&uStack_48);
      bVar2 = false;
    }
    else {
      if (((uStack_3c == 0) || (puVar4 == (unsigned char *)0x0)) ||
         (iVar1 = fn_82F66A80(*puVar4), iVar1 == 0)) {
        *(unsigned __int64 *)(param_1 + 0x1c) = uStack_48;
        return;
      }
      auStack_50[0] = fn_82F65B18(puVar4);
      bVar2 = true;
    }
    puVar4 = puVar4 + uVar3;
    if (uVar5 == 0) {
      return;
    }
  } while( true );
}

