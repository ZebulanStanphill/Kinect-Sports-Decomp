void fn_82820228(int p,unsigned idx,int *out) {
 unsigned val; char *e;
 if(idx>=3) { unsigned n=*(unsigned char *)(*(int *)(p+0x28)+idx-3); if(!n) { *out=0; return; } idx=n+2; }
 e=(char *)(*(int *)(p+0x30)+idx*28);
 if(*e) { unsigned a=*(unsigned *)(e+8),b=*(unsigned *)(e+12); if(a<=b) a=b; val=*(int *)(e+20)+a; }
 else val=*(unsigned *)(e+8);
 *out=val;
}
