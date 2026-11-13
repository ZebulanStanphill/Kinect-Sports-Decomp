#define true 1
extern int fn_82D8E8F0();
extern int fn_82D8EA98();


void fn_82DC9F60(unsigned __int64 param_1,char *param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  char *pcVar3;
  
  pcVar3 = param_2 + param_3;
  do {
    if (pcVar3 <= param_2) {
      return;
    }
    if (*param_2 == '\0') {
      iVar1 = *(int *)(param_2 + 4);
      uVar2 = *(unsigned int *)(param_2 + 8);
      fn_82D8E8F0(param_1,iVar1);
      iVar1 = *(int *)(iVar1 + 0x30);
      *(unsigned char *)(iVar1 + 0x12) = *(unsigned char *)(iVar1 + 0x12) | (unsigned char)uVar2;
    }
    else {
      if (*param_2 != '\x01') {
        return;
      }
      fn_82D8EA98(param_1,*(unsigned int *)(param_2 + 4));
    }
    param_2 = param_2 + 0x10;
  } while( true );
}

