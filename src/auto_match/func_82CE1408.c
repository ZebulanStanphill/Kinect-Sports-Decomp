extern unsigned XamSessionRefObjByHandle(void*,void**);
extern int XMsgStartIORequest(unsigned,unsigned,void*,void*,unsigned);
extern void ObDereferenceObject(void*); extern int fn_82A2B798(void);
unsigned fn_82CE1408(void *h,unsigned flags,unsigned a,unsigned b,void *ov){void *obj;
 struct {void *obj;unsigned flags,a,b;} req; unsigned r;
 if((flags&0x200) && (flags&0x800))r=0x57;
 else {r=XamSessionRefObjByHandle(h,&obj);if(r==0){ req.obj=obj;req.flags=flags;req.a=a;req.b=b;
 if(XMsgStartIORequest(0xfb,0xb0018,ov,&req,16)<0)r=0x65b;
 else if(ov==0)r=fn_82A2B798()!=0?0x65b:0;else r=0x3e5; ObDereferenceObject(obj);}}return r;}