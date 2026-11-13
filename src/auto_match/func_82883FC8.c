extern int fn_8265CA20();
extern int fn_8287F798();
extern int fn_8287FD98();
extern int fn_82881D60();
extern int fn_82886980();
extern int fn_82887108();
extern int fn_828872C8();
extern int fn_82887890();
extern int fn_82888170();
extern int fn_8288E4B0();
extern int fn_8289F160();
extern int fn_828A24F8();
extern int fn_828EA790();
extern int fn_82CE06D8();
extern int fn_82CE06F8();
extern unsigned int *lbl_83212A04;


void fn_82883FC8(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  int *piStack_50;
  int *apiStack_4c [19];
  
  piStack_50 = (int *)param_1;
  fn_8289F160(apiStack_4c,0xffffffff83212a00,&piStack_50);
  if (apiStack_4c[0] != lbl_83212A04) {
    uVar3 = fn_8287FD98();
    fn_8287F798(uVar3,param_1);
    iVar1 = apiStack_4c[0][4];
    if (*(int *)(iVar1 + 0xb4) != 0) {
      fn_82886980();
      *(unsigned int *)(iVar1 + 0xb4) = 0;
    }
    piVar5 = (int *)(iVar1 + 0x7c);
    iVar4 = *(int *)(iVar1 + 0x7c);
    while (iVar4 != 0) {
      puVar2 = (unsigned int *)*piVar5;
      if (puVar2[0xc] != 0) {
        *(unsigned int *)(puVar2[0xc] + 0x34) = puVar2[0xd];
      }
      if (puVar2[0xd] != 0) {
        *(unsigned int *)(puVar2[0xd] + 0x30) = puVar2[0xc];
      }
      if ((unsigned int *)*piVar5 == puVar2) {
        *piVar5 = puVar2[0xc];
      }
      if (*(unsigned int **)(iVar1 + 0x80) == puVar2) {
        *(unsigned int *)(iVar1 + 0x80) = puVar2[0xd];
      }
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
      puVar2[0xb] = 0;
      fn_82887108(1);
      (**(int (***)())*puVar2)(puVar2,1);
      fn_82887108(0);
      iVar4 = *piVar5;
    }
    piVar5 = (int *)(iVar1 + 0x70);
    iVar4 = *(int *)(iVar1 + 0x70);
    while (iVar4 != 0) {
      puVar2 = (unsigned int *)*piVar5;
      if (puVar2[0xc] != 0) {
        *(unsigned int *)(puVar2[0xc] + 0x34) = puVar2[0xd];
      }
      if (puVar2[0xd] != 0) {
        *(unsigned int *)(puVar2[0xd] + 0x30) = puVar2[0xc];
      }
      if ((unsigned int *)*piVar5 == puVar2) {
        *piVar5 = puVar2[0xc];
      }
      if (*(unsigned int **)(iVar1 + 0x74) == puVar2) {
        *(unsigned int *)(iVar1 + 0x74) = puVar2[0xd];
      }
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + -1;
      puVar2[0xb] = 0;
      fn_82887108(1);
      (**(int (***)())*puVar2)(puVar2,1);
      fn_82887108(0);
      iVar4 = *piVar5;
    }
    piVar5 = (int *)(iVar1 + 0x98);
    iVar4 = *(int *)(iVar1 + 0x98);
    while (iVar4 != 0) {
      puVar2 = (unsigned int *)*piVar5;
      if (puVar2[0xc] != 0) {
        *(unsigned int *)(puVar2[0xc] + 0x34) = puVar2[0xd];
      }
      if (puVar2[0xd] != 0) {
        *(unsigned int *)(puVar2[0xd] + 0x30) = puVar2[0xc];
      }
      if ((unsigned int *)*piVar5 == puVar2) {
        *piVar5 = puVar2[0xc];
      }
      if (*(unsigned int **)(iVar1 + 0x9c) == puVar2) {
        *(unsigned int *)(iVar1 + 0x9c) = puVar2[0xd];
      }
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      *(int *)(iVar1 + 0xa0) = *(int *)(iVar1 + 0xa0) + -1;
      puVar2[0xb] = 0;
      (**(int (***)())*puVar2)(puVar2,1);
      iVar4 = *piVar5;
    }
    piVar5 = (int *)(iVar1 + 0xa4);
    iVar4 = *(int *)(iVar1 + 0xa4);
    while (iVar4 != 0) {
      puVar2 = (unsigned int *)*piVar5;
      if (puVar2[0xc] != 0) {
        *(unsigned int *)(puVar2[0xc] + 0x34) = puVar2[0xd];
      }
      if (puVar2[0xd] != 0) {
        *(unsigned int *)(puVar2[0xd] + 0x30) = puVar2[0xc];
      }
      if ((unsigned int *)*piVar5 == puVar2) {
        *piVar5 = puVar2[0xc];
      }
      if (*(unsigned int **)(iVar1 + 0xa8) == puVar2) {
        *(unsigned int *)(iVar1 + 0xa8) = puVar2[0xd];
      }
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) + -1;
      puVar2[0xb] = 0;
      (**(int (***)())*puVar2)(puVar2,1);
      iVar4 = *piVar5;
    }
    piStack_50 = (int *)**(int **)(iVar1 + 0x8c);
    if (piStack_50 != *(int **)(iVar1 + 0x8c)) {
      do {
        puVar2 = (unsigned int *)piStack_50[4];
        if (puVar2 != (unsigned int *)0x0) {
          (**(int (***)())*puVar2)(puVar2,1);
        }
        fn_828EA790(&piStack_50);
      } while (piStack_50 != *(int **)(iVar1 + 0x8c));
    }
    fn_828A24F8(iVar1 + 0x88,*(unsigned int *)(*(int *)(iVar1 + 0x8c) + 4));
    *(int *)(*(int *)(iVar1 + 0x8c) + 4) = *(int *)(iVar1 + 0x8c);
    *(unsigned int *)*(unsigned int *)(iVar1 + 0x8c) = *(unsigned int *)(iVar1 + 0x8c);
    *(int *)(*(int *)(iVar1 + 0x8c) + 8) = *(int *)(iVar1 + 0x8c);
    *(unsigned int *)(iVar1 + 0x90) = 0;
    fn_82888170(param_1,2,0x20,1);
    *(unsigned int *)(iVar1 + 8) = 0xffffffff;
    fn_82881D60(param_1);
    if ((*(int *)(iVar1 + 0x28) != 0) && (iVar4 = fn_82CE06F8(*(int *)(iVar1 + 0x28)), iVar4 != 3))
    {
      fn_82CE06D8(*(unsigned int *)(iVar1 + 0x28));
    }
    if (*(char *)(iVar1 + 6) != '\0') {
      puVar2 = *(unsigned int **)(iVar1 + 0x20);
      if (puVar2 != (unsigned int *)0x0) {
        (**(int (***)())*puVar2)(puVar2,1);
      }
      *(unsigned int *)(iVar1 + 0x20) = 0;
      *(unsigned char *)(iVar1 + 6) = 0;
    }
    piStack_50 = (int *)*lbl_83212A04;
    piVar5 = lbl_83212A04;
    if (piStack_50 != lbl_83212A04) {
      do {
        iVar1 = piStack_50[4];
        if ((iVar1 != 0) && (*(int **)(iVar1 + 8) == (int *)param_1)) {
          *(unsigned int *)(iVar1 + 8) = 0xffffffff;
          piVar5 = lbl_83212A04;
        }
        fn_828EA790(&piStack_50);
      } while (piStack_50 != piVar5);
    }
    fn_8265CA20(*(unsigned int *)(apiStack_4c[0][4] + 0xb8));
    *(unsigned int *)(apiStack_4c[0][4] + 0xb8) = 0;
    iVar1 = apiStack_4c[0][4];
    if (iVar1 != 0) {
      fn_82887890(apiStack_4c,iVar1 + 0x88,**(unsigned int **)(iVar1 + 0x8c));
      fn_8265CA20(*(unsigned int *)(iVar1 + 0x8c));
      if (*(int *)(iVar1 + 0x60) != 0) {
        fn_8265CA20();
      }
      *(unsigned int *)(iVar1 + 0x68) = 0;
      *(unsigned int *)(iVar1 + 0x60) = 0;
      *(unsigned int *)(iVar1 + 100) = 0;
      fn_8288E4B0(apiStack_4c,iVar1 + 0x10,**(unsigned int **)(iVar1 + 0x14));
      fn_8265CA20(*(unsigned int *)(iVar1 + 0x14));
      fn_8265CA20(iVar1);
    }
    apiStack_4c[0][4] = 0;
    fn_828872C8(apiStack_4c,0xffffffff83212a00,apiStack_4c[0]);
  }
  return;
}

