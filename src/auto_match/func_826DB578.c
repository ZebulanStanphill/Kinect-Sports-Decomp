extern unsigned int fn_826DB430();
extern void RtlEnterCriticalSection(int);
extern void RtlLeaveCriticalSection(int);
unsigned int fn_826DB578(int self,unsigned int a,unsigned int b,unsigned int c) {
 unsigned int result;
 if(*(int *)(self+0x74)>=2) return fn_826DB430(self+0x10c);
 else {
  RtlEnterCriticalSection(self+0xd4);
  result=fn_826DB430(self+0x10c,a,b,c);
  RtlLeaveCriticalSection(self+0xd4);
 }
 return result;
}
