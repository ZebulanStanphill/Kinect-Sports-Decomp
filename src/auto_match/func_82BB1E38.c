extern int fn_82AB15D0();
typedef struct { int pad[0x216]; unsigned int *regs; } Ctx;
void fn_82BB1E38(Ctx *p, unsigned int r){ unsigned int i=(r>>5)+2; int j=i*4; unsigned int b=r&0x1f;
 if (((int)(p->regs[i]>>b)&1)>0) {fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","!IsRegisterAvailable(r)","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\globalregs.cpp",0x234);}
 {unsigned *g=p->regs; g[i] |= 1<<b;} }