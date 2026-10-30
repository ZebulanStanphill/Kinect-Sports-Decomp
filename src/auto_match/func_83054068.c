extern void RtlEnterCriticalSection(void *); extern void RtlLeaveCriticalSection(void *);
unsigned char fn_83054068(char *p) { unsigned char result; RtlEnterCriticalSection(p+0x38); result = *(int *)(p+0xbc) == 0; RtlLeaveCriticalSection(p+0x38); return result; }
