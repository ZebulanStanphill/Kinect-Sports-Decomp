typedef struct Obj_827E6D68 Obj_827E6D68;

typedef struct Vtbl_827E6D68 {
    void *slots[7];
    void *(*get)(Obj_827E6D68 *self);   /* slot at 0x1c */
} Vtbl_827E6D68;

struct Obj_827E6D68 {
    Vtbl_827E6D68 *vt;
    int pad[12];
    int count;                           /* 0x34 */
};

extern float fn_827E3828(void *p);

float fn_827E6D68(Obj_827E6D68 *param_1)
{
    return fn_827E3828(param_1->vt->get(param_1)) * (float)param_1->count;
}
