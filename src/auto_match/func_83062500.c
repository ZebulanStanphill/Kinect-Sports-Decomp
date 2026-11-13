extern int fn_83061150();
extern int fn_830612B8();
extern int fn_830619F8();
extern int fn_830621E8();


unsigned char fn_83062500(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  
  fn_830621E8(param_2,param_6);
  cVar1 = fn_83061150(param_2,param_3,param_6);
  bVar2 = -(cVar1 != '\0') & 1;
  if ((bVar2 != 0) || (bVar3 = 0, (param_4 & 0xffffffff) != 0)) {
    cVar1 = fn_830612B8(param_1,param_2,param_4);
    bVar3 = -(cVar1 != '\0') & bVar2;
  }
  fn_830619F8(param_2);
  return bVar3;
}

