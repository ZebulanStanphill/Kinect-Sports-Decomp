extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697700();

struct Dev;
typedef struct DevVT { int pad[16]; struct Dev *(*f40)(struct Dev *); } DevVT;
typedef struct Sub { int p0; int p4; int p8; unsigned int flags; } Sub;
typedef struct Dev { DevVT *vt; char pad[0x940]; Sub sub; } Dev;
typedef struct Owner { char pad[0x74]; Dev *dev; } Owner;
typedef struct Out { unsigned char kind; char pad[3]; unsigned char ok; } Out;
typedef struct Obj { int p0; Out *out; int p8; int pc; int p10; int p14; Owner *owner; int cnt; } Obj;

void fn_826A7B88(Obj *param_1)
{
  if (1 <= param_1->cnt) {
    Owner *uVar1 = param_1->owner;
    unsigned int uVar4;
    unsigned int uVar5;
    Dev *d;
    Out *o;
    Sub *s;
    unsigned int uVar3;
    uVar4 = fn_826957D0(param_1, 0);
    uVar5 = fn_82697700(uVar4, uVar1);
    d = param_1->owner->dev;
    d = d->vt->f40(d);
    s = &d->sub;
    o = param_1->out;
    uVar3 = s->flags;
    fn_826959C8(o);
    o->kind = 2;
    o->ok = (uVar3 & uVar5) == uVar5;
  }
}
