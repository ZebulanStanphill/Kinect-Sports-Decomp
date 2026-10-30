typedef void (*Callback)(void *,void *);
typedef void (*Completion)(void *,Callback,void *);
extern void fn_82508780(void *,Callback,void *);
extern int fn_8225BBF0(Callback,int,Completion,void *);
extern void fn_825202C8(void *);
extern char *lbl_832767B8;
void fn_82508728(void *self,Callback callback,void *context){char *manager=lbl_832767B8;fn_825202C8(manager);if(**(int **)(manager+0x10)==0)fn_8225BBF0(callback,0,fn_82508780,context);}
