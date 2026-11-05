extern void fn_82ACB458(unsigned,unsigned,int);
extern void fn_82ACB310(unsigned);
extern void fn_82ACCAC0(unsigned,unsigned,unsigned);
extern void fn_82ACCBB8(unsigned,unsigned,unsigned,unsigned,unsigned);
unsigned fn_82ACD310(unsigned *s,unsigned arg,unsigned target) {
 unsigned node,link;
 fn_82ACB458(s[12],arg,1); fn_82ACB310(s[14]); fn_82ACCAC0(s[12],arg,s[14]);
 if(( ((unsigned *)s[0])[1] & 1)==0) {
 link=*(unsigned *)s[0];
 while ((node=(link & ~1u)-0x28)!=0) {
 if(node==target) break;
 fn_82ACCBB8(s[12],node,arg,s[14],target);
 if(*(unsigned char *)((char *)s+0x4a)==0 && *(unsigned *)(s[14]+0x10)>=s[16]) break;
 link=*(unsigned *)((node & ~1u)+0x24);
 if(link&1) { node=0; break; }
 }
 } else node=0;
 return node;
}
