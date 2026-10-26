typedef struct { char pad[0x1c4]; int *begin; int *end; } Vec;
typedef struct { char pad[0x5c]; Vec *v; } Inner;
typedef struct { char pad[0x174]; Inner *in; } Obj;

unsigned char fn_8242E718(Obj *o)
{
    Vec *v = o->in->v;
    return (unsigned int)(v->end - v->begin) > 1;
}
