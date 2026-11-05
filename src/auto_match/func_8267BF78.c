extern unsigned char fn_8267BAF0(unsigned,unsigned);extern void fn_826913D8(void*,void*,unsigned);extern void RtlEnterCriticalSection(void*);extern void RtlLeaveCriticalSection(void*);
unsigned fn_8267BF78(unsigned p,unsigned n){void *cs=(void*)(p+0x2c4);RtlEnterCriticalSection(cs);if(fn_8267BAF0(p,n)){
unsigned off=n*4;void *o=((void**)*(unsigned*)(p+0x2e0))[n-1];((void(*)(void*,int))(*(void***)o)[12])(o,0);
fn_826913D8((void*)(p+0x118),((void**)*(unsigned*)(p+0x2e0))[n-1],0xb4);
((unsigned*)*(unsigned*)(p+0x2e0))[n-1]=0;RtlLeaveCriticalSection(cs);goto success;
}else{unsigned r=*(unsigned*)0;RtlLeaveCriticalSection(cs);return r;}success:return 0;}
