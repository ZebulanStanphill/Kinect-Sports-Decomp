typedef unsigned char byte;
extern void fn_827771B0(byte *);
extern void fn_826EA050(byte *);
extern void fn_827B5EA8(byte *);
extern void fn_827B02B0(byte *);
extern void fn_8267BE38(byte *);
extern void fn_827B0A40(byte *);
extern void fn_827B84F8(byte *);
extern char lbl_82015324[],lbl_8201532C[];
static void pair_destroy(byte *p) { fn_827B5EA8(p+24);fn_827B5EA8(p+8); }
void fn_82777298(byte *o) {
 byte *p,*next;
 fn_827771B0(o); fn_826EA050(o+0x9e4);
 pair_destroy(o+0x978);pair_destroy(o+0x930);
 fn_827B5EA8(o+0x91c);fn_827B02B0(o+0x900);
 for(p=*(byte **)(o+0x8e4);p;p=next) { next=*(byte **)(p+0x9ec);fn_8267BE38(p); }
 fn_827B0A40(o+0x8e0);fn_827B84F8(o+0x40);
 for(p=*(byte **)(o+0x24);p;p=next) {next=*(byte **)(p+0x7f0);fn_8267BE38(p);}
 *(void **)(o+0x10)=lbl_82015324;*(void **)(o+8)=lbl_8201532C;
}
