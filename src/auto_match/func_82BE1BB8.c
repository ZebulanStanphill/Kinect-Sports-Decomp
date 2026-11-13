typedef unsigned char bool;
#define true 1
extern int fn_82BE5240();
extern int stricmp(const char *a, const char *b);


extern char lbl_82196582[];
bool fn_82BE1BB8(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  if (param_2 == (unsigned int *)0x0) {
    uVar2 = 0xca;
    uVar3 ="InitStruct: NULL\n";
  }
  else {
    if (((char *)*param_2 == (char *)0x0) || (*(char *)*param_2 == '\0')) {
      uVar2 = 0xcb;
    }
    else if (((char *)param_2[1] == (char *)0x0) || (*(char *)param_2[1] == '\0')) {
      uVar2 = 0xcc;
    }
    else {
      if ((param_2[6] != 0) && (iVar1 = stricmp("4.0.0.0", (char *)param_2[6]), iVar1 == 0)) {
        return true;
      }
      uVar2 = 0xd7;
    }
    uVar3 =lbl_82196582;
  }
  iVar1 = fn_82BE5240(param_1,uVar2,uVar3);
  return iVar1 == 0;
}

