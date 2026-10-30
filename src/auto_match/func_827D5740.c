extern void RtlEnterCriticalSection(void *); extern void RtlLeaveCriticalSection(void *);
unsigned char fn_827D5740(char *p) { int result; void *cs=p+0x88; RtlEnterCriticalSection(cs); result=(*(int *)(p+8)==0); RtlLeaveCriticalSection(cs); return result; }
