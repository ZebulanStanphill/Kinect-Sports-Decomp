extern unsigned lbl_83265988[];
extern int fn_823AB470(unsigned);
extern void fn_82A1C0C8(unsigned,unsigned);
void fn_82512308(void) {
 unsigned kind=fn_823AB470(lbl_83265988[0]);
 switch(kind) {
 case 0: fn_82A1C0C8(4,0x80002); break;
case 1: fn_82A1C0C8(4,0x80002); break;
 case 2: {
 unsigned char all=1,any=0;
 unsigned i;
 unsigned *p;
 i=1;
 if(lbl_83265988[10]>1) {p=lbl_83265988+1; do {
 unsigned item=*p;
 all=all && fn_823AB470(item)==2;
 any=any || *(unsigned char *)(item+0xd8)!=0;
 i++; p++; }while(i<lbl_83265988[10]); }
 if(all) return;
 if(any) fn_82A1C0C8(4,0x80002); else fn_82A1C0C8(1,0x480000);
 break;
 }
 }
}
