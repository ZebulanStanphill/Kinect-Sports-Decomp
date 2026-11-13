typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_30;
extern int fn_8282D2E8();
extern unsigned char fn_8282D318(void *, unsigned int);
extern void fn_8282D3A8(void *);
extern unsigned char fn_8282D418(void *, unsigned int);
extern void fn_8282D410(void *);


bool fn_82827A10(unsigned int param_1,unsigned int param_2)

{
  unsigned char cVar1;
  bool bVar2;
  unsigned char auStack_30 [24];
  
  fn_8282D2E8(auStack_30);
  cVar1 = fn_8282D418(auStack_30,param_1);
  if (cVar1 == '\0') {
    fn_8282D410(auStack_30);
    bVar2 = true;
  }
  else {
    cVar1 = fn_8282D318(auStack_30,param_2);
    fn_8282D3A8(auStack_30);
    fn_8282D410(auStack_30);
    bVar2 = cVar1 == '\0';
  }
  return bVar2;
}

