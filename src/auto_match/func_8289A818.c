typedef struct Var_8289A818 {
    void *vt;          /* 0x0 */
    int type;          /* 0x4 */
    void *data[4];     /* 0x8 */
    unsigned int size; /* 0x18 */
} Var_8289A818;

typedef struct Obj_8289A818 {
    void *vt;                 /* 0x0 */
    unsigned char busy;       /* 0x4 */
    unsigned char enabled[4]; /* 0x5 */
    int values[4];            /* 0xc */
    Var_8289A818 var;         /* 0x1c */
} Obj_8289A818;

extern void *fn_8236D750(void *value);
extern void fn_82899478(Var_8289A818 *dst, void *src, int idx);
extern char lbl_82023A58[];
extern char lbl_82023B40[];
extern char lbl_820239B4[];

static __forceinline void Base_Init(Obj_8289A818 *self, unsigned char disabled)
{
    int i;
    unsigned char enabled;

    self->vt = lbl_82023A58;
    {
        unsigned char *busy = &self->busy;

        *busy = 0;
    }
    enabled = disabled == 0;
    for (i = 0; i < 4; i++) {
        self->enabled[i] = enabled;
        self->values[i] = 0;
    }
}

static __forceinline void Var_Init(Var_8289A818 *var)
{
    int i;

    var->vt = lbl_820239B4;
    var->type = 9;
    for (i = 0; i < 4; i++) {
        var->data[i] = 0;
    }
    var->size = 0;
}

Obj_8289A818 *fn_8289A818(Obj_8289A818 *self, void *value, unsigned char disabled)
{
    void *src;

    Base_Init(self, disabled);
    self->vt = lbl_82023B40;
    Var_Init(&self->var);
    src = fn_8236D750(value);
    fn_82899478(&self->var, src, 0);
    return self;
}
