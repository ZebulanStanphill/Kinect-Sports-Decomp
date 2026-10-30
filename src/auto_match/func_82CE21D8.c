extern int XMsgInProcessCall(int,int,void *,int);
int fn_82CE21D8(int a,int b,void *output) {struct {int a,b;void *output;int reserved;} message;message.a=a;message.b=b;message.output=output;message.reserved=0;return XMsgInProcessCall(0xfb,0xb003d,&message,0);}
