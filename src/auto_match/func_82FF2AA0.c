typedef unsigned uint;typedef int (*Code)();
typedef struct Record_82FF2AA0 {uint key;uint object;} R;typedef struct Node_82FF2AA0 {struct Node_82FF2AA0 *next;R r;} N;
extern N *lbl_831BC7D4;extern char lbl_83264580[];extern void RtlEnterCriticalSection(void *);extern void RtlLeaveCriticalSection(void *);
int fn_82FF2AA0(uint key,uint a,uint b,uint c) {N *p;int result=1; RtlEnterCriticalSection(lbl_83264580);for(p=lbl_831BC7D4;p;p=p->next){R *r=&p->r;if(r->key==key){result=2;if(r->object)result=(*(Code *)(*(uint *)r->object+4))((void *)r->object,a,b,c);}}RtlLeaveCriticalSection(lbl_83264580);return result;}
