typedef struct Value_82441700 { const char *text; unsigned int kind; } Value_82441700;
extern void fn_824BF8A8(unsigned int,Value_82441700 *);
extern void fn_82441298(unsigned int *,const char *,unsigned int);
void fn_82441700(unsigned int *self,unsigned int context) {
 Value_82441700 value;
 if(*self&0x100000) {value.kind=7;value.text="100meters_video";fn_824BF8A8(context,&value);}
 if(*self&0x4000) self[7]=1;
 fn_82441298(self,"100meters_running",context);
 if(*self&8) {value.kind=7;value.text="100meters_getready";fn_824BF8A8(context,&value);}
}
