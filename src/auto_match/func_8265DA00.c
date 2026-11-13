extern int fn_822300F0();
extern int fn_8265DAB8();
extern int fn_8265DB18();
extern int fn_8265DC30();
extern int fn_8265DD28();
extern int fn_8265DDA0();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


unsigned __int64 fn_8265DA00(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar6;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  cVar6 = fn_8265DD28(param_1,param_2);
  uVar2 = uStack00000024;
  if (cVar6 == '\0') {
    cVar6 = fn_8265DC30(uStack00000014,uStack00000024,0);
    uVar2 = uStack00000024;
    uVar1 = uStack0000001c;
    if (cVar6 != '\0') {
      uVar5 = fn_8265DDA0(uStack00000014);
      fn_822300F0(uVar5,uVar1,uVar2);
      fn_8265DAB8(uStack00000014,uStack00000024);
    }
    uVar4 = (unsigned __int64)uStack00000014;
  }
  else {
    lVar3 = fn_8265DDA0(uStack00000014);
    uVar4 = fn_8265DB18(uStack00000014,uStack00000014,(unsigned __int64)uStack0000001c - lVar3,uVar2)
    ;
  }
  return uVar4;
}

