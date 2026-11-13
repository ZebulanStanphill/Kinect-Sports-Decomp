typedef struct Obj {
 void *vt; unsigned pad4; unsigned refs; unsigned padc;
 unsigned __int64 a,b; unsigned short c; unsigned char d,pad23;
 unsigned e,f,g,h,i,j,k,l,m,n,o;
 char rest[0xd0]; unsigned x,y,z,w;
} Obj;
extern int fn_82E58CA8();
extern int fn_82E73FF8();
extern unsigned int lbl_8215EF74;


Obj *
fn_82E74420(Obj *param_1,void *param_2,void *param_3,unsigned int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned short param_7,unsigned char param_8, unsigned int in_stack_00000054, int *in_stack_0000005c)

{
  int iVar1; const void * vtable = (const void *)&lbl_8215EF74;
  
  param_1->b = param_6;
  param_1->a = param_5;
  param_1->c = param_7;
  param_1->d = param_8;
  param_1->e = in_stack_00000054;
  param_1->k = (unsigned)param_3;
  param_1->refs = 1;
  param_1->f = 1;
  param_1->g = 0;
  param_1->h = 0;
  param_1->i = 0;
  param_1->vt = (void *)vtable;
  param_1->j = param_4;
  param_1->l = 0;
  param_1->m = 0;
  param_1->n = 0;
  param_1->o = 0;
  param_1->w = 0;
  param_1->z = 0;
  param_1->y = 0;
  param_1->x = 0;
  iVar1 = fn_82E58CA8(&param_1->m,1,0);
  if (in_stack_0000005c != (int *)0x0) {
    *in_stack_0000005c = iVar1;
  }
  if (iVar1 >= 0) {
    iVar1 = fn_82E73FF8(param_1,param_2,param_3);
    if (in_stack_0000005c != (int *)0x0) {
      *in_stack_0000005c = iVar1;
    }
    if (iVar1 >= 0) {
      param_1->f = 0;
      param_1->h = param_1->j;
    }
  }
  return param_1;
}

