#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BAEB0;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_82F558F8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  double dVar3;
  double dVar4;
  unsigned int uStack_70;
  unsigned int uStack_68;
  unsigned int uStack_58;
  
  dVar4 = (double)lbl_82002AE0;
  dVar3 = (double)lbl_821AAD20;
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44(lbl_82002AE0,uStack_70),
             CONCAT44(lbl_82002AE0,uStack_68),0xffffffffff00ffff,CONCAT44(lbl_821AAD20,uStack_58),1,
             (&lbl_831BAEB0)[*(int *)(param_1 + 8)]);
  uVar2 = 0xffffffff82165ee0;
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0xc) != 1) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165eb4,uVar1);
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0xc) != 2) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165e90,uVar1);
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165e58,uVar1);
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165e20,uVar1);
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165df4,(double)*(float *)(param_1 + 0x54));
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165dc4,(double)*(float *)(param_1 + 0xa4));
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165d94,uVar1);
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar2 = 0xffffffff82165ed8;
  }
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165d60,uVar2);
  (**(int (***)())(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165d30,(double)*(float *)(param_1 + 0xb4));
  return;
}

