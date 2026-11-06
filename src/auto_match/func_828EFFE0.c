unsigned int strlen(const char *); int strncmp(const char *,const char *,unsigned int);
int fn_828EFFE0(const char *p) {
 if((unsigned char)*p=='v') { const char *end=p+strlen(p); if(end-p>3) { if(strncmp(end-3,"swx",3)==0 || strncmp(end-3,"xps",3)==0) return 1; } }
 return 0;
}
