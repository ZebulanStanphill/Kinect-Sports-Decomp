extern void RtlEnterCriticalSection(void *); extern void RtlLeaveCriticalSection(void *);
unsigned char fn_83053ED8(char *p) { unsigned char result; RtlEnterCriticalSection(p+0x38); result = *(int *)(p+0xac) == 0; RtlLeaveCriticalSection(p+0x38); return result; }
