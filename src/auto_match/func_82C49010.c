typedef struct {int a,b,c,d,e;} Values_82C49010;
typedef struct {char pad[200];Values_82C49010 values;char more[0x280-220];unsigned char flags;} State_82C49010;
void fn_82C49010(State_82C49010 *d,int src) {
 Values_82C49010 *v=&d->values;
 v->a=*(int *)(src+0xf7c);v->b=*(int *)(src+0x55ac);v->c=*(int *)(src+0x5568);v->d=(int)*(double *)(src+0x5438);v->e=*(int *)(src+0xe84);
 d->flags|=0x80;
}
