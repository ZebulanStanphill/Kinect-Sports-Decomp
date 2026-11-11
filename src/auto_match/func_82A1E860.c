typedef struct { unsigned short a,b; } State_82A1E860;
typedef struct { unsigned char type,subtype; unsigned short flags; char rest[16]; } Caps_82A1E860;
typedef struct { unsigned short major,minor,build,qfe; } Version_82A1E860;
extern Version_82A1E860 *__imp_XboxKrnlVersion;
extern unsigned XamInputGetCapabilities(unsigned, unsigned, Caps_82A1E860 *);
extern unsigned XamInputSetState(unsigned, unsigned, State_82A1E860 *,unsigned,unsigned,unsigned);
unsigned fn_82A1E860(unsigned user, State_82A1E860 *in) {
 State_82A1E860 out=*in;
 Caps_82A1E860 caps;
 if (__imp_XboxKrnlVersion->major==2 && __imp_XboxKrnlVersion->minor==0 && __imp_XboxKrnlVersion->build<5611 &&
     XamInputGetCapabilities(user,1,&caps)==0 && caps.subtype==2 && (caps.flags&1) && (caps.flags&2)) {
  out.a=in->b;
  out.b=in->a;
 }
 return XamInputSetState(user,0,&out,0,0,0);
}
