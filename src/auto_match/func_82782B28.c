extern int fn_82781F48();
extern int fn_82789940();
extern int fn_82789AA0();
extern int fn_82789DC8();
extern int fn_82789E08();
extern int fn_8278A2F0();


void fn_82782B28(unsigned __int64 param_1,int param_2,int param_3,int param_4,int param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  fn_82789940();
  *(unsigned int *)(param_2 + 0x8c) = param_8;
  *(int *)(param_2 + 0x80) = param_4;
  *(int *)(param_2 + 0x84) = param_5;
  if ((param_4 != 0) && (param_5 == 0)) {
    *(unsigned int *)(param_2 + 0x80) = 0;
  }
  *(unsigned char *)(param_2 + 0x88) = 0;
  uVar5 = 0;
  if (*(int *)(param_3 + 0x104) != 0) {
    do {
      fn_82789DC8(param_2,(unsigned __int64)
                                *(unsigned int *)(((unsigned int)(uVar5 >> 8) & 0xfffffc) +
                                         *(int *)(param_3 + 0x110)) + (uVar5 & 0x3ff) * 8);
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_3 + 0x104));
  }
  if (*(int *)(param_2 + 0x80) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x84);
  }
  uVar5 = 0;
  if (*(int *)(param_3 + 0x154) != 0) {
    do {
      uVar4 = (unsigned __int64)
              *(unsigned int *)(*(int *)(((unsigned int)((uVar5 & 0xffffffff) >> 4) & 0xffffffc) +
                                *(int *)(param_3 + 0x160)) + ((unsigned int)uVar5 & 0x3f) * 0x18 + 0x10) - 1
      ;
      if (((int)uVar4 < iVar3) && (*(char *)((int)uVar4 * 0x28 + *(int *)(param_2 + 0x80)) != '\0'))
      {
        uVar4 = uVar4 | 0x40000000;
        *(unsigned char *)(param_2 + 0x88) = 1;
      }
      fn_82781F48(param_3,uVar5);
      uVar6 = 0;
      uVar1 = *(unsigned int *)(param_3 + 0x184);
      if (uVar1 != 0) {
        do {
          puVar2 = (unsigned int *)
                   (*(int *)(((unsigned int)(uVar6 >> 8) & 0xfffffc) + *(int *)(param_3 + 400)) +
                   ((unsigned int)uVar6 & 0x3ff) * 0xc);
          fn_82789E08(param_2,*puVar2,puVar2[1],puVar2[2],uVar4);
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar1);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_3 + 0x154));
  }
  fn_8278A2F0(param_1,param_2);
  if (*(char *)(param_2 + 0x88) != '\0') {
    fn_82789AA0(param_2);
  }
  return;
}

