typedef unsigned char bool;
extern int fn_8242D540();
extern int fn_8255B1E0();
extern int fn_8255B400();
extern unsigned int ltcg_pool_0_0f;


void fn_8242D0B8(int param_1,char param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  if ((*(int *)(*(int *)(param_1 + 0x174) + 0xb4) != 0) != (bool)param_2) {
    if (param_2 == '\0') {
      fn_8242D540(param_1,1);
      fn_8255B400(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0x844),
                        *(unsigned int *)(*(int *)(param_1 + 0x174) + 0xb4));
      *(unsigned int *)(*(int *)(param_1 + 0x174) + 0xb4) = 0;
    }
    else {
      fn_8242D540(param_1,0);
      iVar1 = *(int *)(param_1 + 0x174);
      uVar2 = fn_8255B1E0((double)ltcg_pool_0_0f,*(unsigned int *)(*(int *)(iVar1 + 0x9c) + 0x844)
                                ,iVar1 + 0xb0,1,0,0,0,0);
      *(unsigned int *)(iVar1 + 0xb4) = uVar2;
    }
  }
  return;
}

