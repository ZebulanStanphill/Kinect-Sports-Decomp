struct Input {unsigned int reserved;void *data;int a,b,c;};extern char lbl_82196582[];extern int fn_828F7D48(void *,char *,void *,int,int,int);
int fn_828F02D0(struct Input *input,void *object) {return fn_828F7D48(object,lbl_82196582,input->data,input->a,input->b,input->c);}
