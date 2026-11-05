extern void fn_822315A0(unsigned);extern unsigned char fn_828ACC40(int);extern void fn_824C04E0(int,int);
typedef void (*Method_824C32B0)(int*,double);
void fn_824C32B0(int *p,double dt){int o=p[1];int r;
if(*(int*)(o+0x44)==0 && *(int*)(o+0x48)!=0){r=*(int*)(*(int*)(o+0x48)+8);
if(*(int*)(r+0xa0)!=0 && fn_828ACC40(r) && *(int*)(r+0xb4)!=1){unsigned *sub=(unsigned*)(o+0x68);unsigned old;
*(int*)(o+0x44)=6;old=sub[1];sub[1]=0;sub[0]=0;if(old)fn_822315A0(old);fn_824C04E0(o,1);return;}}
else if(*(int*)(o+0x44)!=0 && *(int*)(o+0x14)!=1)return;
(((Method_824C32B0*)*p)[1])(p,dt);}
