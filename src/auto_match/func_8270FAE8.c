/* Returns a 12-byte tagged reference by value (hidden result pointer in r3),
 * so the context arrives in r4. Ref must be larger than 8 bytes: an 8-byte
 * struct is returned packed in r3 instead. */
typedef struct { char pad[8]; int rc; } Obj;
typedef struct { unsigned char type; Obj *obj; int unk8; } Ref;
typedef struct { char pad[0x30]; Obj *obj; } Ctx;

Ref fn_8270FAE8(Ctx *c)
{
    Ref r;
    Obj *o = c->obj;
    r.type = 5;
    r.obj = o;
    o->rc++;
    return r;
}
