extern void *memcpy(void *, const void *, unsigned);
extern void *memset(void *, int, unsigned);


void fn_82A49A30(unsigned short *param_1,char *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int lVar3;
  
  uVar1 = *param_3;
  if (*param_1 == 0x165) {
    uVar2 = 0x20;
  }
  else if (*param_1 == 1) {
    uVar2 = 0x12;
  }
  else {
    uVar2 = (unsigned short)param_1[8] + 0x12;
  }
  *param_3 = uVar2;
  if (*param_1 == 0x165) {
    lVar3 = 0x20;
  }
  else if (*param_1 == 1) {
    lVar3 = 0x10;
  }
  else {
    lVar3 = (unsigned short)param_1[8] + 0x12;
  }
  memcpy(param_2,param_1,lVar3);
                    /* WARNING: Subroutine does not return */
  memset(param_2 + lVar3,0,uVar1 - lVar3);
}

