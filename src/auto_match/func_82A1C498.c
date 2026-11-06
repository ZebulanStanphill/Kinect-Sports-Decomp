extern unsigned *__imp_XexExecutableModuleHandle;
extern unsigned RtlImageXexHeaderField(unsigned,unsigned);
unsigned fn_82A1C498(unsigned *out) { unsigned v;  *out=0;  if(*__imp_XexExecutableModuleHandle==0) return (unsigned)0xc0000135; v=RtlImageXexHeaderField(*(unsigned *)(*__imp_XexExecutableModuleHandle+0x58),0x40006); *out=v; return v==0 ? (unsigned)0xc0000225 : 0; }