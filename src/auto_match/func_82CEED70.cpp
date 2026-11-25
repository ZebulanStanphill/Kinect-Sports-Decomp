#include "havok/hkClass.h"

extern "C" {

extern unsigned int *auStack_30;
extern int fn_82CEEC58(unsigned char *result, const hkClassMember *member);

unsigned char * fn_82CEED70(unsigned char *param_1,const hkClass *param_2)

{
  int iVar2;
  const hkClassMember *uVar1;
  char *pcVar3;
  int lVar4;
  unsigned char auStack_30 [1];
  
  iVar2 = ((const hkClass *)(param_2))->getNumDeclaredMembers();
  lVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = &((const hkClass *)(param_2))->getDeclaredMember(lVar4);
      pcVar3 = (char *)fn_82CEEC58(auStack_30,uVar1);
      if (*pcVar3 == '\0') {
        *param_1 = 0;
        return param_1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar2);
  }
  *param_1 = 1;
  return param_1;
}

}
