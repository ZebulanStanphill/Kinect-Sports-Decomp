extern int lbl_83215000[];
extern char lbl_8315C454[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int KeSetEvent(void *,int,int);
void fn_829D2900(void) {RtlEnterCriticalSection(lbl_8315C454); if(lbl_83215000[0x290]==1) {KeSetEvent(&lbl_83215000[0x291],1,0); if((unsigned)lbl_83215000[0x295]!=0) KeSetEvent((void *)lbl_83215000[0x295],1,0);} RtlLeaveCriticalSection(lbl_8315C454);}
