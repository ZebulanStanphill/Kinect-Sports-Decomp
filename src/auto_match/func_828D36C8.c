typedef struct Copy36_828D36C8 { unsigned char data[36]; } Copy36_828D36C8;
typedef struct Copy8_828D36C8 { unsigned char data[8]; } Copy8_828D36C8;
typedef struct Copy16_828D36C8 { unsigned char data[16]; } Copy16_828D36C8;
typedef struct Object_828D36C8 { unsigned a,b,c,d; float f; Copy36_828D36C8 e; Copy8_828D36C8 g; Copy16_828D36C8 h; } Object_828D36C8;
extern void fn_828CCCC0(void *,unsigned,unsigned,int);
Object_828D36C8 *fn_828D36C8(Object_828D36C8 *dst,Object_828D36C8 *src) {
 dst->a=0;dst->b=0;fn_828CCCC0(dst,src->a,src->b,0);
 dst->c=src->c;dst->d=src->d;dst->f=src->f;
 dst->e=src->e;dst->g=src->g;dst->h=src->h;
 return dst;
}
