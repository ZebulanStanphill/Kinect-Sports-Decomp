typedef struct Value_82F735D8 { unsigned vt;char ch; } Value_82F735D8;
extern char lbl_832635A0[];extern unsigned lbl_82169D58;
void *fn_82F72318(void *,unsigned,int);
int *fn_82F732B0(int *,char);
void fn_82F72A00(int *,Value_82F735D8 *);
static __forceinline Value_82F735D8 *new_82F735D8(char ch) {
 Value_82F735D8 *mem=(Value_82F735D8 *)fn_82F72318(lbl_832635A0,8,0),*result;
 if(mem) { mem->ch=ch;mem->vt=(unsigned)&lbl_82169D58;result=mem; } else result=0;
 return result;
}
int *fn_82F735D8(int *p,char ch) {
 if((int)((unsigned)p[1]&0xff000000)<=0x1000000 && ch) {
  if((unsigned)*p==0)fn_82F732B0(p,ch);
  else fn_82F72A00(p,new_82F735D8(ch));
 }
 return p;
}
