extern int XamUserGetXUID(unsigned,int,void *); int fn_82A1C048(unsigned x,void *out) {int r=XamUserGetXUID(x,7,out); if(r>=0) return 0; if((r&0x1fff0000)==0x70000) return r&0xffff; return 0x65b;}
