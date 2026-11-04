extern unsigned XamGetSystemVersion(void); extern int XexGetModuleHandle(const char *,unsigned *); extern int XexGetProcedureAddress(unsigned,unsigned,unsigned *); extern void NetDll_XNetStartup(int,int);
void fn_82CE0598(int a,int b) {
 struct {unsigned proc,mod;} s; unsigned p; s.proc=0;
 if(XamGetSystemVersion()<0x200a3200u || XexGetModuleHandle("xam.xex",&s.mod)<0) p=s.proc;
 else { unsigned hr=XexGetProcedureAddress(s.mod,80,&s.proc); p=((hr>>31)-1)&s.proc; s.proc=p; }
 if(p) ((void (*)(int,int,unsigned))p)(a,b,0x202dff03); else NetDll_XNetStartup(a,b);
}
