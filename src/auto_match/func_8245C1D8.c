extern unsigned int *auStack_64;
extern unsigned int *auStack_84;
extern unsigned int *auStack_a0;
extern int fn_8223B688();
extern int fn_82459A68();
extern int fn_82459C60();
extern int fn_82459CD0();
extern int fn_82459D88();
extern int fn_82459E38();
extern int fn_8245A098();
extern int fn_8245A260();
extern int fn_8245A358();
extern int fn_8245BF00();
extern int fn_8245BFF0();
extern int fn_8245CB70();
extern int fn_8245CBE0();
extern int fn_82522FF0();
extern int fn_82F68CC0();
extern unsigned int uStack_44;
extern unsigned int uStack_68;


void fn_8245C1D8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  int iVar4;
  double dVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_a0 [28];
  unsigned char auStack_84 [28];
  unsigned int uStack_68;
  unsigned char auStack_64 [32];
  unsigned int uStack_44;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  iVar4 = param_1 + 0x40;
  if (iVar1 == 2) {
    fn_82459CD0(iVar4);
  }
  else if (iVar1 == 3) {
    fn_82459D88(iVar4);
  }
  else if (iVar1 == 4) {
    fn_8245A358(iVar4,*(unsigned int *)(param_1 + 0xd8),param_1 + 200,param_1 + 0xcc);
    if (*(int *)(param_1 + 200) < 1) {
      uVar6 = fn_82522FF0();
      *(unsigned __int64 *)(param_1 + 0x128) = uVar6;
      uVar2 = 5;
    }
    else {
      dVar5 = (double)fn_82522FF0();
      if (dVar5 - *(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x58)) goto LAB_8245c2ac;
      uVar2 = 0xe;
    }
    *(unsigned int *)(param_1 + 0xc4) = uVar2;
  }
  else if (iVar1 == 5) {
    fn_82459E38(iVar4);
  }
  else if (iVar1 == 6) {
    fn_8245A098(iVar4);
  }
  else if (iVar1 == 7) {
    fn_8245A260(iVar4);
  }
LAB_8245c2ac:
  iVar1 = *(int *)(param_1 + 0xc4);
  uVar2 = 0;
  if (iVar1 < 9) {
LAB_8245c334:
    if (iVar1 == 0) {
      fn_8223B688(auStack_a0,param_1 + 0x5dc);
      fn_8223B688(auStack_84,param_1 + 0x5f8);
      uStack_68 = *(unsigned int *)(param_1 + 0x614);
      fn_82F68CC0(auStack_64,param_1 + 0x618,0x20);
      uStack_44 = *(unsigned int *)(param_1 + 0x638);
      fn_82459A68(iVar4,auStack_a0,*(unsigned int *)(param_1 + 0x6a0));
    }
    else {
      if (iVar1 == 8) {
        fn_8245BF00(param_1);
        return;
      }
      if (iVar1 == 10) {
        if (*(int *)(param_1 + 0x698) == 5) {
          cVar3 = *(char *)(param_1 + 0x696);
        }
        else {
          cVar3 = '\0';
        }
        if (cVar3 == '\x01') {
          *(unsigned int *)(param_1 + 0x580) = uVar2;
          if (*(int *)(param_1 + 0x578) == 0) {
            RtlEnterCriticalSection(param_1);
            (**(int (***)())(**(int **)(param_1 + 0x570) + 0x28))
                      (*(int **)(param_1 + 0x570),*(unsigned int *)(param_1 + 0x71c),uVar2);
            *(unsigned int *)(param_1 + 0x6b0) = 0;
            RtlLeaveCriticalSection(param_1);
          }
          else {
            *(unsigned int *)(param_1 + 0x578) = 0;
            *(unsigned int *)(param_1 + 0x57c) = 0;
          }
          *(unsigned int *)(param_1 + 0xc4) = 0;
          *(unsigned int *)(param_1 + 200) = 0;
          *(unsigned int *)(param_1 + 0xd8) = 0;
          *(unsigned int *)(param_1 + 0xcc) = 0;
          fn_82459C60(iVar4);
          return;
        }
        if (cVar3 == '\x02') {
          uVar2 = 0xe;
        }
        else if (cVar3 == '\x03') {
          uVar2 = 0xf;
        }
        else if (cVar3 == '\x04') {
          uVar2 = 0x10;
        }
        else {
          uVar2 = 8;
        }
        goto LAB_8245c53c;
      }
      if (iVar1 == 0xd) {
LAB_8245c354:
        uVar6 = fn_82522FF0();
        *(unsigned __int64 *)(param_1 + 0x688) = uVar6;
        *(unsigned int *)(param_1 + 0xc4) = 0;
        *(unsigned int *)(param_1 + 200) = 0;
        *(unsigned int *)(param_1 + 0xd8) = 0;
        *(unsigned int *)(param_1 + 0xcc) = 0;
        fn_82459C60(iVar4);
        fn_8245CBE0(param_1);
        goto LAB_8245c4a4;
      }
    }
    if (iVar1 < 0xb) {
      return;
    }
  }
  else {
    if (iVar1 < 0xb) {
      uVar2 = 0xb;
      goto LAB_8245c334;
    }
    if (iVar1 == 0xc) {
      uVar2 = 3;
      goto LAB_8245c334;
    }
    if (iVar1 == 0xd) {
      uVar2 = 4;
      goto LAB_8245c354;
    }
    if (iVar1 == 0xe) {
      uVar2 = 0xd;
    }
    else if (iVar1 == 0xf) {
      uVar2 = 5;
    }
    else if (iVar1 == 0x10) {
      uVar2 = 6;
    }
    else {
      if (iVar1 != 0x11) {
        uVar2 = 0;
        goto LAB_8245c334;
      }
      uVar2 = 7;
    }
  }
LAB_8245c4a4:
  if (*(int *)(param_1 + 0x6b4) != 0) {
    if ((iVar1 == 0xc) || (iVar1 == 0xd)) {
      RtlEnterCriticalSection(param_1);
      *(unsigned int *)(param_1 + 0x6a4) = 0;
      *(unsigned int *)(param_1 + 0xc4) = 0;
      *(unsigned int *)(param_1 + 200) = 0;
      *(unsigned int *)(param_1 + 0xd8) = 0;
      *(unsigned int *)(param_1 + 0xcc) = 0;
      fn_82459C60(iVar4);
      fn_8245CBE0(param_1);
      *(unsigned int *)(param_1 + 0x6a8) = 0;
      RtlLeaveCriticalSection(param_1);
    }
    else if (((iVar1 == 0x11) || (iVar1 == 0xe)) ||
            (*(int *)(param_1 + 0x6ac) <= *(int *)(param_1 + 0x6a8))) {
      fn_8245CB70(param_1,1);
    }
    else {
      *(int *)(param_1 + 0x6a8) = *(int *)(param_1 + 0x6a8) + 1;
    }
  }
LAB_8245c53c:
  fn_8245BFF0(param_1,uVar2);
  return;
}

