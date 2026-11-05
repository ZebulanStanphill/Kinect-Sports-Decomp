typedef struct Format_82E6D818 { char pad[0x22]; unsigned short stride; char pad2[0x58-0x24]; unsigned extra; char pad3[8]; int mode; char pad4[6]; unsigned short bits; char pad5[0x20c-0x70]; int (*read)(void *,unsigned,unsigned short,unsigned); } Format_82E6D818;
void fn_82E6D818(Format_82E6D818 **pp,void *input,float *output,int n) {
 Format_82E6D818 *p=*pp; unsigned offset=0; int i;
 if(p->mode==0) {
 for(i=0;i<n;i++) { output[i]=(float)p->read(input,p->extra,p->bits,offset); offset+=p->stride; }
 } else {
 for(i=0;i<n;i++) { output[i]=(float)(1 << (p->bits-1))*((float *)input)[offset]; offset+=p->stride; }
 }
}
