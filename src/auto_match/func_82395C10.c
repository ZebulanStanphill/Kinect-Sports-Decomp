extern void fn_82508078(unsigned,const char *,int);
void fn_82395C10(char *self) {
 int *table=***(int ****)(self+8);
 float before=*(float *)(((int *)table[0])[table[4]]+32);
 void *object=*(void **)(self+0x2e0);
 float value=(*(float (**)(void *))(*(int *)object+0x44))(object);
 *(float *)(self+(*(int *)(self+0xbd8)+0x2fb)*4)=value;
 *(float *)(self+(*(int *)(self+0xbd8)+0x2f7)*4)=(float)(int)before;
 ++*(int *)(self+0xbd8);
 if(*(int *)(self+0x178)==0)fn_82508078(*(unsigned *)(self+0xa4),"prematch_before_match",0);
 *(unsigned *)(self+0x260)|=0x1000;
}
