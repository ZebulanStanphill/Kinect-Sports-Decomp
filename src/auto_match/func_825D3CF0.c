typedef struct Obj_825D3CF0 {
    char pad[0x38];
    int type;       /* 0x38 */
} Obj_825D3CF0;

typedef struct Ref_825D3CF0 {
    int handle;
} Ref_825D3CF0;

void fn_825D3A38(int handle, int match);

void fn_825D3CF0(Obj_825D3CF0 *self, Ref_825D3CF0 **ref)
{
    fn_825D3A38((*ref)->handle, self->type == 0x1c);
}
