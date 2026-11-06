extern void fn_82DA3238(void);
extern void fn_82DA4100(unsigned,unsigned,unsigned,unsigned,void (*)(void),int);
extern void fn_82DBA1B0(unsigned,unsigned);
void fn_82DA50D8(unsigned a,unsigned b,unsigned c,unsigned d,int flags) {
 if(flags&2)fn_82DA4100(a,b,c,*(unsigned *)(d+0x78),fn_82DA3238,0);
 if(flags&4)fn_82DBA1B0(b,c);
}
