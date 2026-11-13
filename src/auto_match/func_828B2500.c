extern unsigned int *auStack_50;
extern int fn_822D5340();
extern int fn_8240D930();
extern int fn_8289D8D0();
extern int fn_828B2360();
extern unsigned char fn_828B4718();
extern int fn_828D7760();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


static __forceinline void invoke(unsigned d,unsigned h,int *o,unsigned a,unsigned b){fn_828D7760(d,h,(*(int (**)())(*o+0x44))(o),a,b);}
void fn_828B2500(unsigned int param_1,unsigned int param_2,int *param_3)

{
  unsigned int uVar1;
  int *piVar5;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char cVar6;
  unsigned int uVar4;
  struct {unsigned int buffer[4];struct {unsigned first,second,third;} pair;} tmp;

  unsigned int uStack_38;
  
  piVar5 = (int *)fn_828B2360(param_1,param_3);
  if ((piVar5 != (int *)0x0) && (uVar2 = (*(int (**)())(*piVar5 + 4))(piVar5), (uVar2 & 0xffffffff) != 0)) {
    uVar3 = fn_8289D8D0(fn_8240D930(param_2));
    if ((uVar3 & 0xffffffff) != 0) {
      tmp.pair.first = 0;
      tmp.pair.second = 0;
      tmp.pair.third=0;
      cVar6 = fn_828B4718(uVar2,&tmp.pair.first,tmp.buffer);
            if (cVar6 != '\0') {
        
        invoke(param_2,uVar3,param_3,tmp.pair.first,tmp.buffer[0]);
      }
      fn_822D5340(&tmp.pair.first);
    }
  }
  return;
}

