extern long _InterlockedExchangeAdd(long *, long);

typedef struct { int f0; long refs; int f8; } Obj_8268B330;
typedef struct { Obj_8268B330 *p; } Ref_8268B330;

extern Obj_8268B330 lbl_83155184;

/* Returns a counted reference to the global object through the hidden result pointer
   (96 callers pass a stack slot). */
Ref_8268B330 *fn_8268B330(Ref_8268B330 *out)
{
    out->p = &lbl_83155184;
    _InterlockedExchangeAdd(&lbl_83155184.refs, 1);
    return out;
}
