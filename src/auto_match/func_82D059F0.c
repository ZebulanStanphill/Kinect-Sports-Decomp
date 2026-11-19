typedef struct Socket_82D059F0 { void (* *vt)(void *); int pad[7]; int socket; } Socket_82D059F0;
extern int send(int,const void *,int,int);
int fn_82D059F0(Socket_82D059F0 *p,const void *buf,int len) {
 if(p->socket != -1) { int r=send(p->socket,buf,len,0); if(r>0 && r!=-1) return r; p->vt[4](p); } return 0;
}
