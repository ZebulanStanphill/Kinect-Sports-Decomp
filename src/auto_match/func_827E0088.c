extern void RtlEnterCriticalSection(void *);extern void RtlLeaveCriticalSection(void *);
extern void *fn_827DF148(void *,void *,int);extern void fn_827DFC38(void *,void *);
void fn_827E0088(char *object,void *key) {void *value;RtlEnterCriticalSection(object+400);do {value=fn_827DF148(object,key,-1);if(value)fn_827DFC38(object,value);}while(value);RtlLeaveCriticalSection(object+400);}
