typedef struct State_830828C0 { char pad[12]; unsigned char type,sub; char pad2[2]; unsigned short flags; } State_830828C0;
void fn_830828C0(State_830828C0 *s) {
 if (s->type==19) { unsigned char t=s->sub; s->sub=0; s->type=t; { unsigned short *f=&s->flags; *f|=0x400; } }
 if (s->type!=24 && s->type!=31) return;
 { unsigned short *p;
 if (s->flags&8) {p=&s->flags;s->sub=4;*p &= ~8;}
 else p=&s->flags;
 if (*p&16) {s->sub=6;*p &= ~16;}
 if (*p&32) {s->sub=8;*p &= ~32;}
 }
}
