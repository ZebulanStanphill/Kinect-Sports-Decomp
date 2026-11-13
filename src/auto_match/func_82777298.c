extern void fn_827771B0(unsigned char *);
extern void fn_826EA050(unsigned char *);
extern void fn_827B5EA8(unsigned char *);
extern void fn_827B02B0(unsigned char *);
extern void fn_8267BE38(unsigned char *);
extern void fn_827B0A40(unsigned char *);
extern void fn_827B84F8(unsigned char *);
extern char lbl_82015324[],lbl_8201532C[];
static void pair_destroy(unsigned char *p) { fn_827B5EA8(p+24);fn_827B5EA8(p+8); }
void fn_82777298(unsigned char *o) {
 unsigned char *p,*next;
 fn_827771B0(o); fn_826EA050(o+0x9e4);
 pair_destroy(o+0x978);pair_destroy(o+0x930);
 fn_827B5EA8(o+0x91c);fn_827B02B0(o+0x900);
 for(p=*(unsigned char **)(o+0x8e4);p;p=next) { next=*(unsigned char **)(p+0x9ec);fn_8267BE38(p); }
 fn_827B0A40(o+0x8e0);fn_827B84F8(o+0x40);
 for(p=*(unsigned char **)(o+0x24);p;p=next) {next=*(unsigned char **)(p+0x7f0);fn_8267BE38(p);}
 *(void **)(o+0x10)=lbl_82015324;*(void **)(o+8)=lbl_8201532C;
}
