extern int fn_823B6790(void *);
extern int fn_823B6B30(void *);
typedef struct Interface_823B67F8 { unsigned *vt; } Interface_823B67F8;
int fn_823B67F8(char *self) {
 Interface_823B67F8 *p,*q;
 unsigned child;
 if(fn_823B6790(self) && *(int *)(self+0x50)==0 && *(int *)(self+0x10)==0) {
 child=*(unsigned *)(self+0xc);
 p=child ? (Interface_823B67F8 *)(child-0x68) : 0;
 q=((Interface_823B67F8 *(*)(Interface_823B67F8 *))p->vt[2])(p);
 q=(Interface_823B67F8 *)((char *)q+0x144);
 if(!((unsigned char (*)(Interface_823B67F8 *))q->vt[15])(q) && fn_823B6B30(self) && *(int *)(self+0x58)==0) return 1;
 }
 return 0;
}
