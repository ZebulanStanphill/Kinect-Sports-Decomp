typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
typedef struct Owner_823F91E0 {int pad[2]; __vector4 *v0,*v1,*v2; float *f; unsigned char *b0,*b1,*b2; int *i0,*i1;} Owner_823F91E0;
typedef void (*Read_823F91E0)(void *,int,void *);
void fn_823F91E0(char *p,int key,unsigned offset) {
unsigned char b0,b1,b2; float f; int i0,i1; __vector4 v0,v1,v2;
(*(Read_823F91E0 *)(**(int **)(p+0x2c)+0x14))(*(void **)(p+0x2c),key,&v0);
(*(Read_823F91E0 *)(**(int **)(p+0x34)+0x14))(*(void **)(p+0x34),key,&v1);
(*(Read_823F91E0 *)(**(int **)(p+0x3c)+0x14))(*(void **)(p+0x3c),key,&v2);
(*(Read_823F91E0 *)(**(int **)(p+0x44)+0x14))(*(void **)(p+0x44),key,&f);
(*(Read_823F91E0 *)(**(int **)(p+0x4c)+0x14))(*(void **)(p+0x4c),key,&b0);
(*(Read_823F91E0 *)(**(int **)(p+0x54)+0x14))(*(void **)(p+0x54),key,&b1);
(*(Read_823F91E0 *)(**(int **)(p+0x5c)+0x14))(*(void **)(p+0x5c),key,&b2);
(*(Read_823F91E0 *)(**(int **)(p+0x64)+0x14))(*(void **)(p+0x64),key,&i0);
(*(Read_823F91E0 *)(**(int **)(p+0x6c)+0x14))(*(void **)(p+0x6c),key,&i1);
if(offset) {
Owner_823F91E0 *o=(Owner_823F91E0 *)p;
*(__vector4 *)((char *)o->v0+offset)=v0;
*(__vector4 *)((char *)o->v1+offset)=v1;
*(__vector4 *)((char *)o->v2+offset)=v2;
{unsigned char *base=o->b0; *(float *)((char *)o->f+offset)=f; base[offset]=b0;}
o->b1[offset]=b1; o->b2[offset]=b2;
*(int *)((char *)o->i0+offset)=i0; *(int *)((char *)o->i1+offset)=i1;
}}
