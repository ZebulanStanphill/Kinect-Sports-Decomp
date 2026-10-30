typedef struct {int pad; unsigned pos; char *data;} S; extern void fn_82A1DDC0(void *,void *,int); void fn_829D6EA0(S *s,unsigned __int64 v) {fn_82A1DDC0(s->data+s->pos,&v,8); s->pos+=8;}
