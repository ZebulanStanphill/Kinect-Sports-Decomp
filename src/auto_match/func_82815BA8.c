struct Context_82815BA8;
struct Object_82815BA8;
typedef int (*Callback_82815BA8)(struct Object_82815BA8 *,struct Context_82815BA8 *,int);
struct Info_82815BA8 { char pad[0x51]; unsigned char count; };
struct Context_82815BA8 {
 int pad[2]; unsigned int pos; int state; unsigned int flags; int arg; int handle;
 struct Info_82815BA8 *info; void *src; char pad24[12]; char *entries;
 char pad34[0x34]; unsigned int active,pending;
};
struct Object_82815BA8 {
 int pad;
 void (*read)(int,unsigned int,unsigned int,unsigned int,Callback_82815BA8,struct Context_82815BA8 *);
 void (*readEx)(int,unsigned int,unsigned int,unsigned int,unsigned int,Callback_82815BA8,struct Context_82815BA8 *);
};
extern void fn_82821728(struct Context_82815BA8 *,int,int);
extern int fn_82814728(struct Context_82815BA8 *,int);
extern int fn_82815268(struct Object_82815BA8 *,struct Context_82815BA8 *,int);
extern int fn_82815960(struct Object_82815BA8 *,struct Context_82815BA8 *,int);
extern void fn_82820290(void *,unsigned int,unsigned int *);
extern int (*lbl_8320A5C8)(int,unsigned int,unsigned int,unsigned int);
extern int (*lbl_8320A5CC)(int,unsigned int,unsigned int,unsigned int,unsigned int);
int fn_82815BA8(struct Object_82815BA8 *obj,struct Context_82815BA8 *ctx,int status) {
 void *src = ctx->src;
 int result = 0;
 unsigned int i;
 if(status != 0) ctx->state |= 0x80;
 if(--ctx->pending != 0) return ctx->state;
 if(ctx->state != 0) return fn_82815268(obj,ctx,ctx->arg);
 ctx->flags |= 0x80;
 fn_82821728(ctx,src==0,0);
 if(fn_82814728(ctx,0) != 0) {
  ctx->state |= 4;
  return fn_82815268(obj,ctx,ctx->arg);
 }
 ctx->active = 0;
 for(i=0; i<ctx->info->count; i++) {
  if(*(unsigned int *)(ctx->entries+i*0x21+0x19) != 0) ctx->active++;
 }
 if(ctx->active != 0) {
  for(i=0;i<ctx->info->count;i++) {
   char *e=ctx->entries+i*0x21;
   unsigned int size=*(unsigned int *)(e+0x19);
   if(size != 0) {
    int flag;
    unsigned int pos,t,v;
    if((ctx->flags&0x1000) && *(unsigned int *)(e+0x1d)<*(unsigned int *)(e+9)) flag=1;
    else flag=0;
    pos=ctx->pos;
    t=*(unsigned int *)(e+0x15)+*(unsigned int *)(e+0x11)+*(unsigned int *)(e+0xd);
    if(src != 0) {fn_82820290(src,i+3,&v);t=v+t;}
    if(*(unsigned int *)(e+0x1d)<*(unsigned int *)(e+9) && !flag)
     t=(*(unsigned int *)(e+9)-*(unsigned int *)(e+0x1d)+t+0x43)&~3u;
    ctx->pos=ctx->pos+size;
    if(ctx->flags&2) {
     if(flag) obj->readEx(ctx->handle,pos,size,t,*(unsigned int *)(e+9),fn_82815960,ctx);
     else obj->read(ctx->handle,pos,size,t,fn_82815960,ctx);
    } else {
     int r;
     if(flag) r=lbl_8320A5CC(ctx->handle,pos,size,t,*(unsigned int *)(e+9));
     else r=lbl_8320A5C8(ctx->handle,pos,size,t);
     result=fn_82815960(obj,ctx,r);
    }
   }
  }
 } else {
  ctx->active=1;
  result=fn_82815960(obj,ctx,0);
 }
 return result;
}
