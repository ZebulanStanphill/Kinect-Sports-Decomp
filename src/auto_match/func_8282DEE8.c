typedef int (*Open)(void *,const char *);
typedef int (*Read)(void *,int,void *);
typedef int (*Close)(void *);
typedef struct {void *context;Open open;Read read;Close close;} Callbacks;
extern Callbacks lbl_8320A798;
void fn_8282DEE8(void *context,Open open,Read read,Close close){Callbacks *p=&lbl_8320A798;lbl_8320A798.context=context;p->open=open;p->read=read;p->close=close;}
