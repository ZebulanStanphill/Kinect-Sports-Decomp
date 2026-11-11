extern void KeEnterCriticalRegion(void), KeLeaveCriticalRegion(void);
extern void RtlEnterCriticalSection(void *), RtlLeaveCriticalSection(void *);
extern void *__imp_VdHSIOCalibrationLock;
extern void VdRetrainEDRAMWorker(int);
extern int VdRetrainEDRAM(unsigned, unsigned *, unsigned, unsigned *, void *, unsigned);
extern void fn_82645688(void *);
extern unsigned fn_82643A48(void *, unsigned);
int fn_82657F88(char *p, unsigned mode, int worker) {
 unsigned a, b;
 __declspec(align(16)) unsigned char buf[0x800];
 int result;
 KeEnterCriticalRegion();
 RtlEnterCriticalSection(__imp_VdHSIOCalibrationLock);
 if (worker) VdRetrainEDRAMWorker(0);
 b=0; a=0;
 result=VdRetrainEDRAM(mode,&a,0x1000,&b,buf,0x800);
 if (result) {
  if (!worker) fn_82645688(p);
  do {
   a=fn_82643A48(p,0x1000)+4;
   result=VdRetrainEDRAM(mode,&a,0x1000,&b,buf,0x800);
   a-=4;
   *(unsigned *)(p+0x30)=a;
   fn_82645688(p);
  } while(result);
 }
 RtlLeaveCriticalSection(__imp_VdHSIOCalibrationLock);
 KeLeaveCriticalRegion();
 return 1;
}
