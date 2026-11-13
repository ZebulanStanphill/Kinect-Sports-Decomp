typedef struct { unsigned short a:4; unsigned short active:1; unsigned short rest:11; } Flags;
typedef struct { char pad[0x28]; unsigned char state; unsigned char spare; Flags flags; } Obj;
extern void fn_8278CF00(Obj *);
void fn_8278D2E0(Obj *o,unsigned char b) { if((unsigned char)o->flags.active && ((o->state&1)!=b)) fn_8278CF00(o); if(b) o->state|=1; else o->state&=~1; *(unsigned short *)&o->flags |= 0x10; }
