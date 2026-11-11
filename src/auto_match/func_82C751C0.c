typedef struct Object_82C751C0 { char pad[0xf8c]; unsigned arg; char pad2[0x3cd4-0xf90]; int a,b; char pad3[0x3cfc-0x3cdc]; int state; } Object_82C751C0;
extern void fn_82C83B78(int,unsigned);
void fn_82C751C0(Object_82C751C0 *o) {
 if(o->state<0 || o->state>4) return;
 if(o->state==4) {o->a=1;o->b=1;fn_82C83B78(0,o->arg);}
 else if(o->state==3) {o->a=1;o->b=1;fn_82C83B78(1,o->arg);}
 else if(o->state==2) {o->a=1;o->b=0;fn_82C83B78(0,o->arg);}
 else if(o->state==1) {o->a=1;o->b=0;fn_82C83B78(1,o->arg);}
 else {o->a=0;o->b=0;}
}
