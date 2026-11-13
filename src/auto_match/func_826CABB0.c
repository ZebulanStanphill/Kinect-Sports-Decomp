typedef struct {
    char pad[0x1b8];
    void *body;
} Obj_826CABB0;
extern void fn_826C8590(Obj_826CABB0 *o, int flags);
extern void fn_82758408(void *body, float x, float y);
extern void fn_8269A5F8(Obj_826CABB0 *o);

void fn_826CABB0(Obj_826CABB0 *o, float x, float y)
{
    fn_826C8590(o, 0);
    fn_82758408(o->body, x * 20.0f, y * 20.0f);
    fn_8269A5F8(o);
}
