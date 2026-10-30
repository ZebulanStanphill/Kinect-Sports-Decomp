typedef struct {int a,b;void *(*construct)(int,int,void *);} Entry;extern Entry lbl_820E7F98[];
void *fn_82BC06E8(int usage,int index,void *context) {return lbl_820E7F98[index].construct(usage,index,context);}
