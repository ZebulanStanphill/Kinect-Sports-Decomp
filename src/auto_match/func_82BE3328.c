extern int fn_82BE23E8();
extern int fn_82BE31D0();
extern int fn_82BE5240();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BEE260();
extern int fn_82BEE670();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B1C8;


unsigned __int64 fn_82BE3328(int param_1)

{
  __int64 lVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  
  if ((lbl_8322B1C8 == 0) || (lVar1 = fn_82BE23E8(), lVar1 == 0)) {
    fn_82BE31D0(lbl_8322B130,0,0);
    iVar2 = thunk_FUN_82be5550(0x60);
    if (iVar2 == 0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3 = (unsigned int *)fn_82BEE260();
    }
    if (puVar3 != (unsigned int *)0x0) {
      iVar2 = fn_82BEE670(puVar3,param_1,*(unsigned int *)(param_1 + 0x158),
                                *(unsigned int *)(param_1 + 0x15c),1);
      if (iVar2 == 0) {
        *(unsigned int *)(param_1 + 0x10) = 0;
        (**(int (***)())*puVar3)(puVar3,1);
        lVar1 = 0x452;
        uVar4 = 0xffffffff820e8f00;
      }
      else {
        lVar1 = fn_82BE6590(puVar3);
        if (lVar1 == 0) {
          lVar1 = fn_82BEB9B8(param_1,puVar3);
          if (lVar1 == 0) {
            return 0;
          }
          *(unsigned int *)(param_1 + 0x10) = 0;
          fn_82BE66A0(puVar3);
          (**(int (***)())*puVar3)(puVar3,1);
          uVar4 = 0xffffffff820e8e9c;
        }
        else {
          *(unsigned int *)(param_1 + 0x10) = 0;
          (**(int (***)())*puVar3)(puVar3,1);
          uVar4 = 0xffffffff820e8ed8;
        }
      }
      goto LAB_82be335c;
    }
    *(unsigned int *)(param_1 + 0x10) = 0;
    lVar1 = 0x65;
  }
  uVar4 = 0xffffffff82196582;
LAB_82be335c:
  uVar4 = fn_82BE5240(param_1,lVar1,uVar4);
  return uVar4;
}

