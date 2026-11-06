typedef struct Socket_82D05988 { void (* *vt)(void *); int pad[7]; int socket; } Socket_82D05988;
extern int fn_82CE0A20(int,const void *,int,int);
int fn_82D05988(Socket_82D05988 *p,const void *buf,int len) {
 if(p->socket != -1) { int r=fn_82CE0A20(p->socket,buf,len,0); if(r>0 && r!=-1) return r; p->vt[4](p); } return 0;
}
