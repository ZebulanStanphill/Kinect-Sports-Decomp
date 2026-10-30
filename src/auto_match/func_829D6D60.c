typedef struct {int pad; unsigned pos; char *data;} S; extern void fn_82A1DDC0(void *,void *,int); void fn_829D6D60(S *s,unsigned short v) {fn_82A1DDC0(s->data+s->pos,&v,2); s->pos+=2;}
