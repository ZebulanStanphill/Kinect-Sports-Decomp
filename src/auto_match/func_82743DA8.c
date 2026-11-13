extern unsigned char fn_82695468(int,int);
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_82743C08();
extern int fn_82743CD8();


void fn_82743DA8(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  int uVar3;
  int iVar5;
  int iVar6;
  unsigned char cVar7;
  int lVar4;
  unsigned char uVar8;
  struct { double x,y; } pointA,pointB;
  
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    iVar5 = fn_82696958(uVar3,uVar1);
    if ((iVar5 != 0) &&
       (iVar6 = (*(int (**)())(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10), iVar6 == 0x10)) {
      cVar7 = fn_82695468(param_1,0x10);
      if (cVar7 == '\0') {
        fn_826954C0(param_1,"Point",0,0);
        return;
      }
      lVar4=*(unsigned int *)(param_1+8) != 0 ? *(unsigned int *)(param_1+8)-16 : 0;
      fn_82743CD8(lVar4,*(unsigned int *)(param_1 + 0x18),&pointA);
      fn_82743C08(*(unsigned int *)(param_1 + 0x18),iVar5,&pointB);
      uVar8 = (pointA.x == pointB.x && pointA.y == pointB.y);
    }
  }
  puVar2 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar2);
  puVar2[4] = uVar8;
  *puVar2 = 2;
  return;
}

