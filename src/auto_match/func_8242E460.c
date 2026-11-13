extern unsigned int *auStack_40;
extern int fn_825200A8();
extern int fn_8265BF48();
extern unsigned int uRam83297704;
extern unsigned int uRam83297708;
extern unsigned int uRam8329770c;
extern unsigned int uRam83297b88;


unsigned __int64 fn_8242E460(int param_1)

{
  int iVar1;
  unsigned int auStack_40 [16];
  
  if ((uRam83297b88 & 1) == 0) {
    uRam83297b88 = uRam83297b88 | 1;
    uRam83297704 = fn_8265BF48(0xffffffff821b8e78,0);
  }
  if ((uRam83297b88 & 2) == 0) {
    uRam83297b88 = uRam83297b88 | 2;
    uRam83297708 = fn_8265BF48(0xffffffff821b8eb8,0);
  }
  if ((uRam83297b88 & 4) == 0) {
    uRam83297b88 = uRam83297b88 | 4;
    uRam8329770c = fn_8265BF48(0xffffffff821b8ef4,0);
  }
  auStack_40[0] = **(unsigned int **)(*(int *)(param_1 + 0x174) + 0x9c);
  iVar1 = fn_825200A8(auStack_40,0xffffffff83297704);
  if (((iVar1 == 0) && (iVar1 = fn_825200A8(auStack_40,0xffffffff83297708), iVar1 == 0)) &&
     (iVar1 = fn_825200A8(auStack_40,0xffffffff8329770c), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

