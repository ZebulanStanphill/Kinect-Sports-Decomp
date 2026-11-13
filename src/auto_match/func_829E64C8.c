extern int fn_829E7EA0(int *,unsigned,unsigned,unsigned);
extern unsigned fn_829E82F0(unsigned,unsigned,unsigned);
extern unsigned fn_829E8330(unsigned,unsigned,unsigned);
extern int fn_829E8390(unsigned,int *,unsigned,unsigned,unsigned);


void fn_829E64C8(int param_1,unsigned int param_2,unsigned param_3,unsigned int param_4,
                  unsigned param_5,unsigned int param_6,unsigned int *param_7,unsigned int param_8)

{
  int iVar3; int *sub=(int *)(param_1+4);
  unsigned uVar1;
  unsigned uVar2;
  unsigned int uVar4;
  
  iVar3 = fn_829E7EA0(sub,param_2,param_3,param_4);
  if (iVar3 >= 0) {
    uVar1=fn_829E8330(*(unsigned int *)(param_1+0x18),param_3,param_4);
    
    fn_829E8390(*(unsigned int *)(param_1+0x18),sub,param_8,fn_829E82F0(*(unsigned int *)(param_1+0x18),param_5,param_6),uVar1);
    *param_7=*(unsigned int *)(param_1+0x10);
  } else {*param_7=0;}

  return;
}

