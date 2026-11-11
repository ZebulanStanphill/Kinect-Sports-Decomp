extern void fn_82D75830(); extern void fn_82D74E60(); extern void fn_82D75010(); extern void fn_82D75FD0();
extern void fn_82D59158(void *,const void *,int,int);
typedef struct { void *create; void (*penetrations)(); void (*closest)(); void (*cast)(); char flipped, predictive; } AgentFuncs;
void fn_82D75928(void *d) {
 AgentFuncs f;
 f.create=(void*)fn_82D75830;
 f.flipped=0;
 f.penetrations=fn_82D74E60;
 f.closest=fn_82D75010;
 f.cast=fn_82D75FD0;
 f.predictive=0;
 fn_82D59158(d,&f,0x12,0x12);
}
