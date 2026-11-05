typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
typedef void (*Get_82236340)(void *,unsigned,void *);
typedef void (*Set_82236340)(void *,__vector4,__vector4,__vector4,float,unsigned,unsigned char);
void fn_82236340(char *self,unsigned arg,char *target) {
 char * alias_self=self;

 struct { unsigned char c; unsigned d; float f[2]; __vector4 a,b,cvec; } values;
 void *o;
 o=*(void **)(alias_self+0x68);(*(Get_82236340 *)(*(int *)o+0x14))(o,arg,&values.cvec);
 o=*(void **)(alias_self+0x70);(*(Get_82236340 *)(*(int *)o+0x14))(o,arg,&values.b);
 o=*(void **)(alias_self+0x78);(*(Get_82236340 *)(*(int *)o+0x14))(o,arg,&values.a);
 o=*(void **)(self+0x80);(*(Get_82236340 *)(*(int *)o+0x14))(o,arg,values.f);
 o=*(void **)(self+0x88);(*(Get_82236340 *)(*(int *)o+0x14))(o,arg,&values.d);
 o=*(void **)(alias_self+0x90);(*(Get_82236340 *)(*(int *)o+0x14))(o,arg,&values.c);
 if(*(unsigned *)(target+0x10)) (*(Set_82236340 *)(*(int *)(*(int *)(target+0x10))+4))(*(void **)(target+0x10),values.cvec,values.b,values.a,values.f[0],values.d,values.c);
}
