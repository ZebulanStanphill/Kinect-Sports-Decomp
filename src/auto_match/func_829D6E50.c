typedef struct {int pad; unsigned pos; char *data;} S; extern void fn_82A1DDC0(void *,void *,int); void fn_829D6E50(S *s,unsigned char v) {fn_82A1DDC0(s->data+s->pos,&v,1); s->pos+=1;}
