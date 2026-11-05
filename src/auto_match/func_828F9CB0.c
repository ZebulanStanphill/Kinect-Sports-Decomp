typedef struct Part_828F9CB0 {struct Part_828F9CB0 *next;char text[1];} Part_828F9CB0;
typedef struct Builder_828F9CB0 {char pad[16];Part_828F9CB0 *head;unsigned length;} Builder_828F9CB0;
typedef struct Buffer_828F9CB0 {struct Table_828F9CB0 *vt;} Buffer_828F9CB0;
struct Table_828F9CB0 {void *x[3];char *(*get)(Buffer_828F9CB0 *);};
extern int fn_828F9A60(unsigned,Buffer_828F9CB0 **);
extern void *memcpy(void *,const void *,unsigned);
extern unsigned strlen(const char *);
unsigned fn_828F9CB0(Builder_828F9CB0 *o,Buffer_828F9CB0 **out) {
 int hr;char *end;Part_828F9CB0 *p;
 if(out) {
  if(o->length==0)*out=0;
  else {
   hr=fn_828F9A60(o->length+1,out);if(hr<0)return hr;
   end=(*out)->vt->get(*out)+o->length;*end=0;
   for(p=o->head;p;p=p->next) {unsigned n=strlen(p->text);end-=n;memcpy(end,p->text,n);}
  }
 }
 return 0;
}