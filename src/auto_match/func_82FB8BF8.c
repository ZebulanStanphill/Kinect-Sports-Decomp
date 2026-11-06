extern int fn_82FB8420(void *, int *, unsigned char *);
extern int fn_82FB8808(void *, int *, unsigned char *);
int fn_82FB8BF8(void *self, int *item, unsigned char *out) {
 int result=0;
 switch (*(unsigned *)(*item+0x1c)) {
 case 2: case 3: result=fn_82FB8808(self,item,out); break;
 case 0: case 1: result=fn_82FB8420(self,item,out); break;
 }
 return result;
}
