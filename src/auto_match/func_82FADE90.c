extern unsigned fn_82FA8948(unsigned, void *, int);
unsigned fn_82FADE90(int *self, int p) {
 int obj; struct { unsigned a,b,c; } tmp;
 unsigned r=(*(unsigned (**)(int *,int,unsigned,int,int *))(*self+0x160))(self,0,*(unsigned *)(p+8),p+16,&obj);
 if(r) { tmp.a=**(unsigned **)(p+12); tmp.b=(*(unsigned **)(p+12))[1]; tmp.c=*(unsigned *)(*(int *)(obj+0x40)+0x68); return fn_82FA8948(r,&tmp,0); }
 return 2;
}
