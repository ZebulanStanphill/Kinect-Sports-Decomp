extern int XamAvatarSetCustomAsset(unsigned,void *,unsigned,void *,int,void *);
int fn_82A81D40(unsigned a,void *b,unsigned c,void *d,void *e) {
 if(!a) return 0x80070057;
 if(!b) return 0x80070057;
 if(c && !d) return 0x80070057;
 if(c>3) return 0x80070057;
 if(!e) return 0x80070057;
 if(a>0xffffff) return 0x80004005;
 return XamAvatarSetCustomAsset(a,b,c,d,0,e);
}
