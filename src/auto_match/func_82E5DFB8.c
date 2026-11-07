typedef int Method_82E5DFB8();
extern char lbl_82154A98[];
extern int fn_82EE5898(int *,unsigned short,unsigned short);
int fn_82E5DFB8(int *source,int *query,unsigned int *output) {
 int status; int *object; unsigned short sa, sb; int *sptr; unsigned int scount; unsigned int i;
 if(!source || !query || !output) return 0x80070057;
 *output=0;sptr=0;scount=0;
 status=(**(Method_82E5DFB8 **)(*query+0x1c))(query,lbl_82154A98,&sptr);
 if(status>=0) {
  object=sptr;
  status=(**(Method_82E5DFB8 **)(*source+0xc))(source,&scount);
  if(status>=0) {
   for(i=0;i<scount;i++) {
     status=(**(Method_82E5DFB8 **)(*source+0x10))(source,i,&sb,&sa);
     if(status<0)goto cleanup;
     status=fn_82EE5898(object,sb,sa);
     if(status<0)goto cleanup;
   }
   *output=(unsigned int)sptr;
   if(sptr) (**(Method_82E5DFB8 **)(*sptr+4))(sptr);
  }
 }
cleanup:
 if(sptr)(**(Method_82E5DFB8 **)(*sptr+8))(sptr);
 return status;
}
