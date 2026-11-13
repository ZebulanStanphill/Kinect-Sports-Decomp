extern int fn_828D5420();
extern int fn_828D8190();
extern unsigned int lbl_82026D70;
extern unsigned int uStack_60;


unsigned int * fn_828D8528(int *param_1,int *param_2,unsigned int *param_3)

{
  char cVar2;
  unsigned int uVar1;
  int *piVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned char uStack_60;
  
  if (param_1 != param_2) {
    puVar4 = param_3 + 4;
    piVar5 = param_1 + 4;
    do {
      if (param_3 != (unsigned int *)0x0) {
        *param_3 = &lbl_82026D70;
        puVar4[-3] = piVar5[-3];
        puVar4[-2] = piVar5[-2];
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        cVar2 = fn_828D5420(puVar4 + -1,(*piVar5 - piVar5[-1]) / 0x1c);
        if (cVar2 != '\0') {
          uVar1 = fn_828D8190(piVar5[-1],*piVar5,puVar4[-1],puVar4 + 2,uStack_60);
          *puVar4 = uVar1;
        }
      }
      param_3 = param_3 + 7;
      piVar3 = piVar5 + 3;
      puVar4 = puVar4 + 7;
      piVar5 = piVar5 + 7;
    } while (piVar3 != param_2);
  }
  return param_3;
}

