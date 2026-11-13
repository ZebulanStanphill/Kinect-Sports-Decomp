typedef int (*Code)();
typedef struct Record_82FF2AA0 {unsigned int key;unsigned int object;} R;typedef struct Node_82FF2AA0 {struct Node_82FF2AA0 *next;R r;} N;
extern N *lbl_831BC7D4;extern char lbl_83264580[];extern void RtlEnterCriticalSection(void *);extern void RtlLeaveCriticalSection(void *);
int fn_82FF2AA0(unsigned int key,unsigned int a,unsigned int b,unsigned int c) {N *p;int result=1; RtlEnterCriticalSection(lbl_83264580);for(p=lbl_831BC7D4;p;p=p->next){R *r=&p->r;if(r->key==key){result=2;if(r->object)result=(*(Code *)(*(unsigned int *)r->object+4))((void *)r->object,a,b,c);}}RtlLeaveCriticalSection(lbl_83264580);return result;}
