extern float fRam832976cc;
extern int fn_82359558();
extern unsigned int lbl_82191FC8;
extern unsigned int ltcg_pool_0_0f;


void fn_823CA708(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x290);
  if (param_2 == iVar2) {
    return;
  }
  if ((iVar2 == 5) || (iVar2 == 0x11)) {
    *(unsigned int *)(param_1 + 0x368) = 1;
  }
  *(int *)(param_1 + 0x290) = param_2;
  *(unsigned int *)(param_1 + 0x364) = 0;
  fVar1 = ltcg_pool_0_0f;
  switch(param_2) {
  case 0:
  case 5:
  case 0x10:
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
    goto code_r0x823ca7a4;
  case 2:
    iVar2 = *(int *)(param_1 + 0x260);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x260) = iVar2;
                    /* WARNING: Subroutine does not return */
    fn_82359558(*(unsigned int *)(param_1 + 0x240),*(unsigned int *)(param_1 + 0x10));
  case 3:
  case 9:
    if ((*(int *)(param_1 + 0x2b4) != 0) && (iVar2 = *(int *)(param_1 + 0x360), iVar2 != 0)) {
      *(unsigned int *)(iVar2 + 0x1c) = *(unsigned int *)(*(int *)(param_1 + 0x2b4) + 0xc);
      *(unsigned char *)(iVar2 + 0x18) = 1;
      *(unsigned int *)(iVar2 + 0x20) = lbl_82191FC8;
    }
    goto code_r0x823ca7a4;
  case 4:
    *(unsigned int *)(param_1 + 0x2a0) = *(unsigned int *)(param_1 + 0x2a4);
    break;
  case 0xd:
    *(float *)(param_1 + 0x264) = ltcg_pool_0_0f;
    break;
  case 0x14:
    *(unsigned int *)(param_1 + 0x2ac) = 0;
    break;
  case 0x19:
    iVar2 = *(int *)(param_1 + 0x260);
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    goto code_r0x823ca79c;
  case 0x1d:
    if (fRam832976cc == ltcg_pool_0_0f) break;
    iVar2 = (int)fRam832976cc;
    if ((int)fRam832976cc <= *(int *)(param_1 + 0x260)) {
      iVar2 = *(int *)(param_1 + 0x260);
    }
code_r0x823ca79c:
    *(int *)(param_1 + 0x260) = iVar2;
  }
  *(float *)(param_1 + 0x29c) = fVar1;
  return;
code_r0x823ca7a4:
  iVar2 = *(int *)(param_1 + 0x260);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  goto code_r0x823ca79c;
}

