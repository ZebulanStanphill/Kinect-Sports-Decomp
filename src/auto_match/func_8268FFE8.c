typedef unsigned int U;
extern void *fn_8268FE90(void *,U,U);
extern unsigned char fn_8268F900(void *,U);
void *fn_8268FFE8(char *p,U size,U align) {
 U rounded; void *result;
 if(align < *(U *)(p+8)) align=*(U *)(p+8);
 rounded=(size+align-1)&~(align-1);
 result=fn_8268FE90(p,rounded,align);
 if(result==0) {
  if(!fn_8268F900(p,rounded)) result=0;
  else result=fn_8268FE90(p,rounded,align);
 }
 return result;
}
