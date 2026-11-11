extern int fn_82D74A58(void *);
extern int fn_82D6FF00(void *);
int fn_82D5BEC0(unsigned char *p) {
    if(p[0x84]) return fn_82D74A58(p);
    return fn_82D6FF00(p+0x30);
}
