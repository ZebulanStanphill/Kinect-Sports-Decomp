typedef unsigned int uint;
typedef struct Pair { uint value,ref; } Pair;
extern void fn_822315A0(uint);
static void swapword(uint *a,uint *b) {uint t=*a;*a=*b;*b=t;}
Pair *fn_8223A948(Pair *out,int callable,unsigned __int64 arg) {
 Pair tmp;Pair *p;
 p=(*(Pair *(**)(Pair *,unsigned __int64))(callable+4))(&tmp,arg);
 out->value=0;out->ref=0;
 if(out!=p) {swapword(&out->ref,&p->ref);swapword(&out->value,&p->value);}
 if(tmp.ref) fn_822315A0(tmp.ref);
 return out;
}
