struct Del_824C6F50;
typedef struct DelVT_824C6F50 { void (*dtor)(struct Del_824C6F50 *, int); } DelVT_824C6F50;
typedef struct Del_824C6F50 { DelVT_824C6F50 *vt; } Del_824C6F50;
typedef struct Sub_824C6F50 { Del_824C6F50 *owner; char f4[0x1a0]; char f1a4[0x14]; char f1b8[0x18]; char f1d0[0x10]; } Sub_824C6F50;
typedef struct Obj_824C6F50 { char pad[0x10]; Sub_824C6F50 s; } Obj_824C6F50;
extern void fn_822980B0(void *p);
extern void fn_822B7E80(void *p);
extern void fn_82359C18(void *p);
extern void fn_8251FA58(int p);
extern void fn_82554630(void *p);

void fn_824C6F50(Obj_824C6F50 *o)
{
    Sub_824C6F50 *s = &o->s;
    Del_824C6F50 *d;
    fn_82359C18(s->f1d0);
    fn_8251FA58(*(int *)((char *)o + 0x1d8));
    fn_822980B0(s->f1b8);
    fn_822B7E80(s->f1a4);
    fn_82554630(s->f4);
    d = o->s.owner;
    if (d != 0)
        d->vt->dtor(d, 1);
}
