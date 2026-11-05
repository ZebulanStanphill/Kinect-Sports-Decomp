extern unsigned *__imp_KeDebugMonitorData;
extern unsigned *__imp_XboxHardwareInfo;
extern int lbl_83219D3C;
extern unsigned lbl_8329EB20[6];
extern int XexGetModuleHandle(const char *, unsigned *);
extern int XexGetProcedureAddress(unsigned,unsigned,unsigned *);
void fn_82A35A20(void) {
 unsigned handle[4]; unsigned proc[6];
 if(lbl_83219D3C==0) {
  if(*__imp_KeDebugMonitorData!=0) {
   handle[0]=0;
   if((*__imp_XboxHardwareInfo&0x10)!=0 && XexGetModuleHandle("xbdm.xex",handle)>=0 && handle[0]!=0 &&
     XexGetProcedureAddress(handle[0],0x9b,&proc[0])>=0 &&
     XexGetProcedureAddress(handle[0],0x9c,&proc[1])>=0 &&
     XexGetProcedureAddress(handle[0],0x9d,&proc[2])>=0 &&
     XexGetProcedureAddress(handle[0],0x9e,&proc[3])>=0 &&
     XexGetProcedureAddress(handle[0],0x9f,&proc[4])>=0 &&
     XexGetProcedureAddress(handle[0],0xa0,&proc[5])>=0) {
    unsigned a=proc[1],b=proc[3],c=proc[5];
    lbl_8329EB20[1]=a;lbl_8329EB20[3]=b;lbl_8329EB20[5]=c;
    __emit(0x7C2004AC);
    a=proc[0];b=proc[2];c=proc[4];
    lbl_8329EB20[0]=a;lbl_8329EB20[2]=b;lbl_8329EB20[4]=c;
    __emit(0x7C2004AC);
   }
  }
  lbl_83219D3C=1;
 }
}
